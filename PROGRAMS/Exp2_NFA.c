// To write a C program to simulate a Non-Deterministic Finite Automata. 

#include<stdio.h>
#include<string.h>

int checkValidity(char input[], int symbols[], int l, int no_symbols){
    int valid;
    for(int i = 0;i<l;i++){
        if(input[i] == '0' || input[i] == '1')
            continue;
        else{
            valid = 0;
            break;
        }     
    }
    return valid;
}
int main(){

    // Total States : 
    int no_states;
    printf("Enter The no.of states : ");
    scanf("%d", &no_states);

    // Total Symbols : 
    int no_symbols, symbols[10];
    printf("Total no. of symbols in the alphabet : ");
    scanf("%d", &no_symbols);

        printf("Enter Symbols : ");
        for(int i = 0;i<no_symbols;i++)
            scanf("%d", &symbols[i]);
    
    // Total Final States : 
    int no_finals , finals[10];
    printf("Total no. of Final States : ");
    scanf("%d", &no_finals);

        printf("Enter Final States :");
        for(int i = 0; i< no_finals;i++)
            scanf("%d", &finals[i]);

    // Creating Transition Table
    int tt[10][10][10];

        /* Initializing TT to -1 */
        for(int i = 0;i<10;i++)
            for(int j = 0;j<10;j++)
                for(int k = 0;k<10;k++)
                    tt[i][j][k] = -1;

        /* Receiving Transition Table */
        int n;

        for(int i = 0;i<no_states; i++)
            for(int j = 0; j<no_symbols; j++){
                printf("No. of transitions from STATE-%d over SYMBOL-%d : ", i,j);
                scanf("%d", &n);
                for(int k = 0; k<n ;k++){
                    printf("Enter Transition - %d : ", k+1);
                    scanf("%d", &tt[i][j][k]);
                }
            }
        
        /* Displaying Transition Table */

        for(int i = 0;i<10;i++)
            for(int j = 0;j<10;j++)
                for(int k = 0;k<10;k++){ 
                    if(tt[i][j][k] != -1)
                        printf("TT[%d][%d][%d] = %d\n", i,j,k,tt[i][j][k]);
                }
                    
    // Working on User Input

        /* Receiving Input : */
        char input[100];
        printf("Enter an Input : ");
        scanf("%d", &input);

        /* Finding Input Length : */
        int l = strlen(input);
        int temp_l = l;

        /* Checking Validity of the String : */
        int valid = checkValidity(input,symbols,l,no_symbols);

        /* Boss Code :( */

        int current_state, next_state[10],current_symbol;
        if(valid == 1){
            /* Getting current symbol pointed by a input pointer*/

            if(input[0] == '0')
                current_symbol = 0;
            else if(input[0] == '1')
                current_symbol = 1;

            while(temp_l > 0){

                current_state = 0;

                int count = 0;
                for(int j = 0;j<10;j++){
                    for(int k = 0;k<10; k++){
                        if(tt[current_state][j][k] != -1)
                            count++;
                    }
                }

                int no_of_next_trans = count;






                temp_l--;
                current_symbol = input[l - temp_l];
                
            }
        }

    



    return 0;
}