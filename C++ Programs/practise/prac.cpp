

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n =44;
    char s[45] = "bpbibahusmmylsqplfggfgmoovqwuuanxtynrvmksays";
    vector<int> arr(26,0);
    vector<int> arr2(26,0);
	int ans=0;
	for(int i=0; i<n; i++)
	    arr[s[i]-'a']++;
		    
	for(int i=0; i<26; i++)
		if(arr[i] > 2){
            cout<<i<<" ";
		    ans ++;
        }

    cout<<ans<<endl;
    return 0;
}