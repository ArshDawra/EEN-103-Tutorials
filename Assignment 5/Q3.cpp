#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double x,a;
   
    cin>>x>>a;
    double arr[n][2];
    arr[0][0]=x;
    arr[0][1]=x*a;
    for(int i=1;i<n;i++)
    {
        arr[i][0]=arr[i-1][1];
        arr[i][1]=a*arr[i][0];
    }
    for(int i=0;i<n;i++)
    {
        cout<<"("<<arr[i][0]<<','<<arr[i][1]<<")"<<endl;
    }
    return 0;
}