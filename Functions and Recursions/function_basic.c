#include<stdio.h>

void goodMorning();
void goodNight();
void goodAfternoon();
void goodEvening();

int main()
{
    int time;
    printf("Enter the current time in round of of hour format only : \n");
    scanf("%d", &time);
    
    if(time > 6 && time < 12){
        goodMorning();
    }
    else if(time > 12 && time < 16){
        goodAfternoon();
    }
    else if(time > 16 && time < 21){
        goodEvening();
    }
    else{
        goodNight();
    }

    return 0;
}

void goodMorning(){
    printf("Good Morning Sir!");
}

void goodAfternoon(){
    printf("Good Afternoon Sir!");
}

void goodEvening(){
    printf("Good Evening Sir!");
}

void goodNight(){
    printf("Good Night Sir!");
}