class Solution {
public:
    int hIndex(vector<int>& citations){
        int numPapers = citations.size();
        vector<int> citationCounts(numPapers + 1, 0);

        for (int citation : citations) {
            if (citation >= numPapers) {
                citationCounts[numPapers]++;
            } else {
                citationCounts[citation]++;
            }
        }

        int cumulativePapers = 0;
        for (int hIndex = numPapers; hIndex >= 0; hIndex--) {
            cumulativePapers += citationCounts[hIndex];
            if (cumulativePapers >= hIndex) {
                return hIndex;
            }
        }

        return 0;
    }
};