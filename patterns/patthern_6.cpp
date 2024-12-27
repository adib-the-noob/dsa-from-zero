// 12345
// 1234
// 123
// 12
// 1

#include<iostream>
using namespace std;

void printPattern(int total_rows){
    for (int i = 1; i <= total_rows; i++) // i = row_number
    {
        for (int j = 1; j < (total_rows - i + 1) ; j++) // n = total_st, i = row_number;
        {
            cout << j << "";
        }
        cout << endl;
    }
    
}

int main(){
    printPattern(6); // for 6 rows, first row will containe => 6 - 1 + 1; 6 stars
}
