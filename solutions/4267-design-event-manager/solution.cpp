class EventManager {
public:
    
    unordered_map<int,int> mp;
    
    priority_queue<pair<int,int>> pq;
    
    EventManager(vector<vector<int>>& events) {
        for(auto &e : events) {
            int id = e[0];
            int pr = e[1];
            
            mp[id] = pr;
            pq.push({pr, -id});
        }
    }
    
    void updatePriority(int eventId, int newPriority) {
        mp[eventId] = newPriority;
        pq.push({newPriority, -eventId});
    }
    
    int pollHighest() {
        while(!pq.empty()) {
            int pr = pq.top().first;
            int id = -pq.top().second;
            
            if(mp.count(id) && mp[id] == pr) {
                pq.pop();
                mp.erase(id);
                return id;
            }
            
            pq.pop();
        }
        
        return -1;
    }
};
