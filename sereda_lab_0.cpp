#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main() {

    cout << "Hello world!!!" << endl;
        
    // vector <string> sp = {"1", "2", "3", "4", "5", "6", "7"};

    // for (string element : sp) {
    //     cout << element << endl;
    // }

    int x;
    cin >> x;
    if (x == 0) {
        cout << "error"s << endl;
    } else {
        cout << 10 / x;
    }
    return 0;
}