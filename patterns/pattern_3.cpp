// 1 
// 1 2
// 1 2 3
// 1 2 3 4

#include<iostream>
using namespace std;

void printPattern(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    
}

int main(){
    printPattern(4);
    return 0;
}
