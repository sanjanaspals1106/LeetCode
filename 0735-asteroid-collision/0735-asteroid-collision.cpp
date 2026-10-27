class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int x : asteroids) {
            bool alive = true;

            while (alive && !st.empty() && st.top() > 0 && x < 0) {
                if (st.top() < -x) {
                    st.pop();
                }
                else if (st.top() == -x) {
                    st.pop();
                    alive = false;
                }
                else {
                    alive = false;
                }
            }

            if (alive)
                st.push(x);
        }

        vector<int> sol;
        while (!st.empty()) {
            sol.push_back(st.top());
            st.pop();
        }

        reverse(sol.begin(), sol.end());
        return sol;
    }
};