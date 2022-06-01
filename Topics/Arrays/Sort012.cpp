void sort012(int a[], int n)
{
    int l=0,m=0,h=a.length-1;

    while(m<=h){
        if(arr[m]==0){
            swap(a, l, m);
            l++;
            m++;
        } else if(arr[m]==1){
            m++;
        } else{
            swap(a, m, h);
            h--;
        }
    }
}
