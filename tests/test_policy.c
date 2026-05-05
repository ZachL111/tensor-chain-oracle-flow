#include "policy.h"
#include <assert.h>
#include <string.h>

int main(void) {
    Signal signal_case_1 = {56, 99, 23, 7, 7};
    assert(score_signal(signal_case_1) == 128);
    assert(strcmp(classify_signal(signal_case_1), "review") == 0);
    Signal signal_case_2 = {82, 85, 17, 24, 8};
    assert(score_signal(signal_case_2) == 102);
    assert(strcmp(classify_signal(signal_case_2), "review") == 0);
    Signal signal_case_3 = {67, 107, 11, 23, 9};
    assert(score_signal(signal_case_3) == 120);
    assert(strcmp(classify_signal(signal_case_3), "review") == 0);
    return 0;
}
