// Введите последовательность чисел и создайте динамический массив чисел перед первым числом
// с нулевым значением или всеми числами (в случае, если нет нуля). Напишите функцию для расчета
// произведение элементов с абсолютным значением меньше 10

#include <iostream>
#include <stdlib.h>     
#include <time.h>

using namespace std;

int product_array_less(int less,int size,int array1d[]){
    int product = 1;
    for (int i = 0; i<size-1;i++){
        if(array1d[i]<less){
            product*=array1d[i];  
        }
    }
    return product;
}

int main(){
    int size = 10;
    int *array1d_before = new int[size];
    // fill matrix
    srand ( time(0) );
    for (int i = 0; i<size;i++){
        array1d_before[i] = (rand() % 10);    
    }
    // output
    for (int i = 0; i<size;i++){
        cout << "[" << array1d_before[i] << "]";  
    }
    cout << endl;
    // processing
    //  counter
    int counter = 0;
    for (int i = 0; i<size;i++){
        counter++;
        if(array1d_before[i] == 0){
            break;
        }
    }
    int *array1d_after = new int[counter]; 
    // processing
    for (int i = 0; i<counter-1;i++){
          array1d_after[i] = array1d_before[i];
    }
    // output
    for (int i = 0; i<counter-1;i++){
        cout << "[" << array1d_after[i] << "]";  
    }
    cout << endl;    
    cout << "product = " << product_array_less(10,counter,array1d_after) << endl;
    system("pause");
    return 0;
}
// [9][3][4][0][7][4][2][7][4][4]
// [9][3][4]
// product = 108
