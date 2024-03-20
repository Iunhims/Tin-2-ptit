#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int count[10] = {0};
    for (int i = a; i <= b; i++) {
        int x = i;
        while (x > 0) {
            count[x % 10]++;
            x /= 10;
        }
    }
    for (int i = 0; i < 10; i++) {
        cout << i << " la: " << count[i] << endl;
    }
    return 0;
}
