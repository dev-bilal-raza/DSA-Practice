#include <iostream>
using namespace std;

// Decimal to Binary:
int decToBin(int decNum){
    int answer = 0, pow = 1;
    while(decNum>0){
        int rem = decNum % 2;
        decNum = decNum / 2;
        answer+= (rem * pow);
        pow *= 10;
    }
    return answer;
}

// Decimal to Binary:
int binToDec(int binNum){
    int answer = 0, pow = 1;
    while(binNum>0){
        int rem = binNum % 10;
        cout << rem<< endl;
        binNum = binNum / 10;
        cout << binNum << endl;
        answer+= (rem * pow);
        pow *= 2;
    }
    cout << "Hello " << 2/1<< endl;
    return answer;
}


int main(){
    // int answer = decToBin(81);
    int answer = binToDec(101001);
    cout << answer << endl;
    return answer;
}


