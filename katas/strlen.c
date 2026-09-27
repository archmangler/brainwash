/*
 * Fluency kata: implement bw_strlen.
 * Timer on. Do not look up the C library.
 *
 *   make kata KATA=strlen
 */
#include "bw_test.h"

static int bw_strlen(const char *s) {
    (void)s;
    return -1; /* TODO: count characters before '\0'. s is never NULL in tests. */
}

int main(void) {
    BW_ASSERT_EQ_INT(bw_strlen(""), 0);
    BW_ASSERT_EQ_INT(bw_strlen("a"), 1);
    BW_ASSERT_EQ_INT(bw_strlen("hi"), 2);
    BW_ASSERT_EQ_INT(bw_strlen("brainwash"), 9);
    puts("ok strlen kata");
    return 0;
}
