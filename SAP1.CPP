#include<iostream.h>
#include<conio.h>
void main()
{
 int i,arr[100],n,pos,insert;
 clrscr();
 cout<<"Enter the size of the array";
 cin>>n;
 for(i=0;i<n;i++)
 {
   cin>>arr[i];
  }
 cout<<"Enter the value of the element";
 cin>>insert;
 cout<<"Enter the position of the element to insert";
 cin>>pos;
 for(i=n;i>pos;i--)
 {
  arr[i]=arr[i-1];
 }
 arr[pos]=insert;
 cout<<"Element inserted successfully";
 cout<<"endl";
 cout<<"New Array is";
 cout<<"endl";
 for(i=0;i<n+1;i++)
 {
    cout<<arr[i]<<" ";
  }
 getch();
 }