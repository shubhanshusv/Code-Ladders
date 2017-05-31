#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	string a,b;
	cin >> a >> b;

	int i,j;
   	int n = a.length();

   	int flag = 0;

   	int alpha,beta;

	for(i=0;i<n;i++){

		if(a[i] >= 97){

			alpha = a[i]-97;

		}else{

			alpha = a[i] - 65;

		}

		if(b[i] >= 97){

			beta = b[i]-97;

		}else{

			beta = b[i] - 65;

		}

		if(alpha > beta){

			flag = 1;
			break;

		}else if(alpha < beta){

			flag = -1;
			break;

		}else{


		}

	}

	cout << flag;

   return 0;

}
