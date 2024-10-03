//#include <stdio.h>
//
//int main()
//{
//    /*
//    -This block is started at /*
//    -and all of this are comments
//    -and end with */
//    printf("For the world!\n");
//    return 0;
//
//}

//Format specification
//#include <stdio.h>

//int main()
//{
//    //%d是占位符，会提取双引号后面的第一个数字
//    printf("I am %d years old, \nbut next year I will turn to %d!\n",24,25);
//    printf("My average Grade: %.1f\n",93.7); //%f是浮点数占用符,%.1f意思是小数点后1位
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    printf("a = %d, b = %d, sum = a+b = %d+%d =%d\n",3,5,3,5,3+5);
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    printf("a = %d, b = %d, \nAddition = a + b = %d \nSubtraction = a - b = %d \nMultiplication = a*b = %d \nDivision = a/b =%d \nRemainder = a%%b = %d\n",5,2,5+2,5-2,5*2,5/2,5%2);
//    return 0; //用%表示余数的时候需要使用两个，仅使用一个便不会显

//#include <stdio.h>
//
//int main()
//{
//    printf("1*********\n12********\n123*******\n");
//    printf("1234******\n12345*****\n");
//    printf("\n1*********\n12********\n123*******\n1234******\n12345*****\n");
//    return 0;
//
//}

//#include <stdio.h>
//
//int main()
//{
//    printf("*     *\n *   * \n  * *  \n   *   \n  * *  \n *   * \n*     *\n");
//    printf("\n*     *");
//    printf("\n *   * ");
//    printf("\n  * *  ");
//    printf("\n   *   ");
//    printf("\n  * *  ");
//    printf("\n *   * ");
//    printf("\n*     *");
//    return 0;
//}
#include <stdio.h>

int main()
{
    printf("Current_year = %d, My_age = %d, Born_year = Current_year - My_age = %d\n",2024,24,2024-24);
    return 0;
}
