#ifndef BW_TEST_H
#define BW_TEST_H

#include <stdio.h>
#include <stdlib.h>

#define BW_ASSERT(cond)                                                        \
    do {                                                                       \
        if (!(cond)) {                                                         \
            fprintf(stderr, "FAIL %s:%d: %s\n", __FILE__, __LINE__, #cond);    \
            exit(1);                                                           \
        }                                                                      \
    } while (0)

#define BW_ASSERT_EQ_INT(got, expected)                                        \
    do {                                                                       \
        int _got = (got);                                                      \
        int _exp = (expected);                                                 \
        if (_got != _exp) {                                                    \
            fprintf(stderr, "FAIL %s:%d: got %d expected %d\n", __FILE__,      \
                    __LINE__, _got, _exp);                                     \
            exit(1);                                                           \
        }                                                                      \
    } while (0)

#endif
