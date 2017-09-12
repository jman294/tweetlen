main(){
  char b[]="012\n456\n89A";
  char x[2][8]={0};
  int i,c,t;
  for(;;){
    c=!c;
    puts(b);
    for(i=0;i<2;i++){
      if(strchr(x[i],3))exit(0);
    }
    scanf("%d",&t);
    x[c][t%4]++;
    x[c][(t/4)+3]++;
    x[c][6]+=t%5^1;
    x[c][7]+=(t+1)%3^1;
    b[t]=c+42;
  }
}
