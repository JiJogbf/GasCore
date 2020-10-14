#include "Thread.hpp"

#include "impl\ThreadImpl.hpp"

namespace gas{

    static DWORD WINAPI proc(LPVOID ptr){
        ((Thread*)ptr)->run();
        return 0;
    }

    Thread::Thread(): 
        mHandle(INVALID_HANDLE_VALUE), mId(0)
    {}

    Thread::~Thread(){
        if(mHandle != INVALID_HANDLE_VALUE){
            CloseHandle(mHandle);
            mId = 0;
        }
    }
    
    void Thread::start(){
        mHandle = CreateThread(NULL, 0, 
            /*thread_func*/proc,
            /*data*/this,
            0, &mId);
    }   

    void Thread::join(){
        WaitForSingleObject(mHandle, INFINITE);
    }       

    void Thread::run(){}
}
