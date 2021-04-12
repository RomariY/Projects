#include <iostream>
#include <ctime> 

using namespace std;

int main(){
    int startTime, endTime, resTime, listNum = 17;
    startTime = clock();
    int row, process, min, num, temp, count = 1;
    printf("Enter the numbrer of elements in array: ");
    scanf("%i",&row);
    while (row < 2)
    {
        /* code */
        printf("Num must be more than 1 \n");
        printf("Enter the numbrer of elements in array: ");
        scanf("%i",&row);
    } 
    row = row * listNum;
    
    
    int array[row];
    srand(time(NULL));
    printf("Array = ");
    for (num = 0; num < row; num++)
    {
        array[num] = rand() % (20 * listNum) + 1;
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


    /*Select method */
    for (num = 0; num < row; num++)
    {
        cout << count << ". ";
        
        for (min = num; min < row; min++)
        {
            //cout << array[min] << ", ";
            
            if (array[min] < array[num])
            {
                temp = array[num];
                array[num] = array[min]; 
                array[min] = temp;
            }    
            else{
                continue;
            }
        }
        process = 0;
        for (process = 0; process < row; process++)
        {
            /* code */
            
            if (process == 0)
            {
                cout << "[ " << array[process] << ",";
            }
            else if (process == row - 1)
            {
                //printf(" %i ]", array[num]);
                cout << " " << array[process] << " ]";
            }
            else{
                //printf(" %i,", array[num]);
                cout << " " << array[process] << ",";
            }
            
        }
        count++;
        cout << endl;
    }

    cout << endl;
    cout << "Sorted array: "; 
    for (num = 0; num < row; num++)
    {
        if (num == 0)
        {
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

    endTime = clock();
    resTime = endTime - startTime;
    cout << "Time: " << resTime;
    cout << endl;
    return 0;
}