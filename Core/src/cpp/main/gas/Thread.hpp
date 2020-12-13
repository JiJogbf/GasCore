#ifndef GAS_THREAD_HPP
#define GAS_THREAD_HPP

#include "Object.hpp"
#include "Task.hpp"

#include <windows.h>

namespace gas{
    namespace impl{
        class ThreadImpl;
    }

    class Thread: public Object{
    private:
        HANDLE mHandle;
        DWORD mId;
        Task* mTask;
    public:
        Thread();
        Thread(Task* task);
        virtual ~Thread();
        void start();
        void join();
        virtual void run();
    };
}

#endif