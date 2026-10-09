class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
         int n = cardPoints.size();
        int currentScore = 0;
        
        // 1. Start by taking all k cards from the left side
        for(int i = 0; i < k; i++){
            currentScore += cardPoints[i];
        }
        
        int maxPoints = currentScore;
        
        // 2. Step-by-step, remove one card from the left and add one from the right
        for(int i = 0; i < k; i++){
            currentScore -= cardPoints[k - 1 - i]; // Remove from the end of your left pool
            currentScore += cardPoints[n - 1 - i]; // Add from the end of the right pool
            
            maxPoints = max(maxPoints, currentScore); // Track the best combination
        }
        
        return maxPoints;
    }
};