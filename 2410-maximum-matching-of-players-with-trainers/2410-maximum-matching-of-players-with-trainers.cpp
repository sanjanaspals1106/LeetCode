class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        int match=0, train=0, play=0;
        while(play<players.size() && train<trainers.size()){
            if(trainers[train]>=players[play]){
                match++;
                train++;
                play++;
            }else{
                train++;
            }
        }
        return match;
    }
};