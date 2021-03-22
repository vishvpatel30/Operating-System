# Operating-System
Basic Scheduling Algorithm


1. FCFS Disk Scheduling

          As the name suggests, this algorithm entertains requests in the order they arrive in the disk queue.
          It is the simplest disk scheduling algorithm.
          
2. SSTF Disk Scheduling

          SSTF stands for Shortest Seek Time First.
          This algorithm services that request next which requires least number of head movements from its current position regardless of the direction.
          It breaks the tie in the direction of head movement.
          
3. SCAN Disk Scheduling 

          As the name suggests, this algorithm scans all the cylinders of the disk back and forth.
          Head starts from one end of the disk and move towards the other end servicing all the requests in between.
          After reaching the other end, head reverses its direction and move towards the starting end servicing all the requests in between.
          The same process repeats.
          
4. C-SCAN Disk Scheduling 

          Circular-SCAN Algorithm is an improved version of the SCAN Algorithm.
          Head starts from one end of the disk and move towards the other end servicing all the requests in between.
          After reaching the other end, head reverses its direction.
          It then returns to the starting end without servicing any request in between.
          The same process repeats.
          
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

11. Banker's Algorithm

          It helps to overcome the problem of dead-lock in the scheduling algorithms.
