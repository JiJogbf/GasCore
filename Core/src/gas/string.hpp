#ifndef GAS_STRING_HPP
#define GAS_STRING_HPP

#include "types.hpp"

namespace gas{
    class Utf8String{
    public:
        Utf8String(char_cp source);
        ~Utf8String();
    };
}

#endif 