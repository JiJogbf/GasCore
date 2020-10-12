#include "string.hpp"

#include <cstring>

namespace gas{
    Utf8String::Utf8String(char_cp source):
        mBuffer(nullptr), mLen(0)
    {
        mLen = strlen(source);
        mBuffer = new char_t[mLen + 1];
        memset(mBuffer, 0, mLen + 1);
        strcpy(mBuffer, source);
    }

    Utf8String::Utf8String(const Utf8String& source):
        Utf8String(source.mBuffer)
    {}

    Utf8String::~Utf8String(){
        mLen = 0;
        delete[] mBuffer;
    }       

    Utf8String::operator char_p()const{
        return mBuffer;
    }

}