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


int main(){
    int answer = decToBin(81);
    cout << answer << endl;
    return answer;
}


