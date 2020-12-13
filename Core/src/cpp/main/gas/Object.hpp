#ifndef GAS_OBJECT_HPP_13122020_144423
#define GAS_OBJECT_HPP_13122020_144423

#include "String.hpp"

namespace gas{
    class String;

    class Object{
    public:
        Object();
        virtual ~Object();
        virtual String* toString();
        virtual Object* clone();
    };
}

#endif