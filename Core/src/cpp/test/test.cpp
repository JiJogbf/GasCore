#include <gas/string.hpp>
#include <iostream>

int main(int argc, char** argv){
    gas::Utf8String s = "hello world";
    std::cout << s << std::endl;
    return 0;
}