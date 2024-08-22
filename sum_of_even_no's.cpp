//sum of n even no.s until n
#include <iostream>
using namespace std;
int main() {
    int n;
    int sum1 = 0;
    cout<<"Enter n \n";
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        if(i%2==0){
            sum1 += i;
        }
        else{
            continue;
        }
    }
    cout<<"Sum of even numbers : "<<sum1git;

}