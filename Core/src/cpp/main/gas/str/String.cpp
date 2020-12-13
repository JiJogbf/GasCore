#include "String.hpp"

namespace gas{
namespace str{

#include <cstring>

String::String(char_cp source):
    mBuffer(nullptr), mLen(0)    
{
    if(source != nullptr){
        i32_t tmpLen = strlen(source) + 1;
        mBuffer = new char_t[tmpLen];
        memset(mBuffer, '\0', tmpLen);
        strcpy(mBuffer, source);
    }
}

String::~String(){
    delete mBuffer;
    mLen = 0;
}   

String::operator char_p()const{
    // @todo: handle nullptr case maybe done 
    // via virtual wrapper
    return mBuffer;
}

}
}