static const int M = 1e9 + 7, N = 101;


class Solution {
public:
    int threeSumMulti(vector<int>& a, int target) {
        long ans = 0, cnt[N]{};
        for (int &x : a) ++cnt[x];
        for (int i = 0; i < N; ++i)
            for (int j = i + 1; j < N; ++j) {
                int k = target - i - j;
                if (j < k && k < N)
                    (ans += cnt[i] * cnt[j] * cnt[k]) %= M;
            }
        for (int i = 0; i < N; ++i) {
            int k = target - 2 * i;
            if (i < k && k < N) (ans += cnt[i] * (cnt[i] - 1) / 2 * cnt[k]) %= M;
        }
        for (int i = 0; i < N; ++i)
            if (target % 2 == i % 2) {
                int j = (target - i) / 2;
                if (i < j && j < N) (ans += cnt[i] * cnt[j] * (cnt[j] - 1) / 2) %= M;
            }
        if (target % 3 == 0) {
            int i = target / 3;
            if (0 <= i && i < N) (ans += (cnt[i] * (cnt[i] - 1) % M) * (cnt[i] - 2) / 6) %= M;
        }
        return ans;
    }
};