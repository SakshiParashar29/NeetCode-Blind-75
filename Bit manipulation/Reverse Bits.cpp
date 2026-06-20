class Solution {
public:
    int reverseBits(int n) {
        string s;
        for(int i = 0; i < 32; i++){
            s += to_string(n & 1);
            n >>= 1;
        }
        
        // stoi(string, pos, base) 
        // base could be any number
        // pos pointer/index to store where parsing stopped (0/nullptr if not needed)
        int num = stoi(s, 0, 2);   // this 2 interpt string as binary and calculate the value in decimal;
        return num;
    }
};

class Solution {
public:
    int reverseBits(int n) {
        int ans = 0;

        for(int i = 0; i < 32; i++){
            ans <<= 1;
            ans |= (n & 1);
            n >>= 1;
        }

        return ans;
    }
};
