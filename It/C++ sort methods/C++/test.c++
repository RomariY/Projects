#include <iostream>
#include <ctime>
#include <cstring>
using namespace std;

int main(){
    time_t now = time(0);
    int n;
    char date[] = "Hello";
    n = strlen(date);
	tm *ltm = localtime(&now);
    cout << endl;
    cout << n << endl;
}