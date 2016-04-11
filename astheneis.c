#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number_of_patients=100;
    
int b[number_of_patients][3],j,i,m,mo;
    m=0;
    for(j=1; j<=number_of_patients;j++){

    printf("dwse thrmokrasies %d astheni :\n",j);
  // eisodos 3 metrisewn
    for(i=1;i<=3;i++) {
    printf("dwse %d thremrokrasia %d astheni: ",i,j);
        scanf("%d",&b[j][i]);
 // elegxos eisodou
    if (b[j][i]>=35 && b[j][i]<=42) {
         m=m+b[i];
    }
     else if (b[j][i]<=34 || b[j][i]>=43)
     {
 // meiwsi counter i wste na parei timi stin idia thesi tou pinaka
       printf("m egkiri thermokrasia 3anaprospathise\n");
           i=i-1;
     }

    }
// ypologismos mo
      mo=m/3;

    if (mo<38){
            for(i=1; i<=38;i++)
                 printf("%d eisai komple\n",i);
    }
}
    return 0;
}
