class Solution {
public:
    
    string frequencySort(string s)
    {
        string str="";
        map<char,int>m;       
        vector<pair<int,char>>freq;
        int i;
        for(i=0;i<s.length();i++)
            m[s[i]]++;
        for(auto itr = m.begin();itr!=m.end();itr++)
        {
            
            freq.push_back({itr->second,itr->first});
        }
        sort(freq.begin(),freq.end(),greater<pair<int,char>>());
        for(auto itr = freq.begin();itr!=freq.end(); itr++)
        {
            str=str+string(itr->first,itr->second);
        }    
        return str;      
    }
};