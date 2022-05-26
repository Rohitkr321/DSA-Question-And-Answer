class Solution {
    private:
bool check(char ch)
{
    if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return 1;
    }
    else{
        return 0;
    }
}
char toLoweCase(char ch)
{
    if(ch>='a' && ch<='z' || ch>='0' && ch<='9')
    {
        return ch;
    }
    else{
        char temp=ch-'A'+ 'a';
        return temp;
    }
}
bool pelindroem(string s)
{
    int start=0;
    int end=s.length()-1;
    for(int i=start;i<=end;i++){
        if(s[start]!=s[end]){
            return 0;
        }
        else{
            start++;
            end--;
        }

    }
    return 1;
}
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.length();i++){
            if(check(s[i])){
                temp.push_back(s[i]);
            }
        }
        for(int j=0;j<temp.length();j++){
            temp[j]=  toLoweCase(temp[j]);

        }
        return pelindroem(temp);
        
    }
};