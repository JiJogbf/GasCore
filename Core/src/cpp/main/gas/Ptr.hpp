#ifndef GAS_PTR_HPP
#define GAS_PTR_HPP

namespace gas{
    template<class T>
    class Ptr{
    private:
        T* mPtr;
    public:
        Ptr(T* ptr);
        ~Ptr();
    };
}

#include "Ptr_impl.hpp"

#endif