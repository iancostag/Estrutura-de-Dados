void selection(int v[], int l, int r){
    int menor;
    for(int i=l; i<r; i++) {
        menor = i;
        for(int j=i+1; j<=r; j++)
            if(v[j] < v[menor])
                menor = j;

        if(i != menor) exch(v[i], v[menor])
    }
}

void selection_r(int v[], int l, int r){
    if(l>r) return;

    int menor = l;
    for(int j=l+1; j<=r; j++)
        if(v[j] < v[menor])
            menor = j;
        
    if(l != menor) exch(v[l], v[menor])

    selection_r(v, l+1, r);
}

void bubble(int v[], int l, int r){
    int swap = 1;
    for(; r>l && swap; r--){
        swap = 0;
        for(int j=l; j<r; j++) {
            if(v[j] > v[j+1]){ 
                exch(v[j], v[j+1])
                swap = 1;
            }
        }
    }
}


void shaker(int v[], int l, int r){

    int swap = 1;
    for(; swap && l<=r; l++, r--){
        swap = 0;
        for(int j=l; j<r; j++) {
            if(v[j] > v[j+1]){ 
                exch(v[j], v[j+1])
                swap = 1;
            }
        }

        for(int j=r; j>l; j--) {
            if(v[j] < v[j-1]){ 
                exch(v[j], v[j-1])
                swap = 1;
            }
        }
    }
}
