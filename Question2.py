import math

#  Get user input and handle any possible errors
#The following function displays the instructions for the user to follow for the calculation requirements on the screen
print("-------------------------------------------------------------------------------------------------------\n")
investment_amount = float(input("Enter investment_amount: "))
print("-------------------------------------------------------------------------------------------------------\n")
annual_interest_rate = float(input("Enter Annual Interest Rate: "))
print("-------------------------------------------------------------------------------------------------------\n")
years = int(input("Enter number of years to invest: "))
print("-------------------------------------------------------------------------------------------------------\n")
total_investment = 0

#This function divids the annual interest rate by a 100 for the correct calculation.
annual_interest_rate /= 100

#this funtion shows the difference betweem the inputs and the results 
print("************************************")

if years > 0:
    # print(math.pow(1 + annual_interest_rate, 1))
    for i in range(1, years + 1):
        investment_per_year = investment_amount * math.pow(1 + annual_interest_rate, i)
        total_investment = str(round(investment_per_year, 2))
        print("Future Investment in year " + str(i) + ": K" + total_investment + "\n")
else:
    #if the user input is not a positive integer the program will desplay the error message on the screen and terminate 
    print("No investment made!")
    print("-------------------------------------------------------------------------------------------------------\n")
