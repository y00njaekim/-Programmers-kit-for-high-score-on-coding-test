#include <iostream>
#include <string>
#include <vector>

using namespace std;


int is_clear(vector<string>& phone_book) {
	cout << "in is_clear" << endl;
    vector<vector<string> > HashTable;
	vector<int> count(10, 0);
	cout << "vector size is " << count.size() << endl;
    HashTable.resize(10);    
    int first = 0;
    for(int i=0; i<phone_book.size(); i++) {
        first = phone_book[i][0] - 48;
		phone_book[i].erase(0,1);
//		cout << first << endl;
		if(phone_book[i].size() == 0) {
			cout << "phone_book size is zero" << endl;
			return 0;
		}
		HashTable[first].push_back(phone_book[i]);
//		cout << phone_book[i] << ", " << phone_book[i].size() << endl;
		count[first]++;
    }
	for(int i=0; i<10; i++) {
		cout << "in for" << endl;
		if(count[i]>1) {
			int result = is_clear(HashTable[i]);
			if(result == 0) return 0;
		}
	}
	return 1;
}


bool solution(vector<string> phone_book) {
	cout << "in sol" << endl;
    bool answer = true;
	int result = is_clear(phone_book);
	if(result == 0) answer = false;
    return answer;
}


int main() {
	cout << "in main" << endl;
	vector<string> phone_book;
	string temp;
	for(int i=0; i<3; i++) {
		cin >> temp;
		phone_book.push_back(temp);
	}

    solution(phone_book);

	return 0;
}

/*
Test case 11번에서 실패
*/


