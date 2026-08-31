//greedy : activity selection
//time complextity : O(nlogn)

#include<iostream>  
#include<algorithm> 
using namespace std;

struct Activity {
    int start;
    int finish;
};

bool compare(Activity a, Activity b) {
    return a.finish < b.finish; 
}

void activitySelection(Activity activities[], int n) {
    sort(activities, activities + n, compare);

    cout << "Selected Activities: \n";

    int lastFinishTime = activities[0].finish; 
    cout << "Activity (Start: " << activities[0].start << ", Finish: " << activities[0].finish << ")\n";

    for (int i = 1; i < n; i++) {
        if (activities[i].start >= lastFinishTime) {
            cout << "Activity (Start: " << activities[i].start << ", Finish: " << activities[i].finish << ")\n";
            lastFinishTime = activities[i].finish;
        }
    }
}

int main() {
    int n; 

    cout << "Enter number of activities: ";
    cin >> n;

    Activity activities[n];

    cout << "Enter start and finish time of each activity:\n";
    for (int i = 0; i < n; i++) {
        cin >> activities[i].start >> activities[i].finish;
    }

    activitySelection(activities, n);

    return 0; 
}

//4to6 :
//For input and output operations (cin, cout).
//For using the sort() function.
//To avoid writing std:: before every standard function (like cout, cin)
//8: Structure to represent an activity with start and finish time
//13: Comparator function to sort activities by their finish time
//13: This function is used to sort activities in ascending order of their finish time.
//13: a.finish < b.finish means : If activity a finishes earlier than activity b, it should come first in the sorted list
//14: this is for sorting
//17: Function to perform Activity Selection using the Greedy approach
//18: Step 1: Sort activities based on their finish time (Greedy Step)
//20: Displaying the header for selected activities
//22: Step 2: Always select the first activity after sorting
//22: Storing the finish time of the first selected activity
//25: Step 3: Iterate over the remaining activities
//26: Step 4: Check if the current activity starts after or when the last selected one finishes
//27: Step 5: If yes, select this activity
//28: Update the last selected activity's finish time
//34: Number of activities
//36: Taking user input for the number of activities
//39: Array to store all the activities
//41: Taking input for start and finish time of each activity
//46: Step 6: Performing activity selection using the Greedy approach
