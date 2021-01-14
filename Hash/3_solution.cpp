#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int clothes_MAX = 30;

bool compare(vector<string>& a, vector<string>& b) {
	return a[1] < b[1];
}

int solution(vector<vector<string>> clothes) {
    int answer = 1;
	sort(clothes.begin(), clothes.end(), compare);

	vector<int> count; int temp = 1;
    for(int i=0; i<clothes.size()-1; i++) {
		if(clothes[i][1] == clothes[i+1][1])
			temp++;
		else {
			count.push_back(temp);
			temp = 1;
		}
	}
	count.push_back(temp);
	
	
	for(int i=0; i<count.size(); i++) {
		answer *= ++count[i];
	}

	return answer-1;    
}

int main() {
	return 0;
}
	
