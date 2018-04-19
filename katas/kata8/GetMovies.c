#include <stdlib.h>
#include <stdio.h>
//#include <string.h>

int getMovies(int flight_length, int *movie_lengths, int sizeMovieLenghts){
    for(int i = 0; i < sizeMovieLenghts - 1; i++){
        for(int j = i + 1; j < sizeMovieLenghts; j++){
            if(movie_lengths[i] + movie_lengths[j] == flight_length){
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int flight_length = 435;
    int movie_lengths[] = {150, 90, 105, 115, 235, 200, 78, 80};
    if(getMovies(flight_length, movie_lengths, (int) sizeof (movie_lengths) / sizeof(int) )){
        printf("You can watch two movies before landing :D");
    }else{
        printf("You can only watch one movie before landing :( ");
    }

}