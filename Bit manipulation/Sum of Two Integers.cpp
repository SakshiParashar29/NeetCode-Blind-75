class Solution {
public:
    int getSum(int a, int b) {
        int sum = a ^ b;
        int carry = ((a & b) << 1);

        while(carry){
            int newC = (sum & carry) << 1;
            sum ^= carry;
            carry = newC;
        }
        return sum;
    }
};
