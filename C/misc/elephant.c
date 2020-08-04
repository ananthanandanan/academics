#include <stdio.h>
#include <stdlib.h>
#define AVG(sum,n) sum/n // macro to compute the average

int main() {

    FILE *file_ptr ;
    file_ptr = fopen("data.txt","r");   //open the file to read

    int raw_data[1000],SIZE,avg=0,sum=0;
    SIZE = 1000;

    if (file_ptr == NULL){                          // checks wehter file is empty or not
        printf("Error Reading File\n");
        exit (0);
    }

    for (int i = 0; i < SIZE; i++){
        fscanf(file_ptr, "%d,", &raw_data[i] );
         sum += raw_data[i];
    }

    avg = AVG(sum,SIZE);  // average is computed
    printf("The Average weight of %d elephants is: %d\n",SIZE,avg);

    fclose(file_ptr);
    
    return 0;
}