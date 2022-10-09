#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,3,5,7,8};

    auto ptr=upper_bound(v.begin(),v.end(),5);
    printf("%d\n",*ptr);
    auto ptr1=lower_bound(v.begin(),v.end(),5);
    printf("%d\n",*ptr1);

    auto ptr2 = lower_bound(v.begin(),v.end(),4);
    cout<<*ptr2<<endl;
    auto ptr3=lower_bound(v.begin(),v.end(),4);
    cout<<*ptr3<<endl;
    
    return 0;
}