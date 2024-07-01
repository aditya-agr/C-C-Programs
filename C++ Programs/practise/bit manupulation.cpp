// Write a program to find a unique number in an array where all numbers except
// one, are present twice.
// Hint: A ⊕ B ⊕ B ⊕ A ⊕ C = C. All those numbers which occur twice will get nullified
// after ⊕ operation.

#include <iostream>

using namespace std;

int getbit(int n, int i){          //bool getBit(int n, int pos) {
    return((n>>i) & 1);                  //return ((n & (1 << pos)) != 0);
}

int setbit(int n, int i){
    return(n | (1<<i));
}




int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    
    int arr[] = {1,2,3,4,5,6,4,3,2,1};
    two_unique(arr, 10);


    return 0;
}
