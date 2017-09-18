//
//  queens.cpp
//  AlgorithmProblems
//
//  Created by Jorge Barrios on 9/18/17.
//  Copyright © 2017 Jorge Barrios. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>
#include <bitset>
#define m 10
using namespace std;

int row[m], lineCounter;

bool place(int r, int c) {
    for (int prev = 0; prev < c; prev++)
        if (row[prev] == r || (abs(row[prev] - r) == abs(prev - c))) return false;
    return true;
}

void backtrack(int c) {
    if (c == m) {
        for (int i = 0; i < m ; ++i) cout << row[i] << " ";
        cout << "\n";
        return;
    }
    for (int r = 0; r < m; r++){
        if (place(r, c)) {
            row[c] = r;
            backtrack(c + 1);
        }
    }
}

int main(){
    backtrack(0);
    // each line of numbers is a solution. It contains m numbers representing the column of the queen for that row
}




