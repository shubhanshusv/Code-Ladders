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
	cin >> s;

	int i,j;
	
	string key = "abcdefghijklmnopqrstuvwxyz";

	std::vector<char> word;
	int count = 0;
   	
   	int n = s.length();

	for(i=0;i<n;i++){

		if(s[i] >= 97){

			if(s[i] == 97 || s[i] == 101 || s[i] == 105 || s[i] == 111 || s[i] == 117 || s[i] == 121 ){
 


			}else{

				word.push_back('.');
				word.push_back(key[s[i]-97]);
				count++;

			}


		}else{

			if(s[i] + 32 == 97 || s[i] + 32 == 101 || s[i] + 32== 105 || s[i] + 32== 111 || s[i] + 32== 117 || s[i] + 32== 121 ){
 


			}else{

				word.push_back('.');
				word.push_back(key[s[i]-65]);
				count++;

			}

		}

	}

	for(i=0;i<2*count;i++){

		cout << word[i];

	}

   return 0;

}
