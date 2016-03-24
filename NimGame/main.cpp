//
//  main.cpp
//  NimGame
//
//  Created by csdc-iMac on 16/3/24.
//  Copyright © 2016年 Cloudox. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    bool canWinNim(int n);
    bool win = canWinNim(5);
    printf("result=%d\n",win);
    return 0;
}

bool canWinNim(int n) {
    return n % 4 == 0 ? false : true;
}
