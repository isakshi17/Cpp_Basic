//factorial
#include <iostream>
using namespace std;
int main() {
    int n;
    int prod = 1;
    cout<<"Enter n \n";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        prod *= i;
        i++;
    }
    cout<<"Factorial of "<<n<<" is:"<<prod;
    
}
    