class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>temp;
        int i=0;
        for(string word:words){
            
            if(word.find(x)!=string::npos) temp.push_back(i);
            i++;
        }

        return temp;
    }
};