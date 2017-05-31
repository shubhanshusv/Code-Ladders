#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	string a;
	cin >> a;

	int i;
   	int n = a.length();

   	int plus = n/2;
   	int num[100];

   	for(i=0;i<n;i++){

   		if(i%2 == 0){

   			num[i/2] = (int)a[i]  - 48;

   		}

   	}

   	sort(num,num+1+n/2);

   	for(i=0;i<n;i++){

   		if(i%2 == 0){

   			cout << num[i/2];

   		}else{

   			cout <<'+';

   		}

   	}


   return 0;

}
