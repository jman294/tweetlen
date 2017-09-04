int main(){
  char b[]="012\n456\n89A";
  /*char x[2][8]={0};*/
  char x[17];
  int i,j,c,t;
  for(;;){
    c=!c;
    puts(b);
    /*for(i=0;i<2;i++){*/
      /*if(strchr(x[i],3))exit(0);*/
      if(strchr(x,3))break;
    /*}*/
    scanf("%d",&t);
    x[(t%4)*(c+1)]++;
    x[((t/4)+3)*(c+1)]++;
    x[6*(c+1)]+=t%5==0;
    x[7*(c+1)]+=(t+1)%3==0;
    b[t]=c+42;
  }
}
