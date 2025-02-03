#include<stdio.h>
int main(){
	int m,n,i,j,k;
	printf("enter the number of rows : ");
	scanf("%d",&m);
	printf("enter the number of coloumns : ");
	scanf("%d",&n);
	int matA[m][n];
	int matB[m][n];
	int matX[m][m];
	int transposeA[m][n];
	for (i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("enter the element a[%d][%d] ",i+1,j+1);
			scanf("%d",&matA[i][j]);
		}
	}
	printf("matrix A \n ");
		for (i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",matA[i][j]);
		}
		printf("\n");
	}
	printf("\n ENTER MATRIX B\n");
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			printf("enter element a[%d][%d] ",i+1,j+1);
			scanf("%d",&matB[i][j]);
		}
	}
	printf ("\nmatrix B \n");
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			printf("%d\t",matB[i][j]);
		}
		printf("\n");
	}
	int matC[m][n];
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			matC[i][j]=matA[i][j]+matB[i][j];
		}
	}
	printf("\n Addition matrix is \n");
	for (i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",matC[i][j]);
		}
		printf("\n");
	}
	int matD[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			matD[i][j]=matA[i][j]-matB[i][j];
		}
	}
	printf("\n subtraction matrix\n ");
	for (i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",matD[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<m;i++){
		for(j=0;j<m;j++){
			matX[i][j]=0;
		}
	}
	int matP[n][m];
	printf("\nenter matrix P\n");
		for (i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("enter the element a[%d][%d] ",i+1,j+1);
			scanf("%d",&matP[i][j]);
		}
	}
	printf("\nmatrix X (AXP)\n");
	 for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            for ( k = 0; k < n; k++) {
                matX[i][j] += matA[i][k] * matP[k][j];
            }
        }
    }
    for (i=0;i<m;i++){
    	for (j=0;j<m;j++){
    		printf("%d\t",matX[i][j]);
		}
		printf("\n");
	}
	printf("\ntranspose of matrix A\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			transposeA[i][j]=matA[j][i];
		}
	}
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			printf("%d\t",transposeA[i][j]);
		}
		printf("\n");
	}
	return 0;
}
	

	

