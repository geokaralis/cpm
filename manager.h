//
//  manager.hpp
//  cpm
//
//  Created by George on 05/04/2019.
//

#ifndef manager_h
#define manager_h

#include <iostream>
#include "token.h"

namespace cpm {
    class Manager {
    public:
        void init();
        void init(cpm::Token* token);
        
        Manager() = default;
        ~Manager() = default;
    };
}

#endif /* manager_hpp */
