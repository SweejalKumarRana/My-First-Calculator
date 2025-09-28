#include<stdio.h>
#include<math.h>
int main(){
    while(1){
        int i;
        printf("Enter 1 For Addition\n2 For Substraction\n3 For Multiplication\n4 For Division\n5 For Finding Power Of Any Number\n6 For To Exit ");
        scanf("%d",&i);
        switch(i){
            case 1:
            double sum=0,n=0.00000000001;
            while(n!=0){
                printf("Please Press Enter Key For Each Number You Give As Input Or Enter 0 If You Don't Want To Give Any Further Inputs\nNow Enter The Number Or Enter Zero ");
                scanf("%lf",&n);
                if(n!=0)
                sum=sum+n;
                else{
                    int c=sum;
                    double d=sum-c;
                    if(d<1&&d>0)
                    printf("The Output Is=%f\n",sum);
                    else
                    printf("The Output Is=%d\n",c);                
                }
            }
            break;
            case 2:
            double sum1=0,n1=0.00000000001;
            while(n1!=0){
                printf("Please Press Enter Key For Each Number You Give As Input Or Press 0 If You Don't Want To Give Any Further Inputs\nNote:In Substraction The First Input Is Considered Posistive And After That All the Entries will Be Substracted From The First Entry\nNow Enter The Number Or Press 0 ");
                scanf("%lf",&n1);
                if(n1!=0){
                    sum1=n1-sum1;
                    sum1<0?(sum1=-sum1):(sum1=sum1);
                }                  
                else{
                    double sum2=sum1;
                    int c=sum2;
                    float d=sum2-c;
                    if(d<1&&d>0)
                    printf("The Output Is=%f\n",sum2);
                    else
                    printf("The Output Is=%d\n",c);
                }
            }
            break;
            case 3:
            double mul=1,n2=0.00000000001;
            while(n2!=0){
                printf("Please Press Enter Key For Each Number You Give As Input Or Press 0 If You Don't Want To Give Any Further Inputs\nNow Enter The Number Or Press 0 ");
                scanf("%lf",&n2);
                if(n2!=0){
                    mul=mul*n2;
                }                  
                else{
                    int c2=mul;
                    float d=mul-c2;
                    if(d<1&&d>0)
                    printf("The Output Is=%f\n",mul);
                    else
                    printf("The Output Is=%d\n",c2);
                }
            }
            break;
            case 4:
            double div=1,n3=0.00000000001;
            printf("Please Press Enter Key For Each Number You Give As Input Or Press 0 If You Don't Want To Give Any Further Inputs\nNote:The First Input Will Be The Numerator And All Other Inputs Will Be Considered As Denominators w.r.t The Previous Outputs\nNow Enter Number Or Enter Zero");
            scanf("%lf",&div);
            while(n3!=0){
                printf("Now Enter Number Or Enter Zero ");
                scanf("%lf",&n3);
                if(n3!=0){
                    div=div/n3;
                }                  
                else{
                    int c3=div;
                    float d=div-c3;
                    if(d<1&&d>0)
                    printf("The Output Is=%f\n",div);
                    else
                    printf("The Output Is=%d\n",c3);
                }
            }
            break;
            case 5:
            double num=1,n4=0.00000000001;
            printf("Please Press Enter Key For Each Number You Give As Input Or Press 0 If You Don't Want To Give Any Further Inputs\nNow Enter The Number That You Want To Get Power of ");
            scanf("%lf",&num);
            printf("Enter The Power ");
            scanf("%lf",&n4);
            double m=pow(num,n4);
            int c=m;
            double d=m-c;
            if(d<1&&d>0)
            printf("The Output Is=%f\n",m);
            else
            printf("The Output Is=%d\n",c);
            break;
            case 6:
            printf("Thank You For Using The Calculator");
            return 0;
        }
    }
}