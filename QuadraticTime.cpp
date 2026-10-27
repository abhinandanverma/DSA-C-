#include <iostream>
using namespace std;

int main() {

    int n = 10;

    // Outer loop
    for(int i = 0; i < n; i++) {

        // Inner loop
        for(int j = 0; j < n; j++) {

            cout << i << " " << j << endl;
        }
    }

    return 0;
}