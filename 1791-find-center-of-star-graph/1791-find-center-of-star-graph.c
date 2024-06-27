int findCenter(int** edges, int edgesSize, int* edgesColSize){
    int count=0;
    for(int i=0;i<edgesSize;i++){
        if(edges[0][0]==edges[i][0]||edges[0][0]==edges[i][1])
            count++;
    }if(count==edgesSize)
            return edges[0][0];
    return edges[0][1];
}