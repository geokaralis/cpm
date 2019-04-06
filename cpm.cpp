#include <iostream>

#include "manager.h"

// Sample:
// cpm install glfw@1.2.0
// cpm -i glfw@latest

// cpm install glfw

int main() {
    cpm::Token* token = new cpm::Token();
    token->generate();
    
    cpm::Manager* mgr = new cpm::Manager();
    mgr->init(token);
}
