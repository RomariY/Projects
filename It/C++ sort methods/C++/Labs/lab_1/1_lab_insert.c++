#include<iostream>

using namespace std;

int main(){
    int row, process = 1, min = 0, num, temp, count = 1, run_test;
    printf("Enter the numbrer of elements in array: ");
    scanf("%i",&row);
    while (row < 2)
    {
        /* code */
        printf("Num must be more than 1 \n");
        printf("Enter the numbrer of elements in array: ");
        scanf("%i",&row);
    } 
    
    
    int array[row];
    srand(time(NULL));
    printf("Array = ");
    for (num = 0; num < row; num++)
    {
        array[num] = rand() % 30 + 1;
        if (num == 0)
        {
            //printf("[ %i,", array[num]);
            cout << "[ " << array[num] << ",";
        }
        else if (num == row - 1)
        {
            //printf(" %i ]", array[num]);
            cout << " " << array[num] << " ]";
        }
        else{
            //printf(" %i,", array[num]);
            cout << " " << array[num] << ",";
        }
        

    }
    cout << endl;
    cout << endl;
    for (num = 0; num < row; num++)     
    {
        cout << count << ". ";
        do
        {
            if (array[min] > array[num])
            {
                temp = array[num];
                array[num] = array[min]; 
                array[min] = temp;
                min++;
            }    
            else{
                min++;
                continue;
            }
            
        } while (min < process);
        min = 0;
        
        for (run_test = 0; run_test < row; run_test++)
        {
            if (run_test == 0)
            {
                //printf("[ %i,", array[num]);
                cout << "[ " << array[run_test] << ",";
            }
            else if (run_test == row - 1)
            {
                //printf(" %i ]", array[num]);
                cout << " " << array[run_test] << " ]";
            }
            else{
                //printf(" %i,", array[num]);
                cout << " " << array[run_test] << ",";
            }
            

        }
        cout << endl;
        count++;

        if (process < row)
        {
            process++;
        }
        else{
            break;
        }
        
    }
    cout << endl;
    cout << "Sorted array: ";
    for (num = 0; num < row; num++)
    {
        if (num == 0)
        {
            //printf("[ %i,", array[num]);
            cout << "[ " << array[num] << ",";
        }
        else if (num == row - 1)
        {
            //printf(" %i ]", array[num]);
            cout << " " << array[num] << " ]";
        }
        else{
            //printf(" %i,", array[num]);
            cout << " " << array[num] << ",";
        }
        

    }
    cout << endl;
}