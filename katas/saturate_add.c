/*
 * Fluency kata: saturate_add from memory (same contract as day 01).
 *
 *   make kata KATA=saturate_add
 */
#include "bw_test.h"

static int saturate_add(int a, int b) {
    (void)a;
    (void)b;
    return -1; /* TODO */
}

int main(void) {
    BW_ASSERT_EQ_INT(saturate_add(2, 3), 5);
    BW_ASSERT_EQ_INT(saturate_add(80, 30), 100);
    BW_ASSERT_EQ_INT(saturate_add(-2, 1), 0);
    puts("ok saturate_add kata");
    return 0;
}
