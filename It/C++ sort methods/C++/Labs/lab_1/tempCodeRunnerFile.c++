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