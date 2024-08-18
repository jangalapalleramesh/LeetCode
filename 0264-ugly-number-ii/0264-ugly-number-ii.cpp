// class Solution {
// public:
//     int nthUglyNumber(int n) {
//         if(n==1) return 1;
//         int j = 2;
//         int p = 0;
//         n=n-1;
//         while(n!=0){
//             int i = j;
//             while(i%2==0)i=i>>1;
//             while(i%3==0)i=i/3;
//             while(i%5==0)i=i/5;
//             if(i==1)n--;
//             p = j;
//             j++;

//         }
//         return p;
        
//     }
// };

#include <vector>
#include <queue>
#include <unordered_set>

class Solution {
public:
    int nthUglyNumber(int n) {
        std::vector<int> primes = {2, 3, 5};
        std::priority_queue<long, std::vector<long>, std::greater<long>> minHeap;
        std::unordered_set<long> seen;
        
        minHeap.push(1);
        seen.insert(1);
        long currentUgly = 1;
        
        for (int i = 0; i < n; ++i) {
            currentUgly = minHeap.top();
            minHeap.pop();
            
            for (int prime : primes) {
                long newUgly = currentUgly * prime;
                if (seen.find(newUgly) == seen.end()) {
                    minHeap.push(newUgly);
                    seen.insert(newUgly);
                }
            }
        }
        
        return (int)currentUgly;
    }
};
