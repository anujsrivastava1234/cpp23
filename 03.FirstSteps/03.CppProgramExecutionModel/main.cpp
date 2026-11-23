// use clangd
//use codelldb
#include "utilities.h"
#include <string_view>
#include <fmt/format.h>

int f_add(int a, int b)
{
    return a + b;
}

void print_msg(std::string_view msg)
{
    fmt::println("{}", msg);
}

int main(int argc, const char** argv) {
    int a = 10;
    int b = 5;
    int c ;

    print_msg("message1");
    print_msg("message2");
    c = f_add(a,  b);
    fmt::println("c : {}", c);
    print_msg("message3");
    print_msg("message4");

return 0;
}