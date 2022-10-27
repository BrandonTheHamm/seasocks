#pragma once
// StringCompare.h, written by sjk7 (Steve) 22/10/2021
// Inherits seasocks licence.

// #include <string_view>
#include <string>
#include <strings.h>
#include <cctype>
#include <algorithm>

static inline bool compareCaseInsensitive(const std::string& lhs,
                                          const std::string& rhs) noexcept {
    auto left_len = lhs.length();
    auto right_len = rhs.length();
    if(left_len != right_len) {
        return false;
    }

    return strcasecmp(lhs.c_str(), rhs.c_str()) == 0;
    // replaces "return strcasecmp(lhs.c_str(), rhs.c_str()) == 0" directly
    // test coverage provided by:
    // TEST_CASE("case insensitive string comparison", "[ToStringTests]")
    // return ((lhs.size() == rhs.size()) &&
            // std::equal(lhs.begin(), lhs.end(), rhs.begin(), [](const std::string& a, const std::string& b) noexcept {
                // return std::tolower(static_cast<int>(a)) == std::tolower(static_cast<int>(b));
            // }));
}
