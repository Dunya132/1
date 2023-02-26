#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
int a;
int b;
a = 4;
b = 3;
int sum = 0;
int matrix[a][b];
for (int i = 0; i < a; i++){
    for (int j = 0; j < b; j++){
        int r  = rand() % 10;
        int sign = rand() % 2;
        if (sign < 1){
          r = r * -1;
        }
        matrix[i][j] = (i + r) + (j + r);
        if (r < 0){
            sum = sum + r;
        }
    }
}
cout << "Сумма отрицатильных элементов: " << sum;
}
