#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) 
{
    unordered_map<string, int> map;

    for(int i = 0; i < participant.size(); i++)
    {
        map[participant[i]]++;
    }

    for(int i = 0; i < completion.size(); i++)
    {
        map[completion[i]]--;
    }

    for(int i = 0; i < participant.size(); i++)
    {
        if(map[participant[i]] > 0) return participant[i];
    }
}
