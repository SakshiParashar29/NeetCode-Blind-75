// TC: o(1) and sc: O(1)
class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while(n){
            count +=(n&1);
            n >>= 1;
        }
        return count;
    }
};

// Brian Kernighan's algorithm: Each operation n = n & (n - 1) removes the rightmost set bit (1) from n, so the loop runs exactly as many times as there are 1s in the binary
class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while(n){
            count +=(n&1);
            n >>= 1;
        }
        return count;
    }
};
