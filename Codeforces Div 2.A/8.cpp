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
   int lucky[14] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};

   int flag = 0;

   for(i=0;i<14;i++){

      if(n%lucky[i] == 0){

         flag = 1;

      }

   }

   if(flag == 0){

      cout << "NO" ;

   }else{

      cout << "YES";

   }
   



   return 0;

}
