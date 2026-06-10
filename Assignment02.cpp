//Next greater element

//INPUT:[2,1,5,3]
//OUTPUT:[5,5,-1,-1]

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreater(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {

        while (!st.empty() && st.top() <= nums[i]) {
            st.pop();
        }

        if (st.empty())
            ans[i] = -1;
        else
            ans[i] = st.top();

        st.push(nums[i]);
    }

    return ans;
}

int main() {
    vector<int> nums = {2, 1, 5, 3};

    vector<int> ans = nextGreater(nums);

    for (int x : ans)
        cout << x << " ";

    return 0;
}


// Next smaller element

// INPUT:[4,8,5,2,25]
// OUTPUT:[2,5,2,-1,-1]

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextSmaller(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {

        while (!st.empty() && st.top() >= nums[i]) {
            st.pop();
        }

        if (st.empty())
            ans[i] = -1;
        else
            ans[i] = st.top();

        st.push(nums[i]);
    }

    return ans;
}

int main() {
    vector<int> nums = {4, 8, 5, 2, 25};

    vector<int> ans = nextSmaller(nums);

    for (int x : ans)
        cout << x << " ";

    return 0;
}
