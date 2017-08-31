#define R (int)pow(16,n)
main(){
  int i,n=0;
  scanf("%d",&i);
  while(R<i){
    n++;
  }
  char r[n];
  while(n>-1){
    r[sizeof(r)-n]=i/R+48+(i/R>9?7:0);
    i%=R;
    n--;
  }
  puts(r);
}
