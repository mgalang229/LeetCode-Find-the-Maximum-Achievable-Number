/*


1 2 3 4 5 6 7

*/

class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        // they must be the same parity
        for (int x = 200; x > 0; x--) {
            if (x % 2 == num % 2) {
                int copy_x = x, copy_num = num, copy_t = t;
                while (copy_t > 0 && copy_x != copy_num) {
                    copy_x--;
                    copy_num++;
                    copy_t--;
                }
                if (copy_x == copy_num) {
                    return x;
                }
            }
        }
        return -1;
    }
};
