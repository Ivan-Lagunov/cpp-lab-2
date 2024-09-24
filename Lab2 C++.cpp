#include <iostream>
#include<cmath>
using namespace std;

float t(float x) {
    float v=0;
    float n=0;
    for (int i = 0; i <= 10; i++) {
        int ans = 1;
        for (int ii = 2 * i + 1; ii >= 1; ii = ii - 2) {
            ans = ans * ii;
        }
        v = v + (pow(x,(2 * i + 1))) / ans;
    }
    for (int i = 0; i <= 10; i++) {
        int ans = 1;
            for (int ii = 2 * i; ii >= 1; ii = ii - 2) {
                ans = ans * ii;
            }
        n = n + (pow(x,(2 * i))) / ans;
    }
    return v/n;
}

int main()
{
    float y;
    cin >> y;
    float ans;
    //cout << "t(x)" << t(0.25)<<endl;
    ans = (7 * t(0.25) + 2 * t(1 + y)) / (6 - t(y * y - 1));
    cout << ans;
    return 0;
}
