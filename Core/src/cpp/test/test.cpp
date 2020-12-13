#include <gas/str/String.hpp>
#include <gas/Ptr.hpp>
#include <gas/Thread.hpp>
#include <iostream>

struct Mock{
    int data;
    Mock(int data): data(data){
        std::cout << "Mock()" << std::endl;
    }
    ~Mock(){
        std::cout << "~Mock()" << std::endl;
    }
};

class MyThread: public gas::Thread{
public:
    void run() override;
};

void MyThread::run(){
    int i = 0; 
    std::cout << "Thread started" << std::endl;
    while (i < 100000) {
        i++;
        std::cout << "i = " << i << std::endl;
    }
    std::cout << "Thread finished" << std::endl;
}

void testString(){
    // gas::Utf8String s = "hello world";
    // std::cout << s << std::endl;
}

void testPtr(){
    gas::Ptr<Mock> ptr(new Mock(12));
}

void testThread(){
    MyThread thread;
    thread.start();
    thread.join();
}

int main(int argc, char** argv){
    testString();
    testPtr();
    testThread();
    return 0;
}