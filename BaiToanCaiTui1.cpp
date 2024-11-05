#include <bits/stdc++.h>
typedef int ai[50];
typedef float af[50];
#define FOR for
#define ELSE else
af c,a;
ai x, xopt, ind;
int n;
float w, fopt, cost, weight;
FILE *input;
void batdau()
{
    int i,j,tg;
    float t;
    fopt=0; weight=0;
    FOR(i=1; i<=n; i++)
    {
        ind[i]=i;
        x[i]=0;
        xopt[i]=0;
    }
    FOR(i=1; i<=n-1; i++)
        FOR(j=1; j<=n; j++)
            if(c[i]/a[i]<c[j]/a[j])
            {
                t=c[i]; c[i]=c[j]; c[j]=t;
                t=a[i]; a[i]=a[j]; a[j]=t;
                tg=ind[i]; ind[i]=ind[j]; ind[j]=tg;
            }
}
void nhapfile()
{
    char inName[64];
    int i;
    printf("Enter input file name: ");
    scanf("%63s", inName);
    if ((input = fopen (inName, "r")) != NULL)
    {
    fscanf(input,"%d",&n); // so luong do vat
    fscanf(input,"%f",&w); // trong luong cai tui
    FOR(i=1; i<=n; i++) fscanf(input,"%f", &a[i]); // trong luong do vat
    FOR(i=1; i<=n; i++) fscanf(input,"%f", &c[i]); // gia tri do vat
    fclose(input);
    printf("\nTrong luong cai tui la: %.f", w); // in du lieu da nhap
    printf("\nVec to gia tri do vat: ");
    FOR(i=1; i<=n; i++) printf("%.f ", c[i]);
    printf("\nVec to trong luong do vat: ");
    FOR(i=1; i<=n; i++) printf("%.f ", a[i]);
    }
}
void update()
{
    int i;
    if(cost>fopt)
    {
        FOR(i=1; i<=n; i++) xopt[i]=x[i];
        fopt=cost;
    }
}
void nhanhcan(int i)
{
    int j,t;
    t=(w-weight)/a[i];
    FOR(j=t; j>=0; j--)
    {
        x[i]=j;
        weight=weight+a[i]*x[i];
        cost=cost+c[i]*x[i];
        if (i==n) update();
        ELSE if (cost+c[i+1]*(w-weight)/a[i+1]>fopt) nhanhcan(i+1);
        weight=weight-a[i]*x[i];
        cost=cost-c[i]*x[i];
    }
}
void inkq()
{
    int i;
    printf("\n\n***Ket qua tinh toan***");
    printf("\nTong gia tri cua cac do vat la: %.f", fopt);
    printf("\nPhuong an toi uu la: ");
    FOR(i=1; i<=n; i++) printf("\nSo luong do vat %d la %d", ind[i], xopt[i]);
    printf("\n***********************\n");

}
int main()
{
    nhapfile();
    batdau();
    nhanhcan(1);
    inkq();
} 
