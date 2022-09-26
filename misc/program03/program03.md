# Program 3 - F1 Racing
In this program you will use your knowledge of streams and vectors to aggregate data for a pair of F1 races. F1 is an international racing competition for open-wheel single-seater formula racing cars - the fastest regulated road racing cars in the world, topping out at speeds of over 180mph. Teams compete in several races around the world and the winner of each F1 season is determined by how well they place at each of these events.

For this program you will be using the results from 2 races to determine the F1 race leader after 2 events. 

## Input Files
For this program you are given 2 input files: `Netherlands.csv` and `Italy.csv`. Each file has information about the Grand Prix races that occurred at those locations

**Netherlands.csv**
```
Driver,Car,Car#,Time
Max Verstappen,Red Bull Racing RBPT,1,96.427
George Russell,Mercedes,63,96.834
Charles Leclerc,Ferrari,16,97.519
Lewis Hamilton,Mercedes,44,97.734
...
```

The first row of both files contains the headers for each column. Each subsequent row is information about a single driver and their overall race time in minutes. Notice that each column is separated by a `,` (comma) and each driver's info is separated by a new line `\n`.

## The Vectors
While parsing the information from each file, you will be storing all the information in two 2D vectors: `driversInfo` and `driverTimes`. Note you should NOT store the headers (first line) of each file; just the driver data.
```c++
// Stores each drivers Name, Car Name, and Car Number
vector<vector<string>> driversInfo;
// Stores each drivers Netherlands Time, Italy Time and Total Time
vector<vector<double>> driverTimes;
```
- `vector<vector<string>> driversInfo;`: Should store each driver's Name, Car Name, and Car Number
- `vector<vector<double>> driverTimes;`: Should store each driver's Netherlands Time, Italy Time and your calculated _total_ time
- You should be able to access a single driver's information and times by looking at the same index in both vectors. For instance in the example above, One would be able to access Max Verstappen's information by: 
```c++
int index = 0; // index used for Verstappen's data
driversInfo.at(index); 
driverTimes.at(index);
```
- Driver's Total Time: When building up each vector, you are responsible for calculating a drivers total time by taking the sum of both the Netherlands Grand Prix time _and_ the Italy Grand Prix time. 

## Finding the winners
Once you have read all the driver information into the 2 vectors, you will compute and output (to the console) the winners of the Netherlands Grand Prix, the Italy Grand Prix, and the combined events (total). Note the winner may be different in all three!

**Example Console Output**
```
Reading in Files...
Calculating Times...

Announcing the Winners!
Netherlands:  Max Verstappen with a time of 96.427 minutes
Italy:        Lewis Hamilton with a time of 80.27 minutes
Total:        Max Verstappen with a time of 177.447 minutes
```

## Output File
After announcing the winners, write all the data stored in both vectors from both events into a single file called `results.csv`. The output should be formatted like the following (in csv format): 

**Example Output (Note numbers may be different in your actual program)**
```
Driver,Car,Car#,Netherlands,Italy,Total
Max Verstappen,Red Bull Racing RBPT,1,96.427,81.27,177.447
George Russell,Mercedes,63,96.834,86.23,183.064
Charles Leclerc,Ferrari,16,97.519,90.000,187.519
Lewis Hamilton,Mercedes,44,97.734,80.27,178.004
```

## Grading Rubric
- Overall functionality (Correct console and file output) **40pts**
- Program is able to read in files of various sizes (i.e. # of drivers)
- Correct usage of streams **15pts**
- Program closes each file after using it **5pts**
- Correct usage of 2D Vectors **15pts**
- Functions defined and implemented in a header and source file **5pts**
- Correct Styling, Spacing, and Organization of code **10pts**

## Submission Details
All code must be compiled and run in CLion and must be submitted via GitHub by
**6:00am CST, Monday October 17, 2022**. You may submit by **6:00am, Wednesday October 19, 2022** with a 30 point deduction. 