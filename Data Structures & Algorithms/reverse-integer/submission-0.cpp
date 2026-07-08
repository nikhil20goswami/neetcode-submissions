class Solution {
   public:
    int reverse(int x) {
        int r = 0;
        while (x > 0 || 0 > x) {
            int n = x % 10;
            if (r > INT_MAX / 10 || r < INT_MIN / 10) {
                return 0;
            }

            r = r * 10 + n;
            x = x / 10;
        }
        return r;
    }
};

// class Solution {
// public:
//     int reverse(int x) {

//         int r = 0;

//         while(x != 0) {

//             int digit = x % 10;

//             // Check for overflow
//             if(r > INT_MAX / 10 || r < INT_MIN / 10) {
//                 return 0;
//             }

//             r = r * 10 + digit;
//             x = x / 10;
//         }

//         return r;
//     }
// };