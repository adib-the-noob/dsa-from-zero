// 1 
// 2 2
// 3 3 3
// 4 4 4 4 

#include<iostream>
using namespace std;

void printPattern(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    
}

int main(){
    printPattern(4);
    return 0;
}
