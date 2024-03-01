#pragma GCC optimize("O3", "unroll-loops")
char* maximumOddBinaryNumber(char* s){
    int n, n1=0, n0;
    for(n=0; s[n]!='\0'; n++){
        n1+=(s[n]=='1');
    }
    n0=n-n1;
    s[n-1]='1';
    memset(s, '1', n1-1 );
    memset(s+n1-1, '0', n0);
    return s;
}
