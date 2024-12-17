#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 8; i++) {
        for (int s = 1; s <= 8 - i; s++) {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--) {
            if (j % 3 == 0) 
                cout << "* ";
            else if (j % 5 == 0) 
                cout << "# ";
            else 
                cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}