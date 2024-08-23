//Name:Siddhant Kiran Bhosale
//PRN:23070123038
//Aim:Implemention of Arrays and Strings to print the Number in the Array

#include<iostream>
using namespace std;
int main(){
    int n =5;
    int arr[n] = {100 , 200 , 300 , 400 , 500}; 
    for (int i = 0; i < n ; i++)
    {
        cout << arr[i] << " " << endl;
    }
    return 0;
} 

/*Output:
100 
200 
300 
400 
500 */