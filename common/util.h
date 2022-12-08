#pragma once
#include <inttypes.h>

[[nodiscard]] static inline int64_t min(int64_t x, int64_t y) {
    if (x > y) {
        return y;
    }
    return x;
}

[[nodiscard]] static inline int64_t max(int64_t x, int64_t y) {
    if (x > y) {
        return x;
    }
    return y;
} 

[[nodiscard]] static inline int64_t i64abs(int64_t x) {
    if (x < 0) {
        return -x;
    } else if (x == INT64_MIN) {
        return INT64_MAX;
    } else {
        return x;
    }
}
