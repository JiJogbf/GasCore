#ifndef GAS_THREAD_IMPL_HPP
#define GAS_THREAD_IMPL_HPP

namespace gas{
    namespace impl{
        class ThreadImpl{
        public:
            virtual ~ThreadImpl() = 0;
            virtual void join() = 0;
            virtual void start() = 0;
        };
    }
}

#endif 