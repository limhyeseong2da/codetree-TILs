#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n, k;
	string str;

	

	cin >> n >> k >> str;
	int m = str.size();

	vector<string> vec;

	for (int i = 0;i < n;i++) {
		string str1;

		cin >> str1;

		bool math = true;

		for (int t = 0;t < m;t++) {
			if (str1[t] != str[t]) {
				math = false;
				break;
			}
			else {
				math = true;
			}
		}
		

		if (math) {
			vec.push_back(str1);
		}

		
	}


	sort(vec.begin(), vec.end());

	cout << vec[k -1];





}