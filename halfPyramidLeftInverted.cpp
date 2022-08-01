#include <iostream>

using namespace std;

int main(){

    int rows;
    cout << "How many rows do you want:\t";
    cin >> rows;

    for (int i = rows; i > 0; i--){
        for (int j = i; j < rows; j++){
            cout << " ";
        }
        for (int j = i; j > 0; j--){
            cout << "*";
        }
        cout << endl;
    } 

    return 0;
}