class Solution {
  public:
    long long solve(int N, vector<int> &A, vector<int> &B) {
        long long suma=0,sumb=0;
        vector<int> oddA;
        vector<int> oddB;
        vector<int>evenA;
        vector<int>evenB;
        
        for(int i=0;i<N;i++){
            suma+=A[i];
            sumb+=B[i];
            if(abs(A[i])%2==0)
            evenA.push_back(A[i]);
            else
            oddA.push_back(A[i]);
            
            if(abs(B[i])%2==0)
            evenB.push_back(B[i]);
            else
            oddB.push_back(B[i]);
        }
        
        if(suma!=sumb || oddA.size()!=oddB.size()) return -1;
        sort(oddA.begin(),oddA.end());
        sort(oddB.begin(),oddB.end());
        sort(evenA.begin(),evenA.end());
        sort(evenB.begin(),evenB.end());
        
        long long ans=0;
        for(int i=0;i<oddA.size();i++){
            if(abs(oddA[i]-oddB[i])%2==0)
            ans+=abs(oddA[i]-oddB[i])/2;
        }
            
        for(int i=0;i<evenA.size();i++){
              if(abs(evenA[i]-evenB[i])%2==0)
            ans+=abs(evenA[i]-evenB[i])/2;
        }
        
        return ans/2;
    }
};

0

divyankdagu
