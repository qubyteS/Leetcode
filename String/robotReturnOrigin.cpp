class Solution {
public:
    bool judgeCircle(string moves) {
        int count_r = 0;
        int count_l = 0;
        int count_u = 0;
        int count_d = 0;
        for(char c: moves) {
            if(c == 'U' ) {
                count_u ++;
            }else if(c == 'R'){
                count_r ++;
            }else if(c == 'L'){
                count_l ++;
            }else {
                count_d ++;
            }
        }
        
        if((count_r != count_l) || (count_u != count_d)) {
            return false;
        }return true;
        
    }
};

// OR

bool judgeCircle(string moves) {
    return count(begin(moves), end(moves), 'U') == count(begin(moves), end(moves), 'D') && count(begin(moves), end(moves), 'L') == count(begin(moves), end(moves), 'R');   
}