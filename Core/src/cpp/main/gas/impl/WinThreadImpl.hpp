#ifndef GAS_WIN_THREAD_HPP
#define GAS_WIN_THREAD_HPP

#include "..\Task.hpp"
#include "ThreadImpl.hpp"

#include <windows.h>

namespace gas{
    namespace impl{
        namespace win{
            class WinThreadImpl: public gas::impl::ThreadImpl{
            private:
                HANDLE mHandle;
                DWORD mId;
            public:
                WinThreadImpl(Task* task);
                ~WinThreadImpl();
                void join() override;
                void start() override;
            };
        }
    }
}

#endif 