#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct mounts{
    char * name;
    int height;
}mounts;
int namesort(void* a, void* b);
int heightsort(void* a, void* b);

int main()
{
    struct mounts;
    char name[100];
    mounts  *mas;
    int n, i, height;
    scanf("%d",&n);
    mas=malloc(n * sizeof(mounts));
    for(i=0; i<n; ++i){
        scanf("%s%d", name, &height);
        mas[i].name = malloc((strlen(name)+1)*sizeof(char));
        strcpy(mas[i].name, name);
        mas[i].height=height;
    }
    qsort(mas, n, sizeof(mounts),namesort );
    for(i=0; i<n; ++i){
        printf("%5s %d\n", mas[i].name, mas[i].height);
    }
     qsort(mas, n,sizeof(mounts),heightsort );
    for(i=0; i<n; ++i){
        printf("%5s %d\n", mas[i].name, mas[i].height);
    }
    for(i=0; i<n; ++i){
        free(mas[i].name);
    }
    free(mas);

    return 0;
}
int namesort( void* a, void* b)
{
     mounts *pa = a;
     mounts *pb = b;
     return strcmp(pa->name, pb->name);
 }

 int heightsort( void* a, void* b)
 {
     mounts *pa = a;
     mounts *pb = b;
     return pa->height - pb->height;
 }
