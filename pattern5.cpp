#include <iostream>
using namespace std;
int main() {
    int n;
    int i = 1;
    cout<<"Enter n \n";
    cin>>n;
    while (i<=3*n)
    {
        int j=i;
        while (j<=i+2)
        {
            cout<<" "<<j;
            j++;
    
        }
        cout<<endl;
        i=i+3;
        
    }
}
    
