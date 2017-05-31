#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int n;
	cin >> n;

	int i;
   int coin[100];

   int sum = 0;
   int alt = 0;
   int count = 0;
   

	for(i=0;i<n;i++){

		cin >> coin[i];
      sum += coin[i];

	}

   sort(coin,coin + n);

   while(sum >= alt){

      alt += coin[n-1-count];
      sum -= coin[n-1-count];
      count++;

   }

   cout << count;


   return 0;

}
