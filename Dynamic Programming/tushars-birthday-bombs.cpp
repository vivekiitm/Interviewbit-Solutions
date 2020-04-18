vector<int> Solution::solve(int A, vector<int> &B) {
    int resistance = A;
    const vector<int>& strengths = B;
    
    int n = strengths.size();
    int min_strength = INT_MAX;
    vector<int> candidate_strengths;
    unordered_map<int, int> idx_of;

    for(int i = 0; i < n; i++) {
        if(strengths[i] < min_strength) {
            min_strength = strengths[i];
            candidate_strengths.push_back(strengths[i]);
            idx_of[strengths[i]] = i;
        }
    }
    
    n = candidate_strengths.size();
    vector<int> result;
    int i = 0;
    while(i < n) {
        int cur_strength = candidate_strengths[i];
        if(cur_strength <= resistance) {
            int resistance_left = resistance - cur_strength;
            int max_hits = resistance / min_strength;
            int cur_hits = 1 + resistance_left / min_strength;
            if(cur_hits == max_hits) {
                result.push_back(idx_of[cur_strength]);
                resistance -= cur_strength;
                continue;
            }
        }
        i++;
    }
    
    return result;
}