// To represent negative and postive both decimal number in binary
    #include <stdio.h>
    using namespace std;
    int main(void){
        int i = 0;
        unsigned int u_i = 0;
        int j = 0;
        int b[16] = {0}; //Assuming your integer size is 16bit

        printf("Enter the number");   //enter postive either negative number
        scanf("%d",&i);

        u_i = (unsigned int)i;

        for(j=15;j>=0;j--) {
            b[j] = u_i & 0x1;
            u_i  = u_i >> 1;
        }

        for (j=0;j<=15;j++)
            printf("%d ", b[j]);

        printf("\n");
        return 0;
    }

