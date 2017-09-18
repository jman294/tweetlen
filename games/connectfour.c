#define F for(i=0;i<6;i++)
main(){
 char x[6][8];
 int t,i,c;
 F strcpy(x[i],":::::::");
 for(;;){
  c=!c;
  F puts(x[i]);
  scanf("%d",&t);
  i=0;
  while(x[i+1][t]==58)i++;
  x[i][t]=c+42;
 }
}
