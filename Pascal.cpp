class Solution {
public:
    vector<int> V;
    map<pair<int,int>,int> mp;
    map<pair<int,int>,int>::iterator it;
    vector<int> getRow(int rowIndex) {
        for(int j=0;j<rowIndex+1;j++){
            if(rowIndex==j || rowIndex==0 || j==0){
                V.push_back(1);
            }
            else{
                V.push_back(getVal(rowIndex,j));
            }
        }
        return V;
    }
    
    int getVal(int x, int y){
        if(x==0 || y==0 || x==y){
            return 1;
        }
        it = mp.find({x, y});
        if(it != mp.end()){
            return (it->second);
        }
        else return(mp[make_pair(x,y)]=getVal(x-1,y-1)+getVal(x-1,y));
    }
};
