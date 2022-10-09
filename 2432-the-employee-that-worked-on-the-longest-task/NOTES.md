**First Method**
```
int work = logs[0][1];
int id = logs[0][0];
for(int i=1;i<logs.size();i++){
int dif = logs[i][1] - logs[i-1][1];
if(dif>work){
work = dif;
id = logs[i][0];
}else{
if(dif == work){
if(id > logs[i][0]){
id = logs[i][0];
}
}
}
}
return id;
```
​
**Second Method**
```
int end = 0, max_d =0, id=0;
for(auto &l : logs){
if(max_d <= l[1] - end){
id = max_d < l[1]-end ? l[0]  : min(id,l[0]);
max_d= l[1]-end;
}
end = l[1];
}
return id;
```