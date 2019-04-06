//
//  manager.cpp
//  cpm
//
//  Created by George on 05/04/2019.
//

#include "manager.h"

void cpm::Manager::init() {
    std::cout << "Initializing manager..." << std::endl;
}

void cpm::Manager::init(cpm::Token* token) {
    std::cout << "Initializing manager with fingerprint: [" + token->fingerprint() + "]" << std::endl;
}
