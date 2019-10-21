#!/usr/bin/env python3

# Created by: Christina Ngwa
# Created on: October 2019
# This program uses a compound boolean statement


def main():
    # This function uses a compound boolean statement

    # input
    print("Will you be approved by my granny? Answer her questions to " 
          "find out.")
    print("")
    name = input("What is your first name sonny boy?: ")
    
        # process
        # output
        try:
            salary = str(input("Is your salary 100,000+? (Yes/No): "))
            looks = str(input("Do people constantly compliment you "
                              "on your looks? (Yes/No): "))
            if salary == "yes" or looks == "yes":
                print(name, ", you have my approval.")
            else:
                print("You will not see her ever again.")
        except TypeError:
                print("Letters only.")


if __name__ == "__main__":
    main()
