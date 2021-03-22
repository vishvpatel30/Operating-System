# Operating-System
Basic Scheduling Algorithm


1. FCFS Algorithm
2. SSTF Algorithm
3. SCAN Algorithm
4. C-SCAN Algorithm
5. FCFS Scheduling
          The process which arrives first in the ready queue is firstly assigned the CPU.
          In case of a tie, process with smaller process id is executed first.
          It is always non-preemptive in nature.
6. SJF Scheduling | SRTF Scheduling
          Out of all the available processes, CPU is assigned to the process having smallest burst time.
          In case of a tie, it is broken by FCFS Scheduling.
          SJF Scheduling can be used in both preemptive and non-preemptive mode.
          Preemptive mode of Shortest Job First is called as Shortest Remaining Time First (SRTF).
7. LJF Scheduling | LRTF Scheduling
          Out of all the available processes, CPU is assigned to the process having largest burst time.
          In case of a tie, it is broken by FCFS Scheduling.
          LJF Scheduling can be used in both preemptive and non-preemptive mode.
          Preemptive mode of Longest Job First is called as Longest Remaining Time First (LRTF).
8. HRRN Scheduling
9. Round Robin Scheduling
10. Priority Scheduling
          Out of all the available processes, CPU is assigned to the process having the highest priority.
          In case of a tie, it is broken by FCFS Scheduling.
          Priority Scheduling can be used in both preemptive and non-preemptive mode.
