

#include <iostream>
using namespace std;


double arrayMin(double* array, int size) {

size = 5;
array [size] = {};
double min = array[0];

for (int i = 1; i < size; i++){

    if (array[i] < min) {

        min = array[i];

    }

}  //cout << min;

return min;

}


