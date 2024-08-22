
//sum of n natural no.s
#include <iostream>
using namespace std;
int main() {
    int n;
    int sum=0;
    cout<<"Enter n \n";
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"Sum of "<<n<<"numbers: "<<sum;
}