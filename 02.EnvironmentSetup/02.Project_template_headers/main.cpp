/*
    . Project description
        . Topic #1
        . Topic #2
*/

#include "utilities.h"
#include <fmt/format.h>

int main() {
    int value {10};
    int value1 {20};
    fmt::println("Hello, World! . I am doing modern cpp\n");
    fmt::println("The sky is blue.\n");
    fmt::println("One\n");
    fmt::println("The value are {} and {}", value, value1);
}