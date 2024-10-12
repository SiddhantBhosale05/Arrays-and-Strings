//Name:Siddhant Kiran Bhosale
//PRN:23070123038
//Aim:Implementation of Arrays and Strings to check if given String is palindrome

#include <iostream>
#include <string>
using namespace std;

int main(){
    string a,revstr;
    int length,i;
    cout<<"Enter a string: ";
    cin>>a;
    length=a.length();
    for(i=length-1;i>=0;i--)
    {
        revstr+=a[i];
    }
    if(a==revstr)
    {
        cout<<"It is a palindrome.";
    } 
    else 
    {
        cout<<"It is not a palindrome";
    }
     return 0;
}


/*Output:
For Palindrome-
Enter a string: bob
It is a Palindrome.

For Not a Palindrome-
Enter a string: hello
It is not a Palindrome*/
