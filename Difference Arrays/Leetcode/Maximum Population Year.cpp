class Solution
{
public:
    int maximumPopulation(vector<vector<int>> &logs)
    {
        int diff[101] = {0};

        for (auto &log : logs)
        {
            diff[log[0] - 1950]++;
            diff[log[1] - 1950]--;
        }

        int curr_pop = 0;
        int max_pop = 0;
        int year = -1;

        for (int i = 0; i < 101; i++)
        {
            curr_pop += diff[i];
            if (curr_pop > max_pop)
            {
                max_pop = curr_pop;
                year = m
            }
        }
    }
};