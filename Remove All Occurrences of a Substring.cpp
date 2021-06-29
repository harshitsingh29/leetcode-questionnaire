// link - https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
  

// using 1 string size ds
class Solution {
public:
    string removeOccurrences(string a, string b) {
        int n = a.size(),m = b.size();
        if(n==1 and m==1)
        {
            if(a!=b)
            {
                return a;
            }
            else
            {
                return "";
            }
        }
        string x = a;
        int j = 0,i = 0;
        for(;i<n;i++)
        {
            x[j++] = a[i];
            if(j>=m and x.substr(j-m,m) == b)
            {
                j -= m;
            }
        }
        return x.substr(0,j);
    }
};


//doing it in O(1)

class Solution {
public:
    string removeOccurrences(string a, string b) {
        size_t pos = a.find(b);
       while( pos != std::string::npos){
           a.replace(pos,b.size(),"");
           pos = a.find(b);
       }
       return a;
    }
};
