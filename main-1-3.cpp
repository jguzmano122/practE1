#include <iostream>
using namespace std;

 double* duplicateArray(double* array, int size);

 int main () {
    int size = 5;
    double array [size] = {2,4,6,8,10};
    double *arrayNew = duplicateArray(array, size);


    for (int i = 0; i < size; i++){

       cout << arrayNew [i] << endl;


    }



    return 0;

 }

