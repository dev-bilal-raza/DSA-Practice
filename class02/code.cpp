#include <iostream>
using namespace std;

int main (){

    // Question 01
    // int n = 4;
    // char charac = 1;
    // for (int i=1; i<=n; i++){
    //     for (int j=1; j<=n; j++){
    //         cout << charac ;
    //         charac ++;
    //     }
    //     cout << endl;
    // } 

    // Question 02
    // int n = 7;
    // for (int i=1; i<=n; i++){
    //     for (int j=0; j<i; j++){
    //         cout << "*" ;
    //     }
    //     cout << endl;
    // } 

    // Question 03
    // int n = 5;
    // for (int i=1; i<=n; i++){
    //     for (int j=i; j>0; j--){
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // // Question 04
    // int n = 5;
    // for (int i=0; i<n; i++){
    //     for (int j=0; j<i; j++){
    //         cout << " ";
    //     }
    //     for (int k=1; k<=n-i; k++){
    //         cout << i+1;
    //     }
    //     cout << endl;
    // }

    // Question 05
    int n = 5;
    for (int i=0; i<n; i++){
        for (int j=0; j<n-i-1; j++){
            cout << " ";
        }
        for (int k=1; k<=i+1; k++){
            cout << k;
        }
        for (int l=i; l>=1; l--){
            cout << l;
        }
        
        cout << endl;
    }
}