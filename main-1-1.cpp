// driver of Q-1-1

#include <iostream>
using namespace std;

double arrayMin(double* array, int size);

int main (){

int size = 5;
double mini = 0;
double array [size] = {2,6,10,12,5};

mini = arrayMin(array, size);

cout << mini << endl;

return 0;


}