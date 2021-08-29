int tour(petrolPump p[],int n)
{
    int surplus=0, deficit=0, idx=0;
    
    for(int i=0; i<n; i++){
        surplus+= p[i].petrol - p[i].distance;
        if(surplus<0){
            idx = i+1;
            deficit += surplus;
            surplus = 0;
        }
    }
    
    return surplus+deficit>=0? idx: -1;
}
