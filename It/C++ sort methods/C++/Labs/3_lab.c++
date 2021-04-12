#define S 4
#include <iostream>
#include <ctime>
#include <typeinfo>
#include <cstring>

using namespace std;

struct film{
    unsigned int id;
    char name[50];
    float price;
    char author[50];
    int day, month, year;
    void film_out()
    {
        cout << id + 1 <<  ". " <<  name <<  " | " << price <<  "$ | " << author << " | " << day << "/" << month << "/" << year << endl;
    }
};

int dateconvert(int day, int month, int year){
    int result;
    result = day + (month * 31) + (365 * year);
    return result;
}

int asks() {
    int choice;
    cout << "How do you want to sort your array?\n1.id\n2.Price\n3.Date\n\n";
    cin >> choice;
    return choice;
}

void dateEnter(film ARR[], int n){
    char date;
    for (int i = 0; i < n; i++){    
        ARR[i].id = i;
        
        cout << "Name? "; cin >> ARR[i].name;
        cout << "Price? ($)  "; cin >> ARR[i].price;
        cout << "Author? "; cin >> ARR[i].author;
        cout << "Day? "; cin >> ARR[i].day;
        cout << "Month ? "; cin >> ARR[i].month;
        cout << "Year? "; cin >> ARR[i].year;        
        cout << endl;
    }
}

void swapArr(film &S1, film &S2){
    swap(S1.id, S2.id);
    swap(S1.name, S2.name);
    swap(S1.author, S2.author);
    swap(S1.price, S2.price);
    swap(S1.day, S2.day);
    swap(S1.month, S2.month);
    swap(S1.year, S2.year);
}

int main()
{
    int choice, temp, var, dateconv_i, dateconv_temp, date, i = 50;
    char data;
    film ARR[S];
    dateEnter(ARR, S);
    cout << endl;
    cout << endl;
    cout << endl;
    choice = asks();
    if (choice == 1)
    {
        for (int i = 0; i < S; i++){

                
            ARR[i].film_out();
        
        }
    }
    else if(choice == 2)
    {
        for (int i = 0; i < S; i++){

            for (temp = i; temp < S; temp++)
            {
                if (ARR[temp].price < ARR[i].price)
                {
                    swapArr(ARR[i], ARR[temp]);
                }
                else
                {
                    continue;
                }
                
                
            }
            
            ARR[i].film_out();
            
        
        }
    }
    else if (choice == 3)
    {
        for (int i = 0; i < S; i++){

            for (temp = i; temp < S; temp++)
            {
                dateconv_i = dateconvert(ARR[i].day, ARR[i].month, ARR[i].year);
                dateconv_temp = dateconvert(ARR[temp].day, ARR[temp].month, ARR[temp].year);
                
                if (dateconv_temp < dateconv_i)
                {
                    swapArr(ARR[i], ARR[temp]);
                }
                else
                {
                    continue;
                }
                
                
            }
            
            ARR[i].film_out();
            
        
        }
        
            
    }
    else{
        cout << "It must be 1 or 2 or 3.";
    }
    
    
    cout << endl;
    return 0;
}
