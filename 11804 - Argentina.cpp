#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
    char str[100];
    int attack;
    int defend;
}data;

data player[15];

void input(void);
int cp(void const *p,void const *q);
int cp1(void const *p,void const *q);
void print(void);

int main(void)
{
    int i,j,k,test,qq;

    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
        printf("Case %d:\n", qq);
        input();
        qsort(player,10,sizeof(data),cp);
        print();
        printf("\n");
    }

    return 0;
}

void print(void)
{
    int i;

    qsort(player,5,sizeof(data),cp1);

    /// One

    printf("(");
    for(i=0;i<4;i++)
    {
        printf("%s, ", player[i].str);
    }
    printf("%s)", player[4].str);
    printf("\n");



    qsort(player+5,5,sizeof(data),cp1);

    /// Two

    printf("(");
    for(i=5;i<9;i++)
    {
        printf("%s, ", player[i].str);
    }
    printf("%s)", player[9].str);

    return ;
}

int cp1(void const *p,void const *q)
{
    data *a,*b;

    a=(data *)p; b=(data *)q;

    return strcmp(a->str,b->str);
}


int cp(void const *p,void const *q)
{
    data *a,*b;

    a=(data *)p; b=(data *)q;

    if( (b->attack == a->attack) && (a->defend == b->defend) )
    {
        return strcmp(a->str,b->str);
    }

    else if(b->attack == a->attack)
    {
       return (a->defend - b->defend);
    }

    else return (b->attack - a->attack);
}

void input(void)
{
    int i,j,k;

    for(i=0;i<10;i++)
    {
        scanf("%s", &player[i].str);
        scanf("%d", &player[i].attack);
        scanf("%d", &player[i].defend);
    }

    return ;
}
