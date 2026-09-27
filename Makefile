CC ?= gcc
STD := -std=c11
WARN := -Wall -Wextra -Werror
DEBUG := -g -O0
SAN ?= -fsanitize=address,undefined

# Apple clang accepts ASan/UBSan. If a host cannot link sanitizers:
#   make test SAN=
CFLAGS ?= $(STD) $(WARN) $(DEBUG) $(SAN)
CPPFLAGS += -Iharness
LDFLAGS ?= $(SAN)

WEEK ?= 01
DAY ?= 01
KATA ?= strlen

EX_DIR := exercises/week-$(WEEK)/day-$(DAY)
KATA_SRC := katas/$(KATA).c

.PHONY: help test kata clean

help:
	@echo "make test WEEK=01 DAY=01   - run that day's test binaries"
	@echo "make kata KATA=strlen      - build and run one kata"
	@echo "make clean"

test:
	@set -e; \
	found=0; \
	for src in $(EX_DIR)/test_*.c; do \
		[ -e "$$src" ] || continue; \
		found=1; \
		bin="/tmp/bw-$$(basename $$src .c)"; \
		echo "COMPILE $$src"; \
		$(CC) $(CPPFLAGS) -I$(EX_DIR) $(CFLAGS) $(LDFLAGS) -o "$$bin" "$$src"; \
		echo "RUN $$bin"; \
		"$$bin"; \
		echo "OK $$src"; \
	done; \
	if [ "$$found" -eq 0 ]; then \
		echo "No test_*.c in $(EX_DIR)"; \
		exit 1; \
	fi

kata:
	@test -f $(KATA_SRC) || (echo "missing $(KATA_SRC)" && exit 1)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) -o /tmp/bw-kata-$(KATA) $(KATA_SRC)
	/tmp/bw-kata-$(KATA)

clean:
	rm -f /tmp/bw-test_* /tmp/bw-kata-*
	find . -name '*.o' -delete
	find . -name '*.dSYM' -type d -exec rm -rf {} + 2>/dev/null || true
