#include <stdio.h>
//function definition 2 on c programming 
float add(float x, float y){
    float ans;
    ans = x+y;
    return ans;
}
//main function
int main()
{
   
    float fst_num, second_num, result;

    printf("supply your fst value\n");
    scanf("%f",&fst_num);

    printf("supply your second value\n");
    scanf("%f", &second_num);

     //function part call
     result = add(fst_num, second_num);

     printf("The sum of two number:%f", result);
    //  getchar;

}
