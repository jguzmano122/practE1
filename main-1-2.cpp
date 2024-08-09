// driver of Q-1-2

#include <iostream>
using namespace std;

void modifyArray(double* array, int size, double value);

int main (){

int size = 5;
double value = 1.5;
double array [size] = {2,6,10,12,5};

 modifyArray(array, size, value);

for (int i = 0; i < size ; i++){

    // cout << array [i]  << endl;

}


return 0;


}