trashSch = open("TrashSch.txt","w")
date = input("When is trash day?: ")
sTime = input("What time should I go to the curb? (military time): ")

trashSch.write(date)
trashSch.write(sTime)
trashSch.close()
