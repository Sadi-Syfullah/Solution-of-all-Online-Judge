#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    int arr[5001] = {};
    for(n = 1; n <= 5000; n++) {
        char used[10] = {};
        m = n;
        while(m) {
            if(used[m%10])  break;
            used[m%10] = 1;
            m /= 10;
        }
        if(m == 0)  arr[n] = 1;
        arr[n] += arr[n-1];
    }
    while(scanf("%d %d", &n, &m) == 2) {
        printf("%d\n", arr[m]-arr[n-1]);
    }
    return 0;
}
