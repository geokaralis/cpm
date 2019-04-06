//
//  token.hpp
//  cpm
//
//  Created by George on 05/04/2019.
//

#ifndef token_h
#define token_h

#include <iostream>
#include <string>

namespace cpm {
    class Token {
    public:
        void generate();
        std::string fingerprint();
        Token() = default;
        ~Token() = default;
    };
}

#endif /* token_hpp */
