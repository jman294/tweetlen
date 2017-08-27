main(){
  char* v="0123456789ABCDEF";
  int i,n;
  scanf("%d",&i);
  for(n=0;n<i;n++){
    if(pow(16,n)>i){n--;break;}
  }
  char r[n+1];
  while(n>-1){
    r[sizeof(r)-n-1]=v[(int)(i/pow(16,n))];
    i=i%(int)pow(16,n);
    n--;
  }
  puts(r);
}
