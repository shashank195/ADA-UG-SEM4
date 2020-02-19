#include<iostream>
using namespace std;

int main()
{
 int n;
 cout<<"Enter the value of n:"<<endl;
 cin>>n;
 
 int a[n];
 cout<<"Enter the array elements :"<<endl;

 for(int i=0;i<n;i++)
 {
  cin>>a[i];
 }

 for(int i=0;i<n-1;i++)
 {
  for(int j=i+1;j<n;j++)
  {
    if(a[i]<a[j])
    {
     int t=a[i];
         a[i]=a[j];
         a[j]=t;
    }
  }
 }
 
 int k;
 cout<<"Enter the value of k:"<<endl;
 cin>>k;
 for(int i=0;i<k;i++)
 {
  cout<<a[i]<<" ";
 }
 cout<<endl;
return 0;
}
