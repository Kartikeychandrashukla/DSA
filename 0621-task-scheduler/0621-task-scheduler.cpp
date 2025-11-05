class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26, 0);
        for(char t : tasks) freq[t - 'A']++;

        priority_queue<int> maxHeap;
        for(int f : freq) 
            if(f > 0) maxHeap.push(f);

        int time = 0;

        while(!maxHeap.empty()) {
            vector<int> temp;
            int cycle = n + 1;

            while(cycle-- && !maxHeap.empty()) {
                int top = maxHeap.top(); maxHeap.pop();
                if(--top > 0) temp.push_back(top);
                time++;
            }

            for(int x : temp) maxHeap.push(x);

            if(!maxHeap.empty()) 
                time += cycle + 1; // add remaining idle slots
        }

        return time;
    }
};
