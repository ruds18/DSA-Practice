class Solution {
public:
    string predictPartyVictory(string senate) {
        int len =0;
        int size = senate.size();
         int cnt =0;
        
        while(len != senate.size()){
            len = senate.size();
            string newSenate="";
            for(auto senator : senate){
                if(senator == 'R' && cnt++ >=0){
                   newSenate += 'R';
                }
                if(senator == 'D' && cnt-- <=0){
                    newSenate += 'D';
                }
            }
            // Re-loop
            swap(newSenate , senate);
        }
        if(senate[0]=='R') return "Radiant"; else return "Dire";
    }
};