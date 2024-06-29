#include<iostream>
#include<conio.h>

using namespace std;

int getmax(int arr[], int n){
   int max =-999;
   for(int i=0; i<n; i++){
        if(max<arr[i])
            max = arr[i];
   } 
   return max;
}

void radixsort(int arr[] ,int n){
    int max = getmax(arr, n);
    int t[n];
    for(int pos=1; max/pos>0; pos*=10){
        int count[10] = {0};

        for(int i=0; i<n; i++)
            ++count[(arr[i]/pos)%10];
        
        for(int i=1; i<10; i++)
            count[i] = count[i] + count[i-1];

        for(int i=n-1; i>=0; i--)
            t[--count[(arr[i]/pos)%10]] = arr[i];
    
        for(int i=0; i<n; i++)
            arr[i] = t[i];
    }
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

}

int main()
{
    int arr[12] = {12, 45,74,34,3,58,91,28, 35,56,83,675};
    radixsort(arr, 12);
    getch();
    return 0;
}