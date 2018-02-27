//
//  main.c
//  Trace Code 1
//
//  Created by Kevin Medina on 2/23/18.
//  Copyright © 2018 Kevin Medina. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int iValue = 3;
    char szName[15] = {"Perry Mecium"};
    char *psz1;
    int  *piVal;
    int i = 0;
    piVal = &iValue;
    *piVal = *piVal + 2;
    i = *piVal;
    psz1 = &szName[i];
    strcpy(psz1, "Scope");

    printf ("A.%4d\n", iValue);
    // Output for this code is
    // A.   5
    
    printf ("B.%d\n", *piVal);
    // Output for this code is
    // B.5
    
    printf ("C.%-13s\n", szName);
    // Output for this code is
    // C.PerryScope
    
    printf ("D.%13s\n", szName);
    // Output for this code is
    // D.   PerryScope
    
    printf ("E.%4s\n", &szName[5]);
    // Output for this code is
    // E.Scope
    
    return 0;
}
