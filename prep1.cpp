#include <iostream>
using namespace std;
void swapping(int a, int b)
{

    cout << "this is a :" << a << endl;
    cout << "this is b :" << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "this is after a :" << a << endl;
    cout << "this is after b :" << b << endl;
    return;
}
void primenumber(int a)
{
    int x = a;
    bool prime{true};
    if (x<=1){
        prime=false;
    }
    for ( int i= 2 ; i * i < x ; i++){
        if (x % i == 0 ){
            prime=false;
            break;
        }
    }
    if (prime)
    {
        cout << x << " is prime number";
    }
    else
    {
        cout << x << " is not prime number";
    }
}

void reverse(string s){
    char temp;
    int n{0} , left , right , size;
    while (s[n] != '\0')
    {
        n++;
    }
    size = n;
    if ( size <=1){
        cout << "the reversed string is : " << s;
        return;
    }
    left = 0;
    right = size - 1;
    for (int i = 0; i<size ; i++){
        if (left < right){
            temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
    }
    cout << s << endl;
}

void palindrome(string s)
{
    char temp;
    int n{0}, left, right, size;
    bool flag=true;
    while (s[n] != '\0')
    {
        n++;
    }
    size = n;
    if (size <= 1)
    {
        cout << "Yes it is palindrome ";
        return;
    }
    left = 0;
    right = size - 1;
    while (left<=right)
    {
        if(s[left]==s[right]){
            left++;
            right--;
        }else{
            flag=false;
            cout << "this string is not a palindrome";
            return;
        }
    }
    cout << " yes this string is a palindrome";
    
    
}

int main(int argc, char const *argv[])
{

//   swapping(10, 20); // This is for swapping two numbers
//    primenumber(25); // this is from prime numbers
//    reverse("piyush khanduri");
    palindrome("Never odd or even");
    return 0;
}

