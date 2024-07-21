    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    long long minDiff=LLONG_MAX;
    sort(a.begin(), a.end());
    for(long long i=0; i<=n-m; i++){
        long long diff = a[i+m-1] - a[i];
        minDiff = min(diff, minDiff);
    }
    return minDiff;
    }  
