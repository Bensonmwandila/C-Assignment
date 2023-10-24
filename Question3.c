
#include <stdio.h>

int main() {
        double talk_time_bal, mobile_money_bal;

   // We create multiple variables to use for our conditional expressions 
    int mobile_money_pin,pin,frd,yees, ussd_code,opt2,frd1,bal,option,numb, main_menu_choice, vibez_main,slt, supa_cheza_main,vibez_buy_choice, payment_choice, mobile_money_pin_prompt;

    /* We declare a variable and assign it with 1, to enable the user to get back to previous stages of the menus  */
    int back = 1;

       
    printf("\nTo use the USSD code, first generate your mobile money pin, then enter your preferred mobile money account balance and talk-time balance to purchase any of the packages.");
    
    

    printf("\t\nCreate a mobile money pin: ");
    scanf("%d", &mobile_money_pin);
    printf("\t********************************************************************\n");

    printf("\t\nEnter your desired mobile money balance (K): ");
    scanf("%lf", &mobile_money_bal);
    printf("\n**************************************************************************\n");

    printf("\n\tEnter your desired talk-time balance (K): ");
    scanf("%lf", &talk_time_bal);
    printf("\n*****************************************************\n");

    printf("\nEnter correct USSD code: ");
    scanf("%d", &ussd_code);

    // We use the 'if-else' to determine whether the USSD code is correct or not (in short, what we want the user to enter is 117)
    if (ussd_code == 117) {

        // We enter a loop to enable the user to comeback when they select assigned option (e.g, 00 in vibez menu)
        while (back == 1) {
            // We set the value of the 'back' variable to 0 so that the program can exit after a successful transaction
            back -= 1;

            /* We display the main menu options and prompt the user for their input as a choice and save it to the appropriate variable 
               (in this case, we save it to [main_menu_choice]) */
            printf("\t-----------------------------------------------------------------------------------------");
            printf("\n\n\tThe Best Offers In Town:\n\n");
            printf("\n\t1) Vibez");
            printf("\n\t2) Supa Cheza");
            printf("\n\t3) Ni Yathu");
            printf("\n\t4) All-Net-Freedom");
            printf("\n\t5) Balance");
            printf("\n\t6) Woza weekend");
            printf("\n\t7) Velocity Lite");
            printf("\n\t8) Buy4Other");

            printf("\n\n\tEnter option ");
            scanf("%d", &main_menu_choice);

            // We use the 'switch' statement to assign all the main menu options to the appropriate cases (i.e., main menu option 1 to case 1)
            switch (main_menu_choice)
            {
                case 1:
                    /* In the first case, we display the 'Vibez' options and prompt the user to select their choice, 
                       and store it in [vibez_main] variable */
                    printf("\t-------------------------------------------------------------------------------------------------------");
                    printf("\n\n\t1) K5 - 880MB - 24Hrs");
                    printf("\n\t2) K15 - 2.5GB+WTFI - 7Days");
                    printf("\n\t3) K25 - 6GB+WTFI - 7Days");
                    printf("\n\t4) K110 - 15GB+WTFI - 30Days");
                    printf("\n\t5) K5 - 30Mins, 35sms, 120mb");
                    printf("\n\t6) K10 - 65Mins, 80sms, 220mb");
                    printf("\n\tPress 00 for main menu");
                    
                    printf("\n\n\tEnter option ");
                    scanf("%d", &vibez_main);
                    
                    /* I'll explain the logic only in this 'if' branch, otherwise the logic is the same for all the 'else if' branches 
                    and can be applied to the rest of the code if you want.*/
                    if (vibez_main == 1) {

                        // We ask the user to decide whether they want to subscribe to the package or not and prompt them for their choice
                        printf("\t-------------------------------------------------------------------------------------------------------");
                        printf("\n\n\tAre you sure you want to subscribe to K5 - 880MB for 24Hrs?");
                        printf("\n\t1) Yes");
                        printf("\n\t2) No");

                        printf("\n\n\tEnter option ");
                        scanf("%d", &vibez_buy_choice);

                                              
                        // If the user decides to go ahead, we ask them their preferred payment method
                        if (vibez_buy_choice == 1) {
                            printf("\t-------------------------------------------------------------------------------------------------------");
                            printf("\n\n\t1) Main Account");
                            printf("\n\t2) Mobile Money");
                            
                            printf("\n\n\tEnter option ");
                            scanf("%d", &payment_choice);
                            
                            // Talk-time Account Payment
                            if (payment_choice == 1) {
                                /* If the user's talk-time balance is greater than or equal to the price of the package, we proceed to deduct from their total balance
                                and then display a success message and terminate the program.
                                Otherwise we will display the 'insufficient funds' message and terminate the program*/
                                if (talk_time_bal >= 5) {
                                    talk_time_bal -= 5;
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tDear customer, you have successfully subscribed to K5 - 880MB for 24Hrs.\n");
                                    printf("\tYour account balance is K%.2lf\n", talk_time_bal);
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                }
                                else {
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tYou cannot buy offer/package due to insufficient funds in your account\n");
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                }
                                
                            } 
                            // Mobile Money Payment
                            else if (payment_choice == 2) {
                                printf("\t-------------------------------------------------------------------------------------------------------");
                                
                                printf("\n\n\tPlease input your Mobile Money PIN: ");
                                scanf("%d", &mobile_money_pin_prompt);

                                if ((mobile_money_pin_prompt == mobile_money_pin) && (mobile_money_bal >= 5)) {
                                    /* If the user's mobile money balance is greater than or equal to the price of the package, we proceed to deduct from their total balance
                                    and then display a success message and terminate the program.
                                    Otherwise we will display the 'insufficient funds' message and terminate the program */
                                        mobile_money_bal -= 5;
                                        printf("\t-------------------------------------------------------------------------------------------------------");
                                        printf("\n\n\tDear customer, you have successfully subscribed to K5 - 880MB for 24Hrs.");
                                        printf("\n\tYour mobile money account balance is K%.2lf\n", mobile_money_bal);
                                        printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                        break;      
                                } 
                                /* Otherwise if the mobile money pin is correct and the balance is less than the package's price, we display the 'insufficient funds' message
                                and terminate the program */
                                else if ((mobile_money_pin_prompt == mobile_money_pin) && (mobile_money_bal < 5)) {
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tYou cannot buy offer/package due to insufficient funds in your account\n");
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                }
                                // Otherwise if the mobile money pin is incorrect, we display the 'wrong pin number' message and terminate the program
                                else if (mobile_money_pin_prompt != mobile_money_pin) {
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tThe user name or PIN entered is wrong.\n");
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                }
                                // If the user's input option is invalid, we diplay the 'Invalid Input' message and terminate the program
                                else {
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tInvalid Input\n");
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                }
                                
                            }
                            // If the user's input option is invalid, we diplay the 'Invalid Input' message and terminate the program
                            else {
                                printf("\t-------------------------------------------------------------------------------------------------------");
                                printf("\n\n\tInvalid Input\n");
                                printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                break;
                            }

                        } 
                        
                        // If the user decides to cancel, we display the 'subscription cancelled' message and terminate the program
                        else if (vibez_buy_choice == 2) {
                            printf("\t-------------------------------------------------------------------------------------------------------");
                            printf("\n\n\tSubscription Cancelled\n");
                            printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                            break;
                        }
                        // If the user's input option is invalid, we diplay the 'Invalid Input' message and terminate the program
                        else { 
                            printf("\n\n\tInvalid input\n");
                            printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                            break;
                        }
                    }

                    else if (vibez_main == 2) {

                        printf("\t-------------------------------------------------------------------------------------------------------");
                        printf("\n\n\tAre you sure you want to subscribe to K15 - 2.5GB+WTFI for 7Days?");
                        printf("\n\t1) Yes");
                        printf("\n\t2) No");

                        printf("\n\n\tEnter option ");
                        scanf("%d", &vibez_buy_choice);

                        if (vibez_buy_choice == 1) {
                            printf("\t-------------------------------------------------------------------------------------------------------");
                            printf("\n\n\t1) Main Account");
                            printf("\n\t2) Mobile Money");
                            
                            printf("\n\n\tEnter option ");
                            scanf("%d", &payment_choice);

                            if (payment_choice == 1) {
                                if (talk_time_bal >= 15) {
                                    talk_time_bal -= 15;
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tDear customer, you have successfully subscribed to K15 - 2.5GB+WTFI for 7Days.");
                                    printf("\n\tYour account balance is K%.2lf\n", talk_time_bal);
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                }
                                else {
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tYou cannot buy offer/package due to insufficient funds in your account\n");
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                }
                                
                            } 
                            
                            else if (payment_choice == 2) {
                                printf("\t-------------------------------------------------------------------------------------------------------");
                                printf("\n\n\tPlease input your Mobile Money PIN: ");
                                scanf("%d", &mobile_money_pin_prompt);

                                if ((mobile_money_pin_prompt == mobile_money_pin) && (mobile_money_bal >= 15)) {
                                        mobile_money_bal -= 15;
                                        printf("\t-------------------------------------------------------------------------------------------------------");
                                        printf("\n\n\tDear customer, you have successfully subscribed to K15 - 2.5GB+WTFI for 7Days");
                                        printf("\n\tYour mobile money account balance is K%.2lf\n", mobile_money_bal);
                                        printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                        break;      
                                } 

                                else if ((mobile_money_pin_prompt == mobile_money_pin) && (mobile_money_bal < 15)) {
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tYou cannot buy offer/package due to insufficient funds in your account\n");
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                }
                                
                                else if (mobile_money_pin_prompt != mobile_money_pin) {
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tThe user name or PIN entered is wrong.\n");
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                    
                                }

                                else {
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tInvalid Input\n");
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                }
                                
                            }

                            else {
                                printf("\t-------------------------------------------------------------------------------------------------------");
                                printf("\n\n\tInvalid Input\n");
                                printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                break;
                            }

                        } 
                        
                        else if (vibez_buy_choice == 2) {
                            printf("\t-------------------------------------------------------------------------------------------------------");
                            printf("\n\n\tSubscription Cancelled\n");
                            printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                            break;
                        }

                        else { 
                            printf("\n\n\tInvalid input\n");
                            printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                            break;
                        }
                    }

                    else if (vibez_main == 3) {
                        printf("\t-------------------------------------------------------------------------------------------------------");
                        printf("\n\n\tAre you sure you want to subscribe to K25 - 6GB+WTFI for 7Days?");
                        printf("\n\t1) Yes");
                        printf("\n\t2) No");

                        printf("\n\n\tEnter option ");
                        scanf("%d", &vibez_buy_choice);

                        if (vibez_buy_choice == 1) {
                            printf("\t-------------------------------------------------------------------------------------------------------");
                            printf("\n\n\t1) Main Account");
                            printf("\n\t2) Mobile Money");
                            
                            printf("\n\n\tEnter option ");
                            scanf("%d", &payment_choice);

                            if (payment_choice == 1) {
                                if (talk_time_bal >= 25) {
                                    talk_time_bal -= 25;
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tDear customer, you have successfully subscribed to K25 - 6GB+WTFI for 7Days.");
                                    printf("\n\tYour account balance is K%.2lf\n", talk_time_bal);
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                }
                                else {
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tYou cannot buy offer/package due to insufficient funds in your account\n");
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                }
                                
                            } 
                            
                            else if (payment_choice == 2) {
                                printf("\t-------------------------------------------------------------------------------------------------------");
                                printf("\n\n\tPlease input your Mobile Money PIN: ");
                                scanf("%d", &mobile_money_pin_prompt);

                                if ((mobile_money_pin_prompt == mobile_money_pin) && (mobile_money_bal >= 25)) {
                                        mobile_money_bal -= 25;
                                        printf("\t-------------------------------------------------------------------------------------------------------");
                                        printf("\n\n\tDear customer, you have successfully subscribed to K25 - 6GB+WTFI for 7Days.");
                                        printf("\n\tYour mobile money account balance is K%.2lf\n", mobile_money_bal);
                                        printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                        break;      
                                } 

                                else if ((mobile_money_pin_prompt == mobile_money_pin) && (mobile_money_bal < 25)) {
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tYou cannot buy offer/package due to insufficient funds in your account\n");
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                }
                                
                                else if (mobile_money_pin_prompt != mobile_money_pin) {
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tThe user name or PIN entered is wrong.\n");
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                }

                                else {
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tInvalid Input\n");
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                }
                                
                            }

                            else {
                                printf("\t-------------------------------------------------------------------------------------------------------");
                                printf("\n\n\tInvalid Input\n");
                                printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                break;
                            }

                        } 
                        
                        else if (vibez_buy_choice == 2) {
                            printf("\t-------------------------------------------------------------------------------------------------------");
                            printf("\n\n\tSubscription Cancelled\n");
                            printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                            break;
                        }

                        else { 
                            printf("\n\n\tInvalid input\n");
                            printf("\t-------------------------------------------------------------------------------------------------------\n");
                            break;
                        }
                    }

                    else if (vibez_main == 4) {
                        printf("\t-------------------------------------------------------------------------------------------------------");
                        printf("\n\n\tAre you sure you want to subscribe to K110 - 15GB+WTFI for 30Days?");
                        printf("\n\t1) Yes");
                        printf("\n\t2) No");

                        printf("\n\n\tEnter option ");
                        scanf("%d", &vibez_buy_choice);

                        if (vibez_buy_choice == 1) {
                            printf("\t-------------------------------------------------------------------------------------------------------");
                            printf("\n\n\t1) Main Account");
                            printf("\n\t2) Mobile Money");
                            
                            printf("\n\n\tEnter option ");
                            scanf("%d", &payment_choice);

                            if (payment_choice == 1) {
                                if (talk_time_bal >= 110) {
                                    talk_time_bal -= 110;
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tDear customer, you have successfully subscribed to K110 - 15GB+WTFI for 30Days.");
                                    printf("\n\tYour account balance is K%.2lf\n", talk_time_bal);
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                }
                                else {
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tYou cannot buy offer/package due to insufficient funds in your account\n");
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                }
                                
                            } 
                            
                            else if (payment_choice == 2) {
                                printf("\t-------------------------------------------------------------------------------------------------------");
                                printf("\n\n\tPlease input your Mobile Money PIN: ");
                                scanf("%d", &mobile_money_pin_prompt);

                                if ((mobile_money_pin_prompt == mobile_money_pin) && (mobile_money_bal >= 110)) {
                                        mobile_money_bal -= 110;
                                        printf("\t-------------------------------------------------------------------------------------------------------");
                                        printf("\n\n\tDear customer, you have successfully subscribed to K110 - 15GB+WTFI for 30Days.");
                                        printf("\n\tYour mobile money account balance is K%.2lf\n", mobile_money_bal);
                                        printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                        break;      
                                } 

                                else if ((mobile_money_pin_prompt == mobile_money_pin) && (mobile_money_bal < 110)) {
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tYou cannot buy offer/package due to insufficient funds in your account\n");
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                }
                                
                                else if (mobile_money_pin_prompt != mobile_money_pin) {
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tThe user name or PIN entered is wrong.\n");
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                    
                                }

                                else {
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tInvalid Input\n");
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                }
                                
                            }

                            else {
                                printf("\t-------------------------------------------------------------------------------------------------------");
                                printf("\n\n\tInvalid Input\n");
                                printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                break;
                            }

                        } 
                        
                        else if (vibez_buy_choice == 2) {
                            printf("\t-------------------------------------------------------------------------------------------------------");
                            printf("\n\n\tSubscription Cancelled\n");
                            printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                            break;
                        }

                        else { 
                            printf("\n\n\tInvalid input\n");
                            printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                            break;
                        }
                    }

                    else if (vibez_main == 5) {
                        printf("\t-------------------------------------------------------------------------------------------------------");
                        printf("\n\n\tAre you sure you want to subscribe to K5 - 30Mins, 35sms, 120mb?");
                        printf("\n\t1) Yes");
                        printf("\n\t2) No");

                        printf("\n\n\tEnter option ");
                        scanf("%d", &vibez_buy_choice);

                        if (vibez_buy_choice == 1) {
                            printf("\t-------------------------------------------------------------------------------------------------------");
                            printf("\n\n\t1) Main Account");
                            printf("\n\t2) Mobile Money");
                            
                            printf("\n\n\tEnter option ");
                            scanf("%d", &payment_choice);

                            if (payment_choice == 1) {
                                if (talk_time_bal >= 5) {
                                    talk_time_bal -= 5;
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tDear customer, you have successfully subscribed to K5 - 30Mins, 35sms, 120mb.");
                                    printf("\n\tYour account balance is K%.2lf\n", talk_time_bal);
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                }
                                else {
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tYou cannot buy offer/package due to insufficient funds in your account\n");
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                }
                                
                            } 
                            
                            else if (payment_choice == 2) {
                                printf("\t-------------------------------------------------------------------------------------------------------");
                                printf("\n\n\tPlease input your Mobile Money PIN: ");
                                scanf("%d", &mobile_money_pin_prompt);

                                if ((mobile_money_pin_prompt == mobile_money_pin) && (mobile_money_bal >= 5)) {
                                        mobile_money_bal -= 5;
                                        printf("\t-------------------------------------------------------------------------------------------------------");
                                        printf("\n\n\tDear customer, you have successfully subscribed to K5 - 30Mins, 35sms, 120mb.");
                                        printf("\n\tYour mobile money account balance is K%.2lf\n", mobile_money_bal);
                                        printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                        break;      
                                } 

                                else if ((mobile_money_pin_prompt == mobile_money_pin) && (mobile_money_bal < 5)) {
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tYou cannot buy offer/package due to insufficient funds in your account\n");
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                }
                                
                                else if (mobile_money_pin_prompt != mobile_money_pin) {
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tThe user name or PIN entered is wrong.\n");
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                    
                                }

                                else {
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tInvalid Input\n");
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                }
                                
                            }

                            else {
                                printf("\t-------------------------------------------------------------------------------------------------------");
                                printf("\n\n\tInvalid Input\n");
                                printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                break;
                            }

                        } 
                        
                        else if (vibez_buy_choice == 2) {
                            printf("\t-------------------------------------------------------------------------------------------------------");
                            printf("\n\n\tSubscription Cancelled\n");
                            printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                            break;
                        }

                        else { 
                            printf("\n\n\tInvalid input\n");
                            printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                            break;
                        }
                    }

                    else if (vibez_main == 6) {
                        printf("\t-------------------------------------------------------------------------------------------------------");
                        printf("\n\n\tAre you sure you want to subscribe to K10 - 65Mins, 80sms, 220mb?");
                        printf("\n\t1) Yes");
                        printf("\n\t2) No");

                        printf("\n\n\tEnter option ");
                        scanf("%d", &vibez_buy_choice);

                        if (vibez_buy_choice == 1) {
                            printf("\t-------------------------------------------------------------------------------------------------------");
                            printf("\n\n\t1) Main Account");
                            printf("\n\t2) Mobile Money");
                            
                            printf("\n\n\tEnter option ");
                            scanf("%d", &payment_choice);

                            if (payment_choice == 1) {
                                if (talk_time_bal >= 10) {
                                    talk_time_bal -= 10;
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tDear customer, you have successfully subscribed to K10 - 65Mins, 80sms, 220mb.");
                                    printf("\n\tYour account balance is K%.2lf\n", talk_time_bal);
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                }
                                else {
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tYou cannot buy offer/package due to insufficient funds in your account\n");
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                }
                                
                            } 
                            
                            else if (payment_choice == 2) {
                                printf("\t-------------------------------------------------------------------------------------------------------");
                                printf("\n\n\tPlease input your Mobile Money PIN: ");
                                scanf("%d", &mobile_money_pin_prompt);

                                if ((mobile_money_pin_prompt == mobile_money_pin) && (mobile_money_bal >= 10)) {
                                        mobile_money_bal -= 10;
                                        printf("\t-------------------------------------------------------------------------------------------------------");
                                        printf("\n\n\tDear customer, you have successfully subscribed to K10 - 65Mins, 80sms, 220mb.");
                                        printf("\n\tYour mobile money account balance is K%.2lf\n", mobile_money_bal);
                                        printf("\t-------------------------------------------------------------------------------------------------------\n\n"); 
                                        break;     
                                } 

                                else if ((mobile_money_pin_prompt == mobile_money_pin) && (mobile_money_bal < 10)) {
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tYou cannot buy offer/package due to insufficient funds in your account\n");
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                }
                                
                                else if (mobile_money_pin_prompt != mobile_money_pin) {
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tThe user name or PIN entered is wrong.\n");
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                }

                                else {
                                    printf("\t-------------------------------------------------------------------------------------------------------");
                                    printf("\n\n\tInvalid Input\n");
                                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                }
                                
                            }

                            else {
                                printf("\t-------------------------------------------------------------------------------------------------------");
                                printf("\n\n\tInvalid Input\n");
                                printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                                break;
                            }

                        } 
                        
                        else if (vibez_buy_choice == 2) {
                            printf("\t-------------------------------------------------------------------------------------------------------");
                            printf("\n\n\tSubscription Cancelled\n");
                            printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                            break;
                        }

                        else { 
                            printf("\n\n\tInvalid input\n");
                            printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                            break;
                        }
                    }

                    // This 'else if' branch will take the user to the main menu
                    else if (vibez_main == 00) {
                        // We increase the value of the 'back' variable so that the we can get back to the main menu 
                        back += 1;
                        continue;
                    }

                    else {
                        printf("\n\n\tInvalid input\n");
                        printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                        break;
                    }
                
                case 2:
                    printf("\t---------------------------------------------------------------------------------------");
                    printf("\n\n\tCheza Offers:");
                    printf("\n\t1. Supa Cheza");
                    printf("\n\t2. Freedom-Voice and Data");

                    printf("\n\n\tEnter option ");
                    scanf("%d", &supa_cheza_main);


                    
                case 3:
                    printf("Ni Yathu Offers\n\n");
                    printf("1)Daily Offers\n");
                    printf("2)Weekly Offers\n");
                    printf("3)Monthly Offers\n");
                    printf("4)Ni Yathu Data\n");
                    printf("choose an Option ");
                    scanf("%i", &slt);
                    switch(slt){
                    case 1:
                        printf("1)K2-13mins, 120sms\n");
                        printf("2)K5-35mins, 250sms, 40mb\n");
                        printf("3)K10-75mins, 250sms 30mb\n");
                        printf("choose an Option ");
                        scanf("%i", &frd);
                    if(frd == 1){
                            printf("Please select payment method\n");
                            printf("1)Main Account\n");
                            printf("2)Mobile money\n");
                            printf("choose method of Payment ");
                            scanf("%i", &yees);
                        
                    if(yees == 1){
                            printf("You have successfully purchased a k2 Freedom Data Pack");
                    }
                    else if(yees == 2){
                            printf("you are about to buy k2 Freedom Data Pack enter pin to continue ");
                            scanf("%i", &pin);
                            
                            printf(" you have successfully purchased a K2 Freedom Data Pack");
                    }
                    }
                    else if(frd == 2){
                                printf("Please select payment method\n");
                                printf("1)Main Account\n");
                                printf("2)Mobile money\n");
                                printf("choose method of Payment ");
                                scanf("%i", &yees);
                                
                    if(yees == 1){
                            printf("You have successfully purchased a K5 Freedom Data Pack");
                    }
                    else if(yees == 2){
                            printf("you\'re about to buy K5 Freedom Data Pack enter pin to continue ");
                            scanf("%i", &pin);
                            
                            printf(" you have successfully purchased a K5 Freedom Data Pack");
                    }
                    }
                    if(frd == 3){
                            printf("Please select payment method\n");
                            printf("1)Main Account\n");
                            printf("2)Mobile money\n");
                            printf("choose method of Payment ");
                            scanf("%i", &yees);
                        
                    if(yees == 1){
                            printf("You have successfully purchased a K10 Freedom Data Pack");
                    }
                    else if(yees == 2){
                            printf("you\'re about to buy K10 Freedom Data Pack enter pin to continue ");
                            scanf("%i", &pin);
                            
                            printf(" you have successfully purchased a K10 Freedom Data Pack");
                    }
                    }
                    break;
                    case 2:
                        printf("1)K5-35mins, 120sms, 20mb\n");
                        printf("2)K10-70mins, 220sms, 80mb\n");
                        printf("3)K20-150mins, 250sms 100mb\n");
                        printf("4)K30-220mins, 400sms, 150mb\n");
                        printf("5)K50-350mins, 800sms, 400mb\n");
                        printf("choose an Option ");
                        scanf("%i", &frd);
                    
                    if(frd == 1){
                            printf("Please select payment method\n");
                            printf("1)Main Account\n");
                            printf("2)Mobile money\n");
                            printf("choose method of Payment ");
                            scanf("%i", &yees);
                        
                    if(yees == 1){
                            printf("You have successfully purchased a k5 Voice Data Pack");
                    }
                    else if(yees == 2){
                            printf("you\'re about to buy k5 Voice Data Pack enter pin to continue\t");
                            scanf("%i", &pin);
                            
                            printf(" you have successfully purchased a K5 Voice Data Pack");
                        }
                    }
                    else if(frd == 2){
                                printf("Please select payment method\n");
                                printf("1)Main Account\n");
                                printf("2)Mobile money\n");
                                printf("choose method of Payment ");
                                scanf("%i", &yees);
                    
                    if(yees == 1){
                            printf("You have successfully purchased a K10 Voice Data Pack");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy K10 Voice Data Pack enter pin to continue ");
                                scanf("%i", &pin);
                                
                                printf(" you have successfully purchased a K10 Voice Data Pack");
                    }
                    }
                    if(frd == 3){
                            printf("Please select payment method\n");
                            printf("1)Main Account\n");
                            printf("2)Mobile money\n");
                            printf("choose method of Payment ");
                            scanf("%i", &yees);
                    
                    if(yees == 1){
                            printf("You have successfully purchased a K20 Voice Data Pack");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy K20 Voice Data Pack enter pin to continue ");
                                scanf("%i", &pin);
                                
                                printf(" you have successfully purchased a K20 Voice Data Pack");
                    }
                    }
                    else if(frd == 4){
                            printf("Please select payment method\n");
                            printf("1)Main Account\n");
                            printf("2)Mobile money\n");
                            printf("choose method of Payment ");
                            scanf("%i", &yees);
                    
                    if(yees == 1){
                            printf("You have successfully purchased a K30 Voice Data Pack");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy K30 Voice Data Pack enter pin to continue ");
                                scanf("%i", &pin);
                        
                                printf(" you have successfully purchased a K30 Voice Data Pack");
                    }
                    }
                    if(frd == 5){
                            printf("Please select payment method\n");
                            printf("1)Main Account\n");
                            printf("2)Mobile money\n");
                            printf("choose method of Payment ");
                            scanf("%i", &yees);
                    
                    if(yees == 1){
                            printf("You have successfully purchased a K50 Voice Data Pack");
                    }
                    else if(yees == 2){
                            printf("you\'re about to buy K50 Voice Data Pack enter pin to continue ");
                            scanf("%i", &pin);
                            
                            printf(" you have successfully purchased a K50 Voice Data Pack");
                    }
                    }
                    break;
                    case 3:
                        printf("1)K2-13mins, 120sms\n");
                        printf("2)K5-35mins, 250sms, 40mb\n");
                        printf("3)K10-75mins, 250sms 30mb\n");
                        printf("choose an Option ");
                        scanf("%i", &frd);
                    
                    if(frd == 1){
                            printf("Please select payment method\n");
                            printf("1)Main Account\n");
                            printf("2)Mobile money\n");
                            printf("choose method of Payment ");
                            scanf("%i", &yees);
                        
                    if(yees == 1){
                            printf("You have successfully purchased a k5 Voice Data Pack");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy k5 Voice Data Pack enter pin to continue\t");
                                scanf("%i", &pin);
                                
                                printf(" you have successfully purchased a K5 Voice Data Pack");
                    }
                    }
                    else if(frd == 2){
                            printf("Please select payment method\n");
                            printf("1)Main Account\n");
                            printf("2)Mobile money\n");
                            printf("choose method of Payment ");
                            scanf("%i", &yees);
                    
                    if(yees == 1){
                            printf("You have successfully purchased a K10 Voice Data Pack");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy K10 Voice Data Pack enter pin to continue ");
                                scanf("%i", &pin);
                                
                                printf(" you have successfully purchased a K10 Voice Data Pack");
                    }
                    }
                    break;
                    case 4:
                        printf("1)K5-1GB, 3Days\n");
                        printf("2)K15-2GB, 7Days\n");
                        printf("3)K25-5GB, 7Days \n");
                        printf("4)K60-11GB, 7Days\n");
                        printf("choose an Option ");
                        scanf("%i", &frd);
                    
                    if(frd == 1){
                            printf("Please select payment method\n");
                            printf("1)Main Account\n");
                            printf("2)Mobile money\n");
                            printf("choose method of Payment ");
                            scanf("%i", &yees);
                            
                    if(yees == 1){
                            printf("You have successfully purchased a k5 Data Pack");
                    }
                    else if(yees == 2){
                            printf("you\'re about to buy k5 Voice Data Pack enter pin to continue\t");
                            scanf("%i", &pin);
                            
                            printf(" you have successfully purchased a K5 Data Pack");
                    }
                    }
                    else if(frd == 2){
                                printf("Please select payment method\n");
                                printf("1)Main Account\n");
                                printf("2)Mobile money\n");
                                printf("choose method of Payment ");
                                scanf("%i", &yees);
                        
                    if(yees == 1){
                            printf("You have successfully purchased a K15 Voice Data Pack");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy K15 Voice Data Pack enter pin to continue ");
                                scanf("%i", &pin);
                                
                                printf(" you have successfully purchased a K15 Voice Data Pack");
                    }
                    }else if(frd == 3){
                                printf("Please select payment method\n");
                                printf("1)Main Account\n");
                                printf("2)Mobile money\n");
                                printf("choose method of Payment ");
                                scanf("%i", &yees);
                    
                    if(yees == 1){
                            printf("You have successfully purchased a K25 Voice Data Pack");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy K25 Voice Data Pack enter pin to continue ");
                                scanf("%i", &pin);
                                
                                printf(" you have successfully purchased a K25 Voice Data Pack");
                    }
                    }
                    else if(frd == 4){
                                printf("Please select payment method\n");
                                printf("1)Main Account\n");
                                printf("2)Mobile money\n");
                                printf("choose method of Payment ");
                                scanf("%i", &yees);
                    
                    if(yees == 1){
                            printf("You have successfully purchased a K60 Voice Data Pack");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy K60 Voice Data Pack enter pin to continue ");
                                scanf("%i", &pin);
                                
                                printf(" you have successfully purchased a K60 Voice Data Pack");
                    }
                    }
                    break;
                    }//
                    break;
                case 4:
                        printf("All-net Freedom Offers\n\n");
                        printf("1)Freedom Offers\n");
                        printf("2)All Network Offers\n");
                        printf("3)Buy4Other_Mins\n");
                        printf("chose an option ");
                        scanf("%i", &frd);
                    
                    if(frd == 1){
                            printf("1)Daily Offers\n");
                            printf("2)Weekly Offers\n");
                            printf("3)Monthly Offers\n");
                            printf("4)Freedom Data\n");
                            printf("chose an option ");
                            scanf("%i", &frd1);
                    if(frd1 == 1){
                            printf("Freedom Offers Daily\n");
                            printf("1)K3-15mins, 15sms, 15mb\n");
                            printf("2)K5-28mins, 30sms,30mb\n");
                            printf("chose option");
                            scanf("%i", &opt2);
                    
                    if(opt2 == 1){
                            printf("Please select payment method\n");
                            printf("1)Main Account\n");
                            printf("2)Mobile money\n");
                            printf("Chose method of Payment ");
                            scanf("%i", &yees);
                    
                    if(yees == 1){
                            printf("You have successfully purchased a k3 Freedom Data Pack");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy k3 Freedom Data Pack enter pin to continue ");
                                scanf("%i", &pin);
                                
                                printf(" you have successfully purchased a K3 Freedom Data Pack");}
                            }
                    else if(opt2 == 2){
                                printf("Please select payment method\n");
                                printf("1)Main Account\n");
                                printf("2)Mobile money\n");
                                printf("Chose method of Payment ");
                                scanf("%i", &yees);
                    
                    if(yees == 1){
                            printf("You have successfully purchased a K5 Freedom Data Pack");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy K5 Freedom Data Pack enter pin to continue ");
                                scanf("%i", &pin);
                                
                                printf(" you have successfully purchased a K5 Freedom Data Data");}
                    }
                    }
                    else if(frd1 == 2){
                                printf("Freedom Offers Weekly\n");
                                printf("1)K5-20mins, 50sms, 50mb\n");
                                printf("2)K10-55mins, 60sms,60mb\n");
                                printf("3)K15-100mins, 100sms,100mb\n");
                                printf("chose option ");
                                scanf("%i", &opt2);
                                
                    if(opt2 == 1){
                            printf("Please select payment method\n");
                            printf("1)Main Account\n");
                            printf("2)Mobile money\n");
                            printf("Chose method of Payment ");
                            scanf("%i", &yees);
                    
                    if(yees == 1){
                            printf("You have successfully purchased a K5 Freedom Data Pack");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy K5 Freedom Data Pack enter pin to continue ");
                                scanf("%i", &pin);
                                
                                printf(" you have successfully purchased a K5 Freedom Data Pack");}
                    }
                    else if(opt2 == 2){
                                printf("Please select payment method\n");
                                printf("1)Main Account\n");
                                printf("2)Mobile money\n");
                                printf("Chose method of Payment ");
                                scanf("%i", &yees);
                            
                    if(yees == 1){
                            printf("You have successfully purchased a K10 Freedom Data Pack");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy K10 Freedom Data Pack enter pin to continue ");
                                scanf("%i", &pin);
                                
                                printf(" you have successfully purchased a K10 Freedom Data Data");}
                            }
                    else if(opt2 == 3){
                                printf("Please select payment method\n");
                                printf("1)Main Account\n");
                                printf("2)Mobile money\n");
                                printf("Chose method of Payment ");
                                scanf("%i", &yees);
                    
                    if(yees == 1){
                            printf("You have successfully purchased a K15 Freedom Data Pack");
                        }
                    else if(yees == 2){
                                printf("you\'re about to buy K15 Freedom Data Pack enter pin to continue ");
                                scanf("%i", &pin);
                                
                                printf(" you have successfully purchased a K15 Freedom Data Data");}
                    }
                    }
                    else if(frd1 == 3){
                                printf("Freedom Offers Monthly\n");
                                printf("1)K50-200mins, 100sms, 100mb\n");
                                printf("2)K100-450ins, 150sms,150mb\n");
                                printf("3)K200-500mins, 200sms,15GB\n");
                                printf("chose option ");
                                scanf("%i", &opt2);
                    
                    if(opt2 == 1){
                            printf("Please select payment method\n");
                            printf("1)Main Account\n");
                            printf("2)Mobile money\n");
                            printf("Chose method of Payment ");
                            scanf("%i", &yees);
                    
                    if(yees == 1){
                            printf("You have successfully purchased a K50 Freedom Data Pack");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy K50 Freedom Data Pack enter pin to continue ");
                                scanf("%i", &pin);
                                
                                printf(" you have successfully purchased a K50 Freedom Data Pack");}
                            }
                    else if(opt2 == 2){
                                printf("Please select payment method\n");
                                printf("1)Main Account\n");
                                printf("2)Mobile money\n");
                                printf("Chose method of Payment ");
                                scanf("%i", &yees);
                    
                    if(yees == 1){
                            printf("You have successfully purchased a K100 Freedom Data Pack");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy K100 Freedom Data Pack enter pin to continue ");
                                scanf("%i", &pin);
                                
                                printf(" you have successfully purchased a K100 Freedom Data ");}
                        }
                    else if(opt2 == 3){
                                printf("Please select payment method\n");
                                printf("1)Main Account\n");
                                printf("2)Mobile money\n");
                                printf("Chose Payment Methhod ");
                                scanf("%i", &yees);
                    
                    if(yees == 1){
                            printf("You have successfully purchased a K200 Freedom Data Pack");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy K200 Freedom Data Pack enter pin to continue ");
                                scanf("%i", &pin);
                            
                                printf(" you have successfully purchased a K200 Freedom Data");}
                            }
                    }
                    else if(frd1 == 4){
                                printf("Freedom Data\n");
                                printf("1)K5-1GB, 3Days\n");
                                printf("2)K15-2GB, 7Days\n");
                                printf("3)K25-5GB, 7Days\n");
                                printf("chose option ");
                                scanf("%i", &opt2);
                    
                    if(opt2 == 1){
                            printf("Please select payment method\n");
                            printf("1)Main Account\n");
                            printf("2)Mobile money\n");
                            printf("Chose Payment Methhod ");
                            scanf("%i", &yees);
                    
                    if(yees == 1){
                            printf("You have successfully purchased a K5 Data Pack");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy K5 Data Pack enter pin to continue ");
                                scanf("%i", &pin);
                            
                                printf(" you have successfully purchased a K5 Data Pack");}
                            }
                    else if(opt2 == 2){
                                printf("Please select payment method\n");
                                printf("1)Main Account\n");
                                printf("2)Mobile money\n");
                                printf("Chose Payment Methhod ");
                                scanf("%i", &yees);
                            
                    if(yees == 1){
                            printf("You have successfully purchased a K15 Data Pack");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy K15 Data Pack enter pin to continue ");
                                scanf("%i", &pin);
                            
                                printf(" you have successfully purchased a K15 Data Data");}
                    }
                    else if(opt2 == 3){
                                printf("Please select payment method\n");
                                printf("1)Main Account\n");
                                printf("2)Mobile money\n");
                                printf("Chose Payment Methhod ");
                                scanf("%i", &yees);
                    
                    if(yees == 1){
                            printf("You have successfully purchased a K25 Data Pack");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy K25 Data Pack enter pin to continue ");
                                scanf("%i", &pin);
                            
                                printf(" you have successfully purchased a K25 Data Data");}
                            }
                    }
                    }
                    if(frd == 2){
                            printf("1)Daily Offers\n");
                            printf("2)Weekly Offers\n");
                            printf("3)Monthly Offers\n");
                            printf("4)Freedom Data\n");
                            printf("chose an option ");
                            scanf("%i", &frd1);
                    if(frd1 == 1){
                            printf("Freedom Offers Daily\n");
                            printf("1)K3-15mins, 15sms, 15mb\n");
                            printf("2)K5-25mins, 100sms,15mb\n");
                            printf("3)K10-50mins, 100sms,20mb\n");
                            printf("chose option");
                            scanf("%i", &opt2);
                    
                    if(opt2 == 1){
                            printf("Please select payment method\n");
                            printf("1)Main Account\n");
                            printf("2)Mobile money\n");
                            printf("Chose Payment Methhod ");
                            scanf("%i", &yees);
                    
                    if(yees == 1){
                            printf("You have successfully purchased a k3 Freedom Data Pack");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy k3 Freedom Data Pack enter pin to continue ");
                                scanf("%i", &pin);
                                
                                printf(" you have successfully purchased a K3 Freedom Data Pack");}
                            }
                    else if(opt2 == 2){
                                printf("Please select payment method\n");
                                printf("1)Main Account\n");
                                printf("2)Mobile money\n");
                                printf("Chose Payment Methhod ");
                                scanf("%i", &yees);
                            
                    if(yees == 1){
                            printf("You have successfully purchased a K5 Data Pack");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy K5 Data Pack enter pin to continue");
                                scanf("%i", &pin);
                            
                                printf(" you have successfully purchased a K5 Data Data");}
                    }
                    else if(opt2 == 3){
                                printf("Please select payment method\n");
                                printf("1)Main Account\n");
                                printf("2)Mobile money\n");
                                printf("Chose Payment Methhod ");
                                scanf("%i", &yees);
                    
                    if(yees == 1){
                            printf("You have successfully purchased a K10 Data Pack");
                    }
                    else if(yees == 2){
                                printf("you are about to buy K10 Data Pack enter pin to continue ");
                                scanf("%i", &pin);
                            
                                printf(" you have successfully purchased a K10 Freedom Data Data");}
                            }
                    }
                    else if(frd1 == 2){
                                printf("Freedom Offers Daily\n");
                                printf("1)K3-15mins, 15sms, 15mb\n");
                                printf("2)K5-25mins, 100sms,15mb\n");
                                printf("3)K10-50mins, 100sms,20mb\n");
                                printf("chose option");
                                scanf("%i", &opt2);
                    
                    if(opt2 == 1){
                            printf("Please select payment method\n");
                            printf("1)Main Account\n");
                            printf("2)Mobile money\n");
                            printf("Chose method of Payment ");
                            scanf("%i", &yees);
                    
                    if(yees == 1){
                            printf("You have successfully purchased a k3 Freedom Data Pack");
                    }   
                    else if(yees == 2){
                                printf("you\'re about to buy k3 Freedom Data Pack enter pin to continue ");
                                scanf("%i", &pin);
                            
                                printf(" you have successfully purchased a K3 Freedom Data Pack");}
                    }
                    else if(opt2 == 2){
                                printf("Please select payment method\n");
                                printf("1)Main Account\n");
                                printf("2)Mobile money\n");
                                printf("Chose method of Payment ");
                                scanf("%i", &yees);
                    
                    if(yees == 1){
                            printf("You have successfully purchased a K5 Data Pack");
                    }
                        else if(yees == 2){
                                printf("you\'re about to buy K5 Data Pack enter pin to continue ");
                                scanf("%i", &pin);
                            
                                printf(" you have successfully purchased a K5 Data Data");}
                    }
                    else if(opt2 == 3){
                                printf("Please select payment method\n");
                                printf("1)Main Account\n");
                                printf("2)Mobile money\n");
                                printf("Chose method of Payment ");
                                scanf("%i", &yees);
                    
                    if(yees == 1){
                            printf("You have successfully purchased a K10 Data Pack");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy K10 Data Pack enter pin to continue ");
                                scanf("%i", &pin);
                                
                                printf(" you have successfully purchased a K10 Freedom Data Data");}
                    }
                    }
                    }
                    break;
                
                case 5:
                        printf("1)Check Balance\n");
                        printf("2)Specify Account\n");
                        printf("chose an option\t");
                        scanf("%i", &bal);
                    
                if(bal == 1){
                        printf("your balance is 0.\nyour weekly All-Net minutes is 0min valid until 2023-10-20.your weekly data is 0GB valid until 2023-10-20\nyour weekly sms is 50\n");
                        }
                else if(bal == 2)
                {
                            printf("Enter number to check for them\nnumber(26095********)");
                    }

                    break;
                case 6:
                    printf("Woza Weekend\n");
                    printf("1) K3-Woza Unlimited Voice\n");
                    printf("2) K8- 3GB Woza Data\n");
                    printf("Chose an Option ");
                    scanf("%i", &opt2);
                    
                if(opt2 == 1){
                        printf("Please select payment method\n");
                        printf("1)Main Account\n");
                        printf("2)Mobile money\n");
                        printf("Chose method of Payment ");
                        scanf("%i", &yees );
                    
                if(yees == 1){
                        printf("You have successfully purchased a K3 Woza Data Pack");
                }
                else if(yees == 2){
                            printf("you\'re about to buy K3 Woza Data Pack enter pin to continue ");
                            scanf("%i", &pin);
                            
                        printf(" you have successfully purchased a K3 Woza Data Data");}
                }
                else if(opt2 == 2){
                            printf("Please select payment method\n");
                            printf("1)Main Account\n");
                            printf("2)Mobile money\n");
                            printf("Chose method of Payment ");
                            scanf("%i", &yees );
                
                if(yees == 1){
                        printf("You have successfully purchased a K8 woza Data Pack");
                }
                else if(yees == 2){
                            printf("you\'re about to buy K8 woza Data Pack enter pin to continue ");
                            scanf("%i", &pin);
                            
                            printf(" you have successfully purchased a K8 Woza Freedom Data ");}
                }  

                    break;
                case 7:
                    printf("Velocity Lite\n");
                    printf("1)K100-15GB\n");
                    printf("2)K250-50GB\n");
                    printf("3)K479-100GB\n");
                    printf("4)K650-150GB\n");
                    printf("5)K800-250GB\n");
                    printf("Chose an Option\n");
                    scanf("%i", &opt2);
                    
                    if (opt2 == 1){
                        printf("Please select payment method\n");
                        printf("1)Main Account\n");
                        printf("2)Mobile money\n");
                        printf("Chose method of Payment ");
                        scanf("%i", &yees );
                        
                    if(yees == 1){
                            printf("You have successfully purchased a K100 Velocity Data Pack");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy K100 Velocity Data Pack enter pin to continue ");
                                scanf("%i", &pin);
                        
                                printf(" you have successfully purchased a K100 Velocity Data Data");}
                    }else if(opt2 == 2){
                                printf("Please select payment method\n");
                                printf("1)Main Account\n");
                                printf("2)Mobile money\n");
                                printf("Chose method of Payment ");
                                scanf("%i", &yees );
                        
                    if(yees == 1)
                        {
                            printf("You have successfully purchased a K250 Velocity Data Pack");
                        }
                    else if(yees == 2)
                    {
                                printf("you\'re about to buy K250 Velocity Data Pack enter pin to continue ");
                                scanf("%i", &pin);
                                
                                printf(" you have successfully purchased a K250 Velocity Data Data");}
                    }
                    else if(opt2 == 3){
                                printf("Please select payment method\n");
                                printf("1)Main Account\n");
                                printf("2)Mobile money\n");
                                printf("Chose method of Payment ");
                                scanf("%i", &yees );
                        
                    if(yees == 1){
                            printf("You have successfully purchased a K479 Velocity Data Pack");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy K479 Velocity Data Pack enter pin to continue ");
                                scanf("%i", &pin);
                                
                                printf(" you have successfully purchased a K479 Velocity Data Data");}
                    }
                    else if(opt2 == 4){
                                printf("Please select payment method\n");
                                printf("1)Main Account\n");
                                printf("2)Mobile money\n");
                                printf("Chose method of Payment ");
                                scanf("%i", &yees );
                        
                    if(yees == 1){
                            printf("You have successfully purchased a K650 Velocity Data Pack");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy K650 Velocity Data Pack enter pin to continue ");
                                scanf("%i", &pin);
                                
                                printf(" you have successfully purchased a K650 Velocity Data Data");}
                            }
                    else if(opt2 == 5)
                    {
                                printf("Please select payment method\n");
                                printf("2)Mobile money\n");
                                printf("Chose method of Payment ");
                                scanf("%i", &yees );
                        
                    if(yees == 1){
                            printf("You have successfully purchased a K800 Velocity Data Pack");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy K800 Velocity Data Pack enter pin to continue ");
                                scanf("%i", &pin);
                                
                                printf(" you have successfully purchased a K800 Velocity Data Data");}
                    }
                    
                    if(option == 8){
                            printf("Enter the receiving phone\n");
                            printf("number(26095********) ");
                            scanf("%i", &numb);
                        
                            printf("1)K5- 880MB-24Hours\n");
                            printf("2)K15- 2.5GB+WTFI-7Days\n");
                            printf("3)K110- 15GB+WTFI-30Days\n");
                            printf("4)K5- 30Mins,35sms,120MB\n");
                            printf("5)K10- 65Mins,80sms,220MB\n");
                            printf("Press b For Main Menu\n");
                            printf("Chose an Option ");
                            scanf("%i", &slt);
                        
                        switch(slt){
                    if (1){
                        case 1:
                            printf("Please select payment method\n");
                            printf("2)Mobile money\n");
                            printf("Chose method of Payment ");
                            scanf("%i", &yees  );}
                        
                    else if(yees == 1){
                                printf("Buy4Other was successful");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy k5 data bundle enter pin to continue\t");
                                scanf("%i", &pin);
                                
                                printf("Buy4Other was successful");}
                    break;
                    case 2:
                        printf("Please select payment method\n");
                        printf("1)Main Account\n");
                        printf("2)Mobile money\n");
                        printf("Chose method of Payment ");
                        scanf("%i", &yees );
                        
                    if(yees == 1){
                            printf("Buy4Other was successful");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy K15 data bundle enter pin to continue\t");
                                scanf("%i", &pin);
                                
                                printf("Buy4Other was successful");}
                    break;
                    case 3:
                        printf("Please select payment method\n");
                        printf("1)Main Account\n");
                        printf("2)Mobile money\n");
                        printf("Chose method of Payment ");
                        scanf("%i", &yees );
                        
                    if(yees == 1){
                            printf("Buy4Other was successful");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy K110 data bundle enter pin to continue\t");
                                scanf("%i", &pin);
                                
                                printf("Buy4Other was successful");}
                    break;
                    case 4:
                        printf("Please select payment method\n");
                        printf("1)Main Account\n");
                        printf("2)Mobile money\n");
                        printf("Chose method of Payment ");
                        scanf("%i", &yees );
                        
                    if(yees == 1){
                            printf("Buy4Other was successful");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy K5 Voice Data enter pin to continue\t");
                                scanf("%i", &pin);
                                
                                printf("Buy4Other was successful");}
                    break;
                    case 5:
                        printf("Please select payment method\n");
                        printf("1)Main Account\n");
                        printf("2)Mobile money\n");
                        printf("chose method of Payment ");
                        scanf("%i", &yees );
                        
                    if(yees == 1){
                            printf("Buy4Other was successful");
                    }
                    else if(yees == 2){
                                printf("you\'re about to buy K10 Voice Data enter pin to continue\t");
                                scanf("%i", &pin);
                                
                                printf("Buy4Other was successful");}
                    break;
                    }
                    break;
                case 8:
                    printf("Buy4Others");
                    printf("Enter the receiving phone number starting with this from of code(26095*******)\n");
                    scanf("%d", &option);
                    printf("Your transaction is in progress. Please wait!");
                    break;
                                    break;
                default:
                    printf("\n\n\tInvalid input\n");
                    printf("\t-------------------------------------------------------------------------------------------------------\n\n");
                    break;
            }
            }
        
    } 
    }

    // If the user does not enter the correct USSD Code, we display the 'invalid MMI code' message and terminate the program;
    else {
        printf("\n\n\tConnection problem or invalid MMI code.\n");
        printf("\t-------------------------------------------------------------------------------------------------------\n\n");
        }
    



 return 0;
    
}