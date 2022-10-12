What's wrong
​
```
int cnt=0;
int dis = 0;
for(int i=0;i<s.size()-1;i++){
int cnt=0;
for(int j= i+1;j<s.size();j++){
if(s[i] != s[j]) cnt++;
}
if(cnt != distance[s[i]-'a']) return false;
}
return true;
```