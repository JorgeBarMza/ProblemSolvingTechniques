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
using namespace std;
int items;

vector<double> fractionalKnapsack(vector<int> w,vector<int> p, double remainingW){
    vector<double> result(items, 0);
    for (int i=0; i<items ; ++i) {
        if(w[i] <= remainingW){
            result[i] = 1;
            remainingW-= w[i];
        }
        else{
            result[i] = remainingW/w[i];
            remainingW = 0;
            break;
        }
    }
    return result;
}

int main(){
    std::ios::sync_with_stdio(0);
    items = 3;
    vector<int> weights = {50,40,30};
    vector<int> values = {10,20,30};
    int maxWeight = 100;
    vector<double> fractions = fractionalKnapsack(weights, values, maxWeight);
    for(auto f: fractions) cout << f << " ";
}

