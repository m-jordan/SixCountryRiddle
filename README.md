# SixCountryRiddle
A program to solve a riddle that was posed to me.

Riddle:
There are six country names that when spelled in capitals, no letters have a closed space between them.
For example, A has a closed space in the lil triangle, E does not.
Try name them.



Edit: I started learning bash and learned that was a far more efficient. 

I used this line of code to get the final answer: 
grep -v -i a anotherBiggerCountriesList.txt | grep -v -i b | grep -i -v d | grep -i -v o | grep -i -v p | grep -i -v q | grep -i -v r



Sources:
CountryList.txt - https://www.dfa.ie/travel/travel-advice/a-z-list-of-countries/
biggerCountryList.txt - https://history.state.gov/countries/all
anotherBiggerCountriesList.txt - http://www.oxfordreference.com/view/10.1093/acref/9780199580729.001.0001/acref-9780199580729?btog=chap&hide=true&pageSize=100&skipEditions=true&sort=titlesort&source=%2F10.1093%2Facref%2F9780199580729.001.0001%2Facref-9780199580729
