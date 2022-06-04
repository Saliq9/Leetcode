class Solution {
public:
   int firstUniqChar(string s) {
    int fr[26]={0};
    for(char ch:s)
{
fr[ch-'a']++;
}
for(int i=0;i<s.size();i++)
{
if(fr[(s[i]-'a')]==1)
{
return i;
}
}
return -1;

}
};