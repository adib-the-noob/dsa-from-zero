// * * * * *
// * * * *
// * * *
// * * 
// * 

// 1st -> 5 = total_row - row no + 1 = [ 5 - 1 + 1]
// 2nd Row -> 4 : [ 5 - 2 + 1] = 4
// 3rd row - 3 : [5 - 3 + 1] = 3



#include<iostream>
using namespace std;

void printPattern(int total_rows){
    for (int i = 1; i <= total_rows; i++) // i = row_number
    {
        for (int j = 0; j < (total_rows - i + 1) ; j++) // n = total_st, i = row_number;
        {
            cout << "* ";
        }
        cout << endl;
    }
    
}

int main(){
    printPattern(6); // for 6 rows, first row will containe => 6 - 1 + 1; 6 stars
}