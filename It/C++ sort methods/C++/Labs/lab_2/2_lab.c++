#include<iostream>
#include <ctime> 
using namespace std;

int arrGen(int array[], int row, int N){
    int num;
    for (num = 0; num < row; num++)
    {
        array[num] = rand() % (20 * N) + 1;
              

    }
    return array[row];
}
void arrOut(int array[], int row){
    int num;
    for (num = 0; num < row; num++)
    {
        if (num == 0)
        {
            cout << "[ " << array[num] << ",";
        }
        else if (num == row - 1)
        {
            cout << " " << array[num] << " ]";
        }
        else{
            cout << " " << array[num] << ",";
        }
        

    }
}

/* Array sort methods*/

int bblSort(int array[],int row){
    int num, min, temp;
    for (num = row - 1; num > -1; num--)
    {
        for (min = row - 1; min > -1; min--)
        {
            if (array[min] < array[num])
            {
                temp = array[num];
                array[num] = array[min];
                array[min] = temp;

            }
            else
            {
                continue;
            }
            
        }
    }
    return array[row];
}

int insSort(int array[], int row){
    int num, temp, min = 0, process = 1;
    for (num = 0; num < row; num++)     
    {
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

        if (process < row)
        {
            process++;
        }
        else{
            break;
        }
        
    }
    return array[row];
}

int selSort(int array[], int row){
    int min, num, temp;
    for (num = 0; num < row; num++)
    {        
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
    }
    return array[row];
}

int shkSort(int array[], int row){
    int left = 0, right = row, k = row - 1;
    int tempLf = 0, tempRt = row , temp;
    do
    {
        for (tempLf = 0; tempLf < right; tempLf++)
        {
            if (array[tempLf] > array[tempLf + 1])
            {
                temp = array[tempLf + 1];
                array[tempLf + 1] = array[tempLf];
                array[tempLf] = temp;
            }
            else
            {
                continue;
            }
            
            
        }
        right--;
        for (tempRt; tempRt > left; tempRt--)
        {
            if (array[tempRt] > array[tempRt - 1])
            {
                temp = array[tempLf - 1];
                array[tempLf - 1] = array[tempLf];
                array[tempLf] = temp;
            }
            else
            {
                continue;
            }
            
            
        }
        left++;
        
    } while (left < right);
    return array[row];
    
}

int arrCopy(int array[], int array_copy[], int row){
    int num = 0;
    for (num = 0; num < row; num++)
    {
        array_copy[num] = array[num];
    }
    return array_copy[row];
}

int main(){
    int row, num, listNum = 17;
    cout << "Enter the numbrer of elements in array: ";
    cin >> row;
    while (row < 2)
    {  
        /* code */
        cout << "Num must be more than 1 \n";
        cout << "Enter the numbrer of elements in array: ";
        cin >> row;
    }
    row = row * listNum;
    int array[row], arrayCopybbl[row], arrayCopyins[row], arrayCopysel[row], arrayCopyshk[row];

    /*Time*/
    int startTime, endTime, resTime;
    srand(time(NULL));
    arrGen(array, row, listNum);
    cout << endl;

    /*Booble*/
    cout << "Booble method" << endl;
    arrCopy(array, arrayCopybbl, row);
    cout << "Array: ";
    arrOut(array, row);
    startTime = clock();
    bblSort(arrayCopybbl, row);
    endTime = clock();
    resTime = endTime - startTime;
    cout << endl << "Sorted array: ";
    arrOut(arrayCopybbl, row);
    cout << endl;
    cout << endl;
    cout << "Time booble: " << resTime << " ms" << endl;
    cout << endl;
    cout << endl;

    /*Insert*/
    cout << "Insert method" << endl;
    arrCopy(array,  arrayCopyins, row);
    startTime = clock();
    insSort(arrayCopyins, row);
    endTime = clock();
    resTime = endTime - startTime;
    cout << endl << "Sorted array: ";
    arrOut(arrayCopyins, row);
    cout << endl;
    cout << "Time insert: " << resTime << " ms" << endl;
    cout << endl;
    cout << endl;
    
    /*Select*/
    cout << "Select method" << endl;
    arrCopy(array, arrayCopysel, row);
    startTime = clock();
    selSort(arrayCopysel, row);
    endTime = clock();
    resTime = endTime - startTime;
    cout << endl << "Sorted array: ";
    arrOut(arrayCopysel, row);
    cout << endl;
    cout << "Time select: " << resTime << " ms" << endl;
    cout << endl;

    /*Sheker method*/
    cout << "Sheker method" << endl;
    arrCopy(array, arrayCopyshk, row);

    startTime = clock();
    selSort(arrayCopyshk, row);
    endTime = clock();
    resTime = endTime - startTime;
    cout << endl << "Sorted array: ";
    arrOut(arrayCopyshk, row);
    cout << endl;
    cout << "Time sheker: " << resTime << " ms" << endl;
    cout << endl;
}