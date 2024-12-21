#include<iostream>
using namespace std;

void printAPattern(int n){
    for(int i=0;i < n; i++){
        for (int j = 0; j < n; j++)
            {   
                cout << "*";
            };
        cout << endl;
    }
}

int main()
{
    cout << "How many * in a single line and number of rows?" << endl;
    int n;
    cin >> n;
    printAPattern(n);
}