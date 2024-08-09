

void modifyArray(double* array, int size, double value){

    value = 1.5;

    for (int i = 0; i < size; i++){

        array[i] = array[i] * value;

    }



}