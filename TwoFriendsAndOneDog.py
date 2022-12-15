distanceHumans = 1000   # m
velocityHumanOne = 5    # m/s
velocityHumanTwo = 6    # m/s
velocityDog = 20        # m/s
minJoinDistance = 0.70  # m
DogCount = 0            # counter Dog ( default 0 )

while ( distanceHumans >= minJoinDistance):
  #stage one ( dog run to human one )
  timeHumanOneMin = distanceHumans / ( velocityDog + velocityHumanOne )
  distanceHumans = distanceHumans - ( timeHumanOneMin * ( velocityHumanOne + velocityHumanTwo ))
  if( distanceHumans > minJoinDistance ): #check. If it's time to exit the while?
    DogCount = DogCount + 1
  #stage two ( dog run to human two )
  timeHumanTwoMin = distanceHumans / ( velocityDog + velocityHumanTwo )
  distanceHumans = distanceHumans - ( timeHumanTwoMin * ( velocityHumanOne + velocityHumanTwo ))
  if( distanceHumans > minJoinDistance ):
    DogCount = DogCount + 1
print( "The dog will run", DogCount,"times." )
