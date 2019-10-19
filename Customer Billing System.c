#include<stdio.h>
struct date
 {
 int month;
 int day;
 int year;
 };
struct account
 {
 char name[50];
 char street[45];
 char city[60];
 int acc_no;
 int acct_type; /* c = current , o = overdue , d = delinquent */
 float oldbalance;
 float newbalance;
 float paymeny;
 struct date lastpayment;
 }

main(   )
{
int i ,n ;
void readinput(int i );
void writeoutput(int i (;
printf(“customer billing system \n\n”);
printf(“how many customer are there ? “ );
scanf(“%d”,&n);
for(i=0,i<n,i++)
{
readinput(i);
if(customer[i].payment > 0 )
 customer[i].acct_type =
(customer[i].oldbalance < 0.1*customer[i].oldbalabce) ? ‘o’ | ‘c’;
else
 customer[i].acct_type =
 (customer[i].oldbalance > 0 ) ? ‘d’ | ‘c’ ;
};
for (i = 0 ; i < n ; i ++)
writeoutput(i);
}
void readinput(int i )
{
print(“\n customer no. %d\n”, i+1);
printf(“ name : “ );
sccanf(“ %[   ] “,customer[ i ].name);
printf(“ street : “ ) ;
scanf(“% [    ] “,customer[ i ] .street);
printf(“ city : “ );
scanf(“ %[   ] “,customer[ i ] .city );
printf(“ account number : “ );
scanf(%d “ , &customer[ i ] . oldbalance);
printf( current payment : “);
scanf(“%f”, &customer[ i ] .payment);
printf(“ payment date (mm/dd/yyyy) : “);
scanf(“%d / %d / %d “, &customer[ i ] .lastpayment.month,
    &customer[ i ] .lastpayment.day
&customer[ i ] .lastpayment.year
return;
}
void writeoutput(int i)
{
printf(“ name : %s”, customer[i].name);
printf(“ account number : %d\n”, customer[i].acct_no);
printf(“street : %s\n , customer[i].street);
printf(“city : %s\n\n” , customer[i].city);
printf(“old balance “ %7.2f”, customer[i].oldbalance);
printf(“ current payment : %7.2f” , customer[i].payment);
printf(“ new balance : %7.2f\n\ “,customer[i].newblance);
printf(“ account status : “);
switch ( customer[i].acct_type)
{
case ‘c’
 printf(“ current\n\n”);
 break;
case ‘o’
 printf(“ overdue\n\n”); 
 break;
case ‘d’
 printf(“ delinqunt\n\n”);
 break;
default;
 printf(“ error \n\n”)
}
return;
}
