#include "domain_review.h"
#include <assert.h>
#include <string.h>

int main(void) {
    DomainReview item = {50, 32, 31, 70};
    assert(domain_review_score(item) == 109);
    assert(strcmp(domain_review_lane(item), "watch") == 0);
    return 0;
}
