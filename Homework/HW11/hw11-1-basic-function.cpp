/*
    รับค่าจากผู้ใช้จำนวน 3 ค่า และสร้างฟังก์ชันในการหาผลรวมของจำนวน 3 ค่านี้ และแสดงผลลัพธ์มายังหน้าจอ พร้อมระบุชื่อฟังก์ชันที่เรียกใช้งาน 
    เช่น รับค่า 3, 5, 6 จะแสดงผลลัพธ์ว่า 14 (Calculate by Additional Function)

    Test case:
        Input 1 : 
            3
        Input 2 : 
            4
        Input 3 : 
            5
    Output:
        Summation = 12 (Calculate by Additional Function)
*/
#include <stdio.h>

int sum(int a, int b, int c) ;

int main() {

    int ans ;
    int input1, input2, input3 ;

    printf( "Input 1 :\n" ) ;
    scanf( "%d", &input1 ) ;

    printf( "Input 2 :\n" ) ;
    scanf( "%d", &input2 ) ;

    printf( "Input 3 :\n" ) ;
    scanf( "%d", &input3 ) ;

    ans = sum( input1, input2, input3 ) ;
    
    printf( "Summation = %d (Calculate by Additional Function)", ans ) ;

    return 0 ;
}//end function main

int sum(int a, int b, int c) {

    return a + b + c ;
}//end function sum