#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,i, Data[i], cari ;
    printf("data yang disimpan :");
    scanf("%d",&n);
    printf("masukan %d integer (s)\n",n);
    for (i=0;i<n;i++)
    scanf("%d",&Data[i]);

    printf("data yang dicari :");
    scanf("%d",&cari);


    for (i=0;i<n;i++){
        if (Data[i]==cari){
           printf("angka %d Ketemu, dan tersimpan dilokasi/posisi %d",cari,i+1);
        break;

        }
    }if (i==n)
    printf("angka %d TIDAK KETEMU\n",cari);

    return 0;
}

