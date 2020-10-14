#ifndef GAS_WIN_THREAD_HPP
#define GAS_WIN_THREAD_HPP

namespace gas{
    namespace impl{

        class WinThreadImpl{
        public:
            ~WinThreadImpl();
            void join();
            void start();
        };
    }
}

#endif 