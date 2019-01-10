//
//  main.cpp
//  AtCoderABC087BCoins
//
//  Created by osu on 2019/01/03.
//  Copyright © 2019 osu. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int A(0), B(0), C(0), X(0);

    std::cin >> A;
    std::cin >> B;
    std::cin >> C;
    std::cin >> X;

    int count = 0;
    for(int a=0; a<=A; a++) {
        for(int b=0; b<=B; b++) {
            for(int c=0; c<=C; c++) {
                if(X == (a*500) + (b*100) + (c*50)) {
                    count++;
                }
            }
        }
    }

    std::cout << count;

    return 0;
}
