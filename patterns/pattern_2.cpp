// *
// * * 
// * * *
// * * * *
// * * * * *


// 0th row -> 1
// 1 -> 2*
// 2 -> 3*
// 3 -> 4*





#include<iostream>
using namespace std;


void printPattern(int number_of_row){
    for (int i = 0; i < number_of_row; i++)
    {
        for (int j = 0; j <= i; j++) // when i = 1, j = 0, 1 means 2 stars; i = 2, j = 0, 1, 2 
        {
            cout << "* ";
        }
        cout << endl;
    }
    
}


int main(){
    int rows;
    cin >> rows;

    printPattern(rows);
}