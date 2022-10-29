#include<stdio.h>
int main()
{
 int a,i,j,k,l,m,n,o,p,q,r,noitems,index,g_quantity,d_quantity,s_quantity,c_quantity,m_quantity,k_quantity,p_quantity,sa_quantity,eg_quantity,cu_quantity;
 float t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,total=0,tax,finalbill;
 printf("\n*** WELCOME TO SRI CHITHRA STORES **** ");
 printf("\n - - - -    M E N U    C A R D      - - - - - ");
 printf("\n  ITEM INDEX     ITEM NAME       PRICE\n");
 printf("  ------------  ------------    -------- \n");
 printf("      1          Good Day        10.00 \n");
 printf("      2          Dairy Milk      40.00 \n");
 printf("      3          Samosa          10.00 \n");
 printf("      4          Choco Bar       20.00 \n");
 printf("      5          Milky Bar       18.00 \n");
 printf("      6          Kit Kat         30.00 \n");
 printf("      7          Pizza           90.00 \n");
 printf("      8          Sand Witch      74.00 \n");
 printf("      9          Egg Puff        12.00 \n");
 printf("      10         Curry Puff      10.00 \n");
 printf("Enter number of ITEMS REQUIRED \n");
 scanf("%d",&noitems);
 if(noitems>10) {
  printf("We have 10 ITEMS but you entered more then no of items we have\nPlease Check Again   \n");
  printf("Re-Enter number of ITEMS REQUIRED \n");
  scanf("%d",&noitems);
 }
 for (a=1; a<=noitems; a++) {
  if(a==1) {
   printf("Enter the %dst ITEM INDEX number\n",a);
  }
  if(a==2) {
   printf("Enter the %dnd ITEM INDEX number\n",a);
  }
  if(a==3) {
   printf("Enter the %drd ITEM INDEX number\n",a);
  }
  if(a>3) {
   printf("Enter the %dth ITEM INDEX number\n",a);
  }
  scanf("%d",&index);
  switch(index) {
   case 1:
    printf("Enter quantity of Good Day\n");
    scanf("%d",&g_quantity);
    t1=g_quantity*10.00;
    i=index;
    total+=t1;
    break;
   case 2:
    printf("Enter quantity of Dairy Milk\n");
    scanf("%d",&d_quantity);
    t2=d_quantity*40;
    j=index;
    total+=t2;
    break;
   case 3:
    printf("Enter quantity of Samosa\n");
    scanf("%d",&s_quantity);
    t3=s_quantity*10;
    k=index;
    total+=t3;
    break;
   case 4:
    printf("Enter quantity of Choco Bar\n");
    scanf("%d",&c_quantity);
    t4=c_quantity*20;
    l=index;
    total+=t4;
    break;
   case 5:
    printf("Enter quantity of Milky Bar\n");
    scanf("%d",&m_quantity);
    t5=m_quantity*18;
    m=index;
    total+=t5;
    break;
   case 6:
    printf("Enter quantity of Kit Kat\n");
    scanf("%d",&k_quantity);
    t6=k_quantity*30;
    n=index;
    total+=t6;
    break;
   case 7:
    printf("Enter quantity of Pizza\n");
    scanf("%d",&p_quantity);
    t7=p_quantity*90;
    o=index;
    total+=t7;
    break;
   case 8:
    printf("Enter quantity of Sand Witch\n");
    scanf("%d",&sa_quantity);
    t8=sa_quantity*74;
    p=index;
    total+=t8;
    break;
   case 9:
    printf("Enter quantity of Egg Puff\n");
    scanf("%d",&eg_quantity);
    t9=eg_quantity*12;
    q=index;
    total+=t9;
    break;
   case 10:
    printf("Enter quantity of Curry Puff\n");
    scanf("%d",&cu_quantity);
    t10=cu_quantity*10;
    r=index;
    total+=t10;
    break;
   default:
    printf("INVALID ITEM INDEX NUMBER");
  }
 }
 tax=(total*18)/100;
 finalbill=total+tax;
 printf("\n*** WELCOME TO SRI CHITHRA STORES **** ");
 printf("\n - - - - P U R C H A S E   B I L L - - - - - \n");
 printf(" ITEM NAME    QUANTITY        PRICE        TOTAL \n");
 printf("-----------  ----------      -------      ------- \n");
 if(i==1)
  printf(" Good Day       %d            10.00        %0.2f \n",g_quantity,t1);
 if(j==2)
  printf(" Dairy Milky    %d            40.00        %0.2f \n",d_quantity,t2);
 if(k==3)
  printf(" Samosa         %d            10.00        %0.2f \n",s_quantity,t3);
 if(l==4)
  printf(" Choco Bar      %d            20.00        %0.2f \n",c_quantity,t4);
 if(m==5)
  printf(" Milky Bar      %d            18.00        %0.2f \n",m_quantity,t5);
 if(n==6)
  printf(" Kit Kat        %d            30.00        %0.2f \n",k_quantity,t6);
 if(o==7)
  printf(" Pizza          %d            90.00        %0.2f \n",p_quantity,t7);
 if(p==8)
  printf(" Sand Witch     %d            74.00        %0.2f \n",sa_quantity,t8);
 if(q==9)
  printf(" Egg Puff       %d            12.00        %0.2f \n",eg_quantity,t9);
 if(r==10)
  printf(" Curry Puff     %d            10.00        %0.2f \n",cu_quantity,t10);
 printf("                            ----------    -------\n");
 printf("                               Total       %0.2f\n",total);
 printf("                            Tax @18%%       %0.2f\n",tax);
 printf("                          Final Bill       %0.2f\n",finalbill);
 printf("*****  THANK YOU * VISIT AGAIN  *****\n");
}
