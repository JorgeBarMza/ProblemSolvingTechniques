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
using namespace std;

vector<pair<int,int>> reparaciones;

vector<pair<int,int>> reparar(vector<pair<int,int>> optima){
    sort(optima.begin(), optima.end());
    return optima;
}


int main(){
    std::ios::sync_with_stdio(0);
    int id, tiempo;
    while (cin >> id >> tiempo){
        reparaciones.push_back(make_pair(tiempo, id));
    }
    reparar(reparaciones);
}
