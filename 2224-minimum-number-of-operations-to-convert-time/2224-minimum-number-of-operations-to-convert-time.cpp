class Solution {
public:
    int minutes(string &st){
 return st[0]*600+st[1]*60+st[3]*10+st[4];
    }
    int convertTime(string current, string correct) {
        int difference=minutes(correct)-minutes(current);
        return difference/60+difference%60/15+difference%15/5+difference%5;
    }
};