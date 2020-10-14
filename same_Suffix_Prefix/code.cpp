  
#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s,s1="",s2="";
	cin >> s;
	int c=0;
	for(int i=0;i<s.length()-1;i++)
	{
	    s1+=s[i];
	    s2=s[s.length()-1-i]+s2;
	    if(s1==s2)
	    c++;
	}
	cout << c << endl;
	return 0;
}