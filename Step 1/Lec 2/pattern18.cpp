#include<iostream>
using namespace std;

void printPattern(int n) {

    for(int i = 0; i<n; i++) {
        for(char ch = 'C' - i; ch <= 'C'; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }

}

int main() {

    int n;

    cout << "Enter a number: ";
    cin >> n;

    printPattern(n);

    return 0;
}