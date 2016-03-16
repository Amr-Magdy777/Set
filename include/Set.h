#ifndef SET_H
#define SET_H
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
class Set {

vector<T> v;
void duplicate(){
    for(int i=0;i<v.end();i++){
            if(v[i]==v[i+1]){
                swap(v[i+1],v[v.end]);
                v.pop_back();}}}

public:

int size(){return v.size();};
bool isEmpty(){return v.empty();};
void insert (const T& value){v.push_back(value); sort(v.begin(),v.end());};
void remove (const T& value){
for(int i=0;i<v.size();i++){
    if(v[i]==value){swap(v[i],v[v.size()]);
                    v.pop_back();
                    sort(v.begin(),v.end());
                    break;}
}};
bool contains (const T& value){
for(int i=0;i<v.size();i++){
    if(v[i]==value)
        return true;
}
return false;
    };
bool isSubsetOf(const Set& set2){
int i=0;
for(;i<v.size();i++){
 if(set2.v[0]==v[i])
        break;
}
for(;i<set2.v.size();i++){
if(set2.v[i]!=v[i]){break; return false;}}
return true;

} ;
void clear(){while(!v.empty())v.pop_back();};
};

#endif // SET_H
