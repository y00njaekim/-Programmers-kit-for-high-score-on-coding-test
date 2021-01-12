#include <string>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    for(int i=0; i<participant.size(); i++) {
        if(participant[i].compare(completion[i]) != 0)
            return participant[i];
    }
    return "";
}

/*
string compare 할 때, string 1 != string 2 하지 않고,
string1.compare(string2) != 0 했더니 

signal: segmentation fault (core dumped)

error message 표시
*/

