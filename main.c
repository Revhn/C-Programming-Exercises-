//
//  main.c
//  O Rec Wk 4
//
//  Created by Kevin Medina on 2/23/18.
//  Copyright © 2018 Kevin Medina. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int iHeight = 72;
    double dTemp = 98.6;
    char szFirst[] = "Joe";
    char szLast[] = "King";
    
     printf("A. Height=%d, Temp=%6.3lf, Name=%5s%5s\n"
           , iHeight, dTemp, szFirst, szLast);
    
    // Output of this code is
    // Height=72, Temp=98.600, Name=  Joe King
    
    printf("B. Height=%3d, Temp=%.1lf, Name=%-5s%-3s\n"
           , iHeight, dTemp, szFirst, szLast);
    
    // Output of this code is
    // Height= 72, Temp=98.6, Name=Joe  King

    return 0;
}





