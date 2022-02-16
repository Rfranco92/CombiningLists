// Ryan Franco
//combine 2 sorted lists of integers into a single list which is sorted as well
#include <vector>
#include <iostream>
using namespace std;

int main() {
	vector<int> list1 = { 1, 2, 3, 5, 6 };
	vector<int> list2 = {3, 4, 7, 8};
	vector<int> mergedList;
	int i1 = 0;
	int i2 = 0;
	while (i1 < list1.size() && i2 < list2.size()) {
		if (list1[i1] > list2[i2]) {
			mergedList.push_back(list2[i2]);
			i2++;
		}
		else if (list2[i2] > list1[i1]) {
			mergedList.push_back(list1[i1]);
			i1++;
		}
		else {
			mergedList.push_back(list1[i1]);
			mergedList.push_back(list2[i2]);
			i1++;
			i2++;
		}
	}
	if (i1 < list1.size()) {
		while (i1 < list1.size()) {
			mergedList.push_back(list1[i1]);
			i1++;
		}
	}
	if (i2 < list2.size()) {
		while (i2 < list2.size()) {
			mergedList.push_back(list2[i2]);
			i2++;
		}
	}
	for (int i = 0; i < mergedList.size(); i++) {
		cout << mergedList[i] << endl;
	}

	return 0;
}
