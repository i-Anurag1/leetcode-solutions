class Solution {
public:
    vector<int> parent;
    vector<int> rankv;
    vector<int> parity;

    int find(int x) {
        if (parent[x] == x) return x;

        int root = find(parent[x]);

        parity[x] ^= parity[parent[x]];
        parent[x] = root;

        return parent[x];
    }

    int numberOfEdgesAdded(int n, vector<vector<int>>& edges) {
        if (n == 0) return 0;

        parent.resize(n);
        rankv.resize(n);
        parity.resize(n);

        for (int i = 0; i < n; i++) {
            parent[i] = i;
            rankv[i] = 0;
            parity[i] = 0;
        }

        int ans = 0;

        for (auto &e : edges) {
            int u = e[0];
            int v = e[1];
            int w = e[2];

            int ru = find(u);
            int rv = find(v);

            if (ru == rv) {
                int curr = parity[u] ^ parity[v] ^ w;

                if (curr == 0) {
                    ans++;
                }
            } else {
                if (rankv[ru] < rankv[rv]) {
                    swap(ru, rv);
                    swap(u, v);
                }

                parent[rv] = ru;

                parity[rv] = parity[u] ^ parity[v] ^ w;

                if (rankv[ru] == rankv[rv]) {
                    rankv[ru]++;
                }

                ans++;
            }
        }

        return ans;
    }
};
