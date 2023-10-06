public class Solution
{ 
    int celebrity(int m[][], int n)
    {
    	int i=0,j=0,c=0;
    	int k[] = new int[n];
    	while (i<n){
    	    if (m[i][j]==1){
    	        j++;
    	        c++;
    	    }
    	    else {
    	        j++;
    	    }
    	    if (j==n){
    	        k[i]=c;
    	        i++;
    	        j=0;
    	        c=0;
    	    }
    	}
    	c=0;
    	for (i=0;i<n;i++){
    	    if (k[i]>0){
    	        c++;
    	    }
    	}
    	int l = -1;
    	if (c==0){
    	    l=-1;
    	}
    	else{
    	    int min = k[0];
    	    for (i=1;i<n;i++){
    	        if (min>=k[i]){
    	           l=i;
    	           min=k[i];
    	         }
         	}
    	    if (min==k[0]){
    	       l=0;
        	}
        	if (k[l]==0){
        	    for (i=0;i<n;i++){
        	    if (i==l){
        	        continue;
        	    }
        	    else if (m[i][l]!=1){
        	        l=-1;
        	        break;
        	    }
        	}
        	}
        	else {
        	    l=-1;
        	}
        	
    	}
    	return l;
    }
}