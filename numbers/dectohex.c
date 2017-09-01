#define R (int)pow(16,n)
main(){
  int i,t,n=0;
  scanf("%d",&i);
  while(R<i){
    n++;
  }
  char r[n];
  t=n;
  while(n>-1){
    r[t-n]=i/R+48+7*(R<9);
    i%=R;
    n--;
  }
  puts(r);
}
