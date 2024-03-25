#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> vec(n+1, 0);
	vector<int> vec1;

	for (int i = 1;i < n+1;i++) {
		int m;
		cin >> m;
		vec[i] = m;
		vec1.push_back(m);

		if (i % 2 != 0) {
			sort(vec1.begin()+1, vec1.end());
			
				cout << vec1[vec1.size() / 2]<<" ";
			
		}
		
	}

}