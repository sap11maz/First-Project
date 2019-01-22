#include<iostream.h>
#include<conio.h>
void main()
{
 int i,arr[i],n,pos,del,ch;
 cout<<"Enter the size of array";
 cin>>n;
 cout<<"Enter the elments of the array";
 for(i=0;i<n;i++)
 {
  cin>>arr[i];
  }
  cout<<"Enter '1' for element or '2' for position";
  cin>>ch;
  if(ch==1)
  {
   cout<<"Enter the element to delete";
   cin>>del;
   int count=0;
   for(i=0;i<n;i++)
   {
    if(arr[i]=del)
      {
	for(int j=i;j<(n-1);j++)
	 {
	   arr[j]=arr[j++];
	 }
      }
   }

   cout<<"New array is";
   for(i=0;i<n-1;i++)
   {
    cout<<arr[i]<<" ";
   }
 }

 else if(ch==2)
 {
  cout<<"Enter the position to deleted";
  cin>>pos;
  pos--;
  for(i=pos;i<size;i++)
  {
   int temp=arr[i];
   arr[i]=arr[i+1];
   arr[i+1]=temp;
  }
  for(i=0;i<n-1;i++)
  {
   cout<<arr[i]<<" ";
  }
}
getch();
}







