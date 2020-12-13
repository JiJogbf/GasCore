#include "Object.hpp"

namespace gas{
    Object::Object(){}

    Object::~Object(){}

    String* Object::toString(){
        return "";
    }

    Object* Object::clone(){
        return new Object();
    }
}