#include "bw_test.h"
#include "ex_saturate.c"

int main(void) {
    BW_ASSERT_EQ_INT(saturate_add(1, 2), 3);
    BW_ASSERT_EQ_INT(saturate_add(40, 70), 100);
    BW_ASSERT_EQ_INT(saturate_add(100, 1), 100);
    BW_ASSERT_EQ_INT(saturate_add(-3, 1), 0);
    BW_ASSERT_EQ_INT(saturate_add(0, 0), 0);

    BW_ASSERT_EQ_INT(clamp(5, 0, 10), 5);
    BW_ASSERT_EQ_INT(clamp(-1, 0, 10), 0);
    BW_ASSERT_EQ_INT(clamp(99, 0, 10), 10);

    puts("ok saturate");
    return 0;
}
