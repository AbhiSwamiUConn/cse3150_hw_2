#include <iostream>
#include <string>
#include "GreetingUtils.h"

namespace GreetingUtils{
    std::string create_message(const std::string& name){
        return "Hello, " + name + "!";
    }
    char* format_as_c_string(const std::string& msg){
        int length = msg.length();
        char* cstring = new char[length + 1];
        for(int i = 0; i < length; ++i){
            cstring[i] = msg[i];
        }
        cstring[length] = '\0';
        return cstring;
    }
}
