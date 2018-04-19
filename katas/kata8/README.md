# Kata 8: Inflight Entertainment System 

#### You've built an inflight entertainment system with on-demand movie streaming.

Users on longer flights like to start a second movie right when their first one ends, but they complain that the plane usually lands before they can see the ending. So you're building a feature for choosing two movies whose total runtimes will equal the exact flight length.

Write a function that takes an integer flight_length (in minutes) and a list of integers movie_lengths (in minutes) and returns a boolean indicating whether there are two numbers in movie_lengths whose sum equals flight_length.

When building your function:

Assume your users will watch exactly two movies
Don't make your users watch the same movie twice
Optimize for runtime over memory

### My Solution 
What I did to solve this program is iterating trough the array in a way that you get to compare the sum of ALL numbers. For this I compare each element with the followings elements in the array. If I find that the lenght of two movies is equal to the flight time I return true. A picture of my notes is in the following link: https://photos.app.goo.gl/nKXKuBXytLUECNcH3 . 
