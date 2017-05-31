#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	string s;
	int t;
	cin >> t;

	int i,j;

	for(i=0;i<t;i++){

		cin >> s;

		if(s.length() > 10){

			cout << s[0] << s.length() - 2 << s[s.length()-1] << endl;

		}else{

			cout << s << endl;

		}


	}
   	


   return 0;

}
