#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    unsigned long long int s,a,A[n+1];
	    cin >> s;
	    A[0] = 0;
	    for(int i=1;i<=n;i++)
	    {
	        cin >> a;
	        A[i]=A[i-1]+a;
	    }
	    a=0;
	    for(int i=1;;  )
	    {
	        if((A[i]-A[a]) == s)
	        {
	            cout << ((a==0)?1:a+1) << " " << i << endl;
	            break;
	        }
	        else if((A[i]-A[a])>s)
	        {
	            a++;
	        }
	        else
	        {
	            i++;
	        }
	        if(a>i || i==n+1)
	        {
	            cout << "-1\n";
	            break;
	        }
	    }
	}
	return 0;
}