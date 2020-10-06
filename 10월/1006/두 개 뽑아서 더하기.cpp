#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
bool Visit[210];
 
vector<int> solution(vector<int> numbers) 
{
    vector<int> answer;
    for (int i = 0; i < numbers.size(); i++)
    {
        for (int j = i + 1; j < numbers.size(); j++)
        {
            int Result = numbers[i] + numbers[j];
            if (Visit[Result] == false)
            {
                Visit[Result] = true;
                answer.push_back(Result);
            }
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}
