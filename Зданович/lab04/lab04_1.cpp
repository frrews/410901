#include <iostream>
using namespace std;
int main()
{
    int amm = 0, c;
    cin >> c;
    int array[5];
    for (int i = 0; i < 5; i++) {
        int k;
        cin >> k;
        array[i] = k;
        if (array[i] < c) {
            amm++;
        }
    }
    cout << amm;
    return 0;
}
