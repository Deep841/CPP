//greedy : job sequencing
// T(n)= O(nlogn)

#include <iostream>
#include <algorithm> 
using namespace std;

struct Job {
    int jno;    
    int profit; 
    int d;      

    Job() {}

    Job(int j, int p, int deadline) {
        jno = j;
        profit = p;
        d = deadline;
    }
};

bool compare(Job a, Job b) {
    return a.profit > b.profit;
}

void jobScheduling(Job jobs[], int n) {
    sort(jobs, jobs + n, compare);

    cout << "\nJobs sorted by profit (descending):\n";
    for (int i = 0; i < n; i++) {
        cout << "Job " << jobs[i].jno << " -> Profit: " << jobs[i].profit 
             << ", Deadline: " << jobs[i].d << endl;
    }

    int maxDeadline = 0;
    for (int i = 0; i < n; i++) {
        if (jobs[i].d > maxDeadline) {
            maxDeadline = jobs[i].d;
        }
    }

    int schedule[maxDeadline]; 
    for (int i = 0; i < maxDeadline; i++) {
        schedule[i] = -1; 
    }

    int totalProfit = 0;

    for (int i = 0; i < n; i++) {
        for (int j = jobs[i].d - 1; j >= 0; j--) {
            if (schedule[j] == -1) {  
                schedule[j] = i;      
                totalProfit += jobs[i].profit; 
                break;                
            }
        }
    }

    cout << "\nSelected Jobs (Optimal Sequence): ";
    for (int i = 0; i < maxDeadline; i++) {
        if (schedule[i] != -1) {
            cout << "Job " << jobs[schedule[i]].jno << " ";
        }
    }

    cout << "\nTotal Profit: " << totalProfit << endl;
}

int main() {
    int n;

    cout << "Enter the number of jobs: ";
    cin >> n;

    Job jobs[n];

    for (int i = 0; i < n; i++) {
        int jno, profit, d;
        cout << "Enter job number, profit, deadline for job " << i + 1 << " : ";
        cin >> jno >> profit >> d;
        jobs[i] = Job(jno, profit, d); 
    }

    jobScheduling(jobs, n);

    return 0;
}

//5: For sort function
//8: Structure to represent a Job
//9to11:
// Job number (ID)
// Profit of the job
// Deadline of the job
//13: Default constructor (not necessary but added for clarity)
//15: Parameterized constructor to initialize job properties
//22: Comparator function to sort jobs by profit in descending order
//26: Function to perform Job Scheduling using Greedy approach
//27: Step 1: Sort the jobs in descending order of profit
//29: Displaying the sorted jobs (Optional)
//35: Step 2: Find the maximum deadline among all jobs
//42: Step 3: Create an array to store the scheduled jobs (-1 means empty slot)
//42: One slot for each time unit (0 to maxDeadline-1)
//44: Initializing all slots as empty
//47: Step 4: Initialize total profit
//49: Step 5: Try to place each job in its best possible slot
//50: Try placing the job at the last possible slot before its deadline
//51 to 54 :
// If the slot is empty
// Place the job index in this slot
// Add job profit to total profit
// Move to the next job
//59: Step 6: Display the final job sequence and total profit
//72: Step 1: Taking input for number of jobs
//75: Step 2: Creating an array of job objects
//77: Step 3: Taking input for each job's details
//81: Using parameterized constructor
//84: Step 4: Performing job scheduling