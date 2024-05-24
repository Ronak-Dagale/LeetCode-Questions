class Solution {
public:
     int solve(vector<string>& words, vector<int>& freq, vector<int>& score, int indx=0){
        if(indx==words.size()){
            return 0;
        }
        //word is not included
        int score_not_include = 0 + solve(words, freq, score,indx+1);

        //to include the word
        int word_score = 0;
        string word = words[indx];
        bool flag = true;
        for(auto x:word){
            if(freq[x-'a']<=0){
                flag = false;
            }
            freq[x-'a']--;
            word_score += score[x-'a'];
        }
        int score_include = 0;
        if(flag){
            score_include = word_score + solve(words, freq, score,indx+1);
        }
        for(auto x:word){
            freq[x-'a']++;
        }
        return max(score_include,score_not_include);
    }
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
       
       vector<int> freq(26,0);

       for(auto x:letters){
        freq[x-'a']++;
       }

        return solve(words,freq,score);
    }
};