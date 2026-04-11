class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for (string op : operations) {
            if (op == "+") {
                int a = st.top(); st.pop();
                int b = st.top();
                int sum = a + b;
                st.push(a);        // put back
                st.push(sum);
            }
            else if (op == "D") {
                st.push(2 * st.top());
            }
            else if (op == "C") {
                st.pop();
            }
            else {
                st.push(stoi(op));
            }
        }

        int score = 0;
        while (!st.empty()) {
            score += st.top();
            st.pop();
        }

        return score;
    }
};