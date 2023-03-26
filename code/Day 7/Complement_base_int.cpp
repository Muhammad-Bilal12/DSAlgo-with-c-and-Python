
// Leet Code Question Statment:

// 1009. Complement of Base 10 Integer
// The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

// For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
// Given an integer n, return its complement.

class Solution
{
public:
    int bitwiseComplement(int n)
    {

        //  Code here

        int m = n; // to store n value

        // Edge case
        if (n == 0)
        {
            return 1;
        }

        int mask = 0; // mask initialized at 0

        // loop when n not equal to 0

        while (m != 0)
        {

            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        int ans = (~n) & mask;
        return ans;
    }
};