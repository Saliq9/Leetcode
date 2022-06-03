class Solution
{
public:
    vector<string> buildArray(vector<int> &target, int n)
    {
        vector<string> v;
        stack<int> st;
        int k = target.size();
        int index = 0;
        for (int i = 0; i < target[k - 1] && index < k; i++)
        {
            st.push(i + 1);
            v.push_back("Push");
            if (st.top() != target[index])
            {
                st.pop();
                v.push_back("Pop");
            }
            else
            {
                index++;
            }
        }
        return v;
    }
};