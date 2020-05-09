#include <stdio.h>
#include <stdlib.h>
#include <switch.h>
#include <string.h>
#include <malloc.h>
#include <stddef.h>

int main(int argc, char const *argv[])
{
    Result rc=0;
    long multiplier = 0;
    long number = 0;
    long add = 0;
    long number_add = 0;
    long number_substract = 0;
    long substract = 0;
    long divide = 0;
    long number_divide = 0;

    
    consoleInit(NULL);
     SwkbdConfig kbd;
    char tmpoutstr[16] = {0};
    rc = swkbdCreate(&kbd, 0);
    printf("swkbdCreate(): 0x%x\n", rc);

    if (R_SUCCEEDED(rc)) {
        // Select a Preset to use, if any.
        swkbdConfigMakePresetDefault(&kbd);
        //swkbdConfigMakePresetPassword(&kbd);
        //swkbdConfigMakePresetUserName(&kbd);
        //swkbdConfigMakePresetDownloadCode(&kbd);

        // Optional, set any text if you want (see swkbd.h).
        //swkbdConfigSetOkButtonText(&kbd, "Submit");
        //swkbdConfigSetLeftOptionalSymbolKey(&kbd, "a");
        //swkbdConfigSetRightOptionalSymbolKey(&kbd, "b");
        //swkbdConfigSetHeaderText(&kbd, "Header");
        //swkbdConfigSetSubText(&kbd, "Sub");
        //swkbdConfigSetGuideText(&kbd, "Guide");

        // Set the initial string if you want.
        //swkbdConfigSetInitialText(&kbd, "Initial");

        // You can also use swkbdConfigSet*() funcs if you want.

        printf("Running swkbdShow...\n");
        rc = swkbdShow(&kbd, tmpoutstr, sizeof(tmpoutstr));
        printf("swkbdShow(): 0x%x\n", rc);

        if (R_SUCCEEDED(rc)) {
            printf("out str: %s\n", tmpoutstr);
        }
        swkbdClose(&kbd);
    int menuchoice;
    printf("=====Welcome to the remake of CalculatorNX named accordingly CalculatorNX2o2o=====\n");

    printf("1. Multiply\n\n");

    printf("2.Add\n\n");

    printf("3. Substract\n\n");

    printf("4. Divide\n\n");

    scanf("%d" , &menuchoice);

    switch(menuchoice)
    {
        case 1:
            printf("        What is the number you want to multiply?\n\n        ");
            consoleUpdate(NULL);
            scanf("%ld", &number);
            consoleUpdate(NULL);
            printf("        What is the multiplier?\n\n            ");
            consoleUpdate(NULL);
            scanf("%ld", &multiplier);
            consoleUpdate(NULL);
            long result = number * multiplier;
            consoleUpdate(NULL);
            printf("your number is %ld\n", result);
            consoleUpdate(NULL);
            break;
            consoleUpdate(NULL);

        case 2:
            printf("        What is the number?\n\n        ");
            consoleUpdate(NULL);
            scanf("%ld", &number_add);
            consoleUpdate(NULL);
            printf("        What is the number to add?\n\n            ");
            consoleUpdate(NULL);
            scanf("%ld", &add);
            consoleUpdate(NULL);
            long result_add = add + number_add;
            consoleUpdate(NULL);
            printf("your number is %ld\n", result_add);
            consoleUpdate(NULL);
            break;
            consoleUpdate(NULL);
            
        case 3:
            printf("        What is the number to substract?\n\n        ");
            consoleUpdate(NULL);
            scanf("%ld", &number_substract);
            consoleUpdate(NULL);
            printf("        What is the number to substract with?\n\n            ");
            consoleUpdate(NULL);
            scanf("%ld", &substract);
            consoleUpdate(NULL);
            long result_substract = number_substract - substract;
            consoleUpdate(NULL);
            printf("your number is %ld\n", result_substract);
            consoleUpdate(NULL);
            break;
            consoleUpdate(NULL);

        case 4:
            printf("        What is the number to divide?\n\n        ");
            consoleUpdate(NULL);
            scanf("%ld", &number_divide);
            consoleUpdate(NULL);
            printf("        What is the number to divide with?\n\n            ");
            consoleUpdate(NULL);
            scanf("%ld", &divide);
            consoleUpdate(NULL);
            long result_divide = number_divide / divide;
            consoleUpdate(NULL);
            printf("your number is %ld\n", result_divide);
            consoleUpdate(NULL);
            break;
            consoleUpdate(NULL);
        default : break;
    }
    printf("Press + to exit.\n");

     while(appletMainLoop())
    {
        //Scan all the inputs. This should be done once for each frame
        hidScanInput();

        //hidKeysDown returns information about which buttons have been just pressed (and they weren't in the previous frame)
        u64 kDown = hidKeysDown(CONTROLLER_P1_AUTO);
        if (kDown & KEY_PLUS) break; // break in order to return to hbmenu
        consoleUpdate(NULL);
    }
    printf("\n\n");
    printf("This homebrew politically identifies as Pro-Marxist and it's pronouns are\n He and Him.\n\n "  "MAGA 2020  \n\n" "Copyright © GOffrier#9688\n\n");
    consoleExit(NULL);
    return 0;
}
