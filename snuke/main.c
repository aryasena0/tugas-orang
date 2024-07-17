/**
 * Created by <sena@lichtlabs.org> Wed 17 Jul, 2024
 */
#include <stdio.h>
#include <stdbool.h>

bool is_even(int num)
{
    if (num % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int snuke(int n, int *list)
{
    printf("Runnin\n");
    int result = 0;
    int even_num_count = 0;

    int i;
    // loop trough the list and divide it if its an even number
    for (i = 0; i < n; i++) 
    {
        if (is_even(list[i])) {
            list[i] = list[i] / 2;
            even_num_count += 1;
        }
    }

    // check if even_num_count eq with n
    if (even_num_count == n) 
    {
        even_num_count = 0;
        // recursively caluclate the result again until some number is not even
        result = snuke(n, list);
        result += 1;
    }
    

    return result;
    
}

int main() 
{
    int input1[3] = {8, 12, 40};
    int input2[4] = {5, 6, 8, 10};

    int result1 = snuke(3, input1);
    int result2 = snuke(4, input2);

    printf("The first input result is: %d, expected: %d \n", result1, 2);
    printf("The second input result is: %d expected; %d \n", result2, 0);

    return (0);
}

