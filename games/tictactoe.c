int main(){
char b[]="\n123\n456\n789";
int c,t;
  for(;;){
    c=!c;
    puts(b);
    t=0;
    while(t>9|t<1){
    scanf("%d",&t);
    }
    t+=(t>3)+(t>6);
    b[t]=c+42;
  }
}
