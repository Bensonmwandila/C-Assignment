#  Get user input and handle any possible errors
try:
    user_input = int(input("\nEnter number of hours worked: "))
except:
    print("You have entered invalid input!")
    quit()

# This function calculates the user's weekly wages and displays the result to the screen
def salary():

# If the user enters a valid number of hours in a week and at least the minimum to get paid
     if user_input <= 168 and user_input > 0:

    # Calculate the base week's salary
        base_weekly_salary = 20 * 30

    # Get the overtime hours to use in the calculations, if there is any
        overtime_hours = user_input - 30

    # Calculate the week's pay
        weeks_pay = (overtime_hours * 30) + base_weekly_salary

    # Display the result
        print("Weekly Salary: $" + str(weeks_pay))

# Otherwise, we display a message to the user indicating their invalid number of hours entered   
     else:
        print("The number of hours entered is invalid. There are only 168 hours in a week")
salary()
