#include <iostream>
#include<cmath>
using namespace std;

long double t(long double x) {
    long double v=0;
    long double n=0;
    for (int i = 0; i <= 10; i++) {
        long long ans = 1;
        for (int ii = 2 * i + 1; ii >= 1; ii = ii - 2) {
            ans = ans * ii;
        }
        v = v + ((pow(x,(2 * i + 1))) / ans);
    }
    for (int i = 0; i <= 10; i++) {
        long long ans = 1;
            for (int ii = 2 * i; ii >= 1; ii = ii - 2) {
                ans = ans * ii;
            }
        n = n + ((pow(x,(2 * i))) / ans);
    }
    return v/n;
}

int main()
{
    long double y;
    cin >> y;
    long double ans;
    //cout << "t(x)" << t(0.25)<<endl;
    ans = (7 * t(0.25) + 2 * t(1 + y)) / (6 - t(y * y - 1));
    cout << ans;
    return 0;
}
