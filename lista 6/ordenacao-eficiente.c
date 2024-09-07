void merge(int *v,  int l, int m, int r)
{
    int tam = r+1-l;
    int *aux = malloc(sizeof(int)*tam);
    
    int i=l; 
    int j=m+1;
    int k=0; 
    
    while(i<=m && j<=r) {
        if(v[i] <= v[j]) 
            aux[k++] = v[i++];
        else 
            aux[k++] = v[j++];
    }

    while(i<=m) aux[k++] = v[i++];
    while(j<=r) aux[k++] = v[j++];

    /*
        while(k<tam) {
            if(i>m)
                aux[k++] = v[j++];

            else if (j>r)
                aux[k++] = v[i++];

            else if (v[i] <= v[j])
                aux[k++] = v[i++];
            else
                aux[k++] = v[j++];
        }
    */

    for(k=0, i=l; i<=r; i++, k++)
        v[i] = aux[k];
        
    free(aux);
}

void merge_sort(int *v, int l, int r)
{

    //if (l >= r) return;
    if (r-l <= 15) {
        insertion_otimizado(v, l, r);
        return;
    }
    int m = (r+l)/2;
    
    merge_sort(v, l, m);
    merge_sort(v, m+1, r);
    
    if(v[m]>v[m+1]) 
        merge(v, l, m, r); 
}

void mergeBU_sort(int *v, int l, int r)
{    
    int tam = (r-l+1);

    for (int sz=1; sz<tam; sz=sz+sz)
    {
        for (int lo=l; lo<tam-sz; lo+=sz+sz)
        {
            int hi = lo+sz+sz-1;
            if(hi>tam-1) hi = tam-1;

            merge(v, lo, lo+sz-1, hi); 
        }
    }
}
