class Solution {
    struct Compare {
        bool operator()(vector<int>& c1, vector<int>& c2) {
            return (c1[0] - c1[1]) < (c2[0] - c2[1]);
        }
    };

   public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int ans = 0;
        sort(costs.begin(), costs.end(), Compare());

        for (int i = 0; i < costs.size() / 2; i++) {
            ans += costs[i][0];
        }

        for (int i = costs.size() / 2; i < costs.size(); i++) {
            ans += costs[i][1];
        }

        return ans;
    }
};
