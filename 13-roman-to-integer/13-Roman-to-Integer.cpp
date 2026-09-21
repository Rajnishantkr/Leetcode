class Solution {
public:
    int romanToInt(string s) {
        if (s.size()<1 || s.size()>15)
           return 0;
        int ans=0;
          const vector<pair<string,int>> list{
            {"M",1000, }, {"CM",900}, {"D",500}, {"CD",400}, {"C",100},
             {"XC",90},  {"L",50},  {"XL",40},  {"X",10},  {"IX",9},
              {"V",5},  {"IV",4},  {"I",1}
        };
         for ( const auto& [symbol, value] : list)
        {
            if (s == "")
              break;

            while (s.compare(0, symbol.length(), symbol) == 0 ) 
              {
                ans += value;
                s.erase(0, symbol.length()); 
              }
        }
        return ans;
    }

    
};