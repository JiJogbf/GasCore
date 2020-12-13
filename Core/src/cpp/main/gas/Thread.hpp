#ifndef GAS_THREAD_HPP
#define GAS_THREAD_HPP

#include "Object.hpp"

#include <windows.h>

namespace gas{
    namespace impl{
        class ThreadImpl;
    }

    class Thread: public Object{
    private:
        // impl::ThreadImpl* mImpl;
        // void runInternal();
        HANDLE mHandle;
        DWORD mId;
    public:
        Thread();
        virtual ~Thread();
        void start();
        void join();
        virtual void run();
    };
}

#endif