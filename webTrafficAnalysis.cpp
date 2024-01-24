// Question 13:

// Web traffic analysis - We have an array of say 5 cities where we are tracking our everyday
// web-site. You can put any 5 cities you like. In the future, we should be able to add more cities
// to it. Under each city create about 100 visit entries. Each visit entry will be userId (Random
// integer between 1 to 30), time of day (morning|noon|evening|night) picked randomly, and
// timeSpentMinutes. We do not need the date of the visit as these entries are for one day. Once
// the data is generated output the following
// 1. Time of day(morning|noon...) when the site has the most number of unique users
// 2. Which city uses the site most at which time of day e.g. Pune Morning 60 users
// Hint: Reduction of one array into smaller arrays

#include <bits/stdc++.h>
using namespace std;
struct webTraffic
{
    
    int userId;
    string timeOfTheDay;
    int timeSpentMinutes;
};
int main()
{
    // string s = {"morning","noon","evening","night"};
    struct webTraffic pune[100];
    struct webTraffic chennai[100];
    struct webTraffic delhi[100];
    struct webTraffic bangalore[100];
    struct webTraffic mumbai[100];
    vector<string> s = {"night", "evening", "morning", "noon"};
    for(int i=0;i<100;i++)
    {
        pune[i].userId = 1 + (rand()%30);
        pune[i].timeOfTheDay = (s[rand()%4]);
        pune[i].timeSpentMinutes = (1+(rand()%1000));
    }
    int morning = 0;
    int night = 0;
    int noon = 0;
    int evening = 0;
    for(int i =0;i<100;i++)
    {
        if(pune[i].timeOfTheDay == 'morning')
        {
            morning++;
        }
        if(pune[i].timeOfTheDay == 'evening')
        {
            evening++;
        }
        if(pune[i].timeOfTheDay == 'night')
        {
            night++;
        }
        if(pune[i].timeOfTheDay == 'noon')
        {
            noon++;
        }
    }
    cout<<max(morning,noon,night,evening);
    return 0;

}
