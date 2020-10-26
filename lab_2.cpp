#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main() {

    double A, x, y;
    cout << "Enter A:" << std::endl;
    cin >> A;
    cout << "Enter x:" << std::endl;
    cin >> x;
    if(x < 0) {
        y = x;
        cout << "y = " << y << endl;
    }
    else {
        y = A;
        cout << "y = " << y << endl;
    }
    return 0;
}