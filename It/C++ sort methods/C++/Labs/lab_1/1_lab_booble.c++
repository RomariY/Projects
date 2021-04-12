#include<iostream>

using namespace std;

int arrGen(int array[], int row){
    int num;
    for (num = 0; num < row; num++)
    {
        array[num] = rand() % 30 + 1;
              

    }
    return array[row];
}
void arrOut(int array[], int row){
    int num;
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
}

/* Array sort methods*/

int bblSort(int array[],int row){
    int num, count = 1, min, temp;
    for (num = row - 1; num > -1; num--)
    {
        cout << count << ". ";
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
        arrOut(array, row);
        count++;
        cout << endl;
    }
    return array[row];
}

int insSort(int array[], int row){
    int num, count = 1, temp, min = 0, process = 1;
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
        
        arrOut(array, row);
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
    return array[row];
}

int selSort(int array[], int row){
    int min, num, temp, count = 1;
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
        arrOut(array, row);
        count++;
        cout << endl;
    }
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
    int row, min, num;
    cout << "Enter the numbrer of elements in array: ";
    cin >> row;
    while (row < 2)
    {  
        /* code */
        cout << "Num must be more than 1 \n";
        cout << "Enter the numbrer of elements in array: ";
        cin >> row;
    }
    
    min = row;
    int array[row], arrayCopybbl[row], arrayCopyins[row], arrayCopysel[row];
    
    srand(time(NULL));
    arrGen(array, row);
    /*Booble*/
    arrCopy(array, arrayCopybbl, row);
    cout << "Array: " ;
    arrOut(array, row);
    cout << endl;
    cout << endl;
    bblSort(arrayCopybbl, row);
    cout << endl;
    cout << endl << "Sorted array: ";
    arrOut(arrayCopybbl, row);
    cout << endl;
    cout << "Not sorted array: ";
    arrOut(array, row);
    cout << endl;
    cout << endl;

    /*Insert*/
    arrCopy(array, arrayCopyins, row);
    cout << "Array: " ;
    arrOut(array, row);
    cout << endl;
    cout << endl;
    insSort(arrayCopyins, row);
    cout << endl;
    cout << endl << "Sorted array: ";
    arrOut(arrayCopyins, row);
    cout << endl;
    cout << "Not sorted array: ";
    arrOut(array, row);
    cout << endl;
    cout << endl;
    
    /*Select*/
    arrCopy(array, arrayCopysel, row);
    cout << "Array: " ;
    arrOut(array, row);
    cout << endl;
    cout << endl;
    selSort(arrayCopysel, row);
    cout << endl;
    cout << endl << "Sorted array: ";
    arrOut(arrayCopysel, row);
    cout << endl;
    cout << "Not sorted array: ";
    arrOut(array, row);
    cout << endl;
}