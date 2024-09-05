#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main() {

    cout << "Hello world!!!" << endl;

    int x;
    cin >> x;
    if (x == 0) {
        cout << "error"s << endl;
    } else {
        cout << 10 / x;
    }
    return 0;
}