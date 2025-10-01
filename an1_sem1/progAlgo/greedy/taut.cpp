#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct cube {
    int lenght;
    int color; // p colors
};

bool cmp(cube a, cube b) {
    return a.lenght < b.lenght;
}

int main () 
{
    int n, p;
    cin >> n >> p;
    cube v[n];
    for (int i = 0; i < n; i++)
        cin  >> v[i].lenght;
    sort(v, v + n, cmp);
    for (int i = 0; i < n; i++) {

    }
}