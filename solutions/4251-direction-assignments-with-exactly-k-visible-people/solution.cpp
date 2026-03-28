class Solution {
public:
    int countVisiblePeople(int n, int pos, int k) {
     long long mod = 1e9 + 7;

int left = pos;
int right = n - pos - 1;

vector<long long> fact(n + 1);
vector<long long> invFact(n + 1);

fact[0] = 1;
for(int i = 1; i <= n; i++) {
    fact[i] = (fact[i - 1] * i) % mod;
}

auto power = [&](long long a, long long b) {
    long long res = 1;
    while(b > 0) {
        if(b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
};

invFact[n] = power(fact[n], mod - 2);

for(int i = n - 1; i >= 0; i--) {
    invFact[i] = (invFact[i + 1] * (i + 1)) % mod;
}

auto nCr = [&](int n, int r) {
    if(r < 0 || r > n) return 0LL;
    return (((fact[n] * invFact[r]) % mod) * invFact[n - r]) % mod;
};

long long ans = 0;

for(int x = 0; x <= k; x++) {
    if(x <= left && (k - x) <= right) {
        long long ways = nCr(left, x);
        ways = (ways * nCr(right, k - x)) % mod;
        ans = (ans + ways) % mod;
    }
}

ans = (ans * 2) % mod;

return ans;   
    }
};
