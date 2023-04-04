#include<iostream>
using namespace std;
int main()
{
 int a[100],i,n,j,temp;
 cout<<"Enter the size of array\n\n";
 cin>>n;
 cout<<"Enter the element\n\n";
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }

 for(i=0;i<n;i++)
  for(j=i;j<n;j++)
   if(a[i]>=a[j])
   {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
   }
 cout<<"Array In Bubble Sort Are\n\n";
  for(i=0;i<n;i++)
 {
  cout<<a[i]<<" ";
 }

}
