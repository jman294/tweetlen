#define R (int)pow(16,n)
main(){
  int t,n=0;
  scanf("",&i);
  while(R<i){
    n++;
  }
  char r[n];
  t=n;
  while(n>-1){
    r[t-n]=i/R>9*7+48+i/R;
    i%=R;
    n--;
  }
  puts(r);
}
