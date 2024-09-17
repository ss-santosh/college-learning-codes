x=int(input("enter year"))
if x%4==0:
               if x%100==0:
                              if x%400==0:
                                             print("leap year")
                              else:
                                             print("not a leap year")
               else:
                              print("leap year")
else:
               print("not a leap year")
