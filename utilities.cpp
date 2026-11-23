#include "utilities.h"
#include <fmt/format.h>

void do_work()
{
    fmt::println("Hello, World\n");
    fmt::println("World\n");

    int num1 {5};
    int num2 {6};
    int result = add_numbers(num1, num2);
    fmt::println("Result : {}", result);
}

int add_numbers(int number1, int number2)
{
    return number1 + number2;
}