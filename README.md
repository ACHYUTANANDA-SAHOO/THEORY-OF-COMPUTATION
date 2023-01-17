<h1 align = "center">
  CSA1354 - THEORY OF COMPUTATION WITH PRODUCTIONS
</h1>

<div align="center">
Consists of programs and simulations related to Theory Of Computation .<br/>
<strong> Software Used : Automaton Simulator, VSCode (C language)  </strong>
</div>

<h1 align="center"> INDEX </h1>
<div align="center">

|Exp.No 		|Expermiment Title & Link  	|Language/Software Used |Status |
|:---:|:---:|:---:|:---:|
| | **PROGRAMS** | |  |
|1.		|[Simulate DFA - 1](#exp1)	|VSCode - C |Uploaded |
|2.		|[Simulate DFA - 2](#exp2)<br/>	|VSCode - C |Uploaded |
|3.		|[Check if a string belongs to a CFG - 1](#exp3)<br/>	|VSCode - C |Uploaded |
|4.		|[Check if a string belongs to a CFG - 2](#exp4)<br/>	|VSCode - C |Uploaded |
|5.		|[Check if a string belongs to a CFG - 3](#exp5)<br/>	|VSCode - C |Uploaded |
|6		|[Check if a string belongs to a CFG - 4](#exp6)<br/>	|VSCode - C |Uploaded |
|7.		|[Check if a string belongs to a CFG - 5](#exp7)<br/>	|VSCode - C |Uploaded |
|8.		|[Simulate NFA - 1](#exp8)<br/>	|VSCode - C |Uploaded |
|9.		|[Simulate NFA - 2](#exp9)<br/>	|VSCode - C |Uploaded |
|10.	|[Find E-Closure of a NFA](#exp10)<br/>	|VSCode - C |- |
|11.	|[Find E-Closure of a NFA](#exp10)<br/>	|VSCode - C |- |
| | **SIMULATIONS** ||  |
|12.		|[Design DFA to accept "a", "ac" and "bac". ](#exp11)	|Automaton Simulator |Uploaded |
|13.		|[PDA for L = a^n.b^n](#exp12)<br/>	|Automaton Simulator |Uploaded |
|14.		|[PDA for L = a^n.b^2n](#exp13)<br/>	|Automaton Simulator |Uploaded |
|15.		|[TM  For input L =  a^n.b^n](#exp14)<br/>	|Automaton Simulator |Uploaded |
|16.		|[TM  for input L = a^n.b^2n)](#exp15)<br/>	|Automaton Simulator |Uploaded |
|17.		|[TM  Simulation  for Palindrome W= ababa ](#exp16)<br/>	|Automaton Simulator |Uploaded |
|18.		|[TM for L = w.w ](#exp17)<br/>	|Automaton Simulator |- |
|19.		|[TM to  perform addition ](#exp17)<br/>	|Automaton Simulator |Uploaded |
|20.		|[TM to perform  subtraction](#exp18)<br/>	|Automaton Simulator |Uploaded |
|21.		|[DFA to accept strings with even a's. ](#exp18)<br/>	|Automaton Simulator |Uploaded |
|22.		|[DFA to accept strings with odd a's. ](#exp18)<br/>	|Automaton Simulator |Uploaded |
|23.		|[DFA to accept strings that end with "ab".](#exp18)<br/>	|Automaton Simulator |Uploaded |
|24.		|[DFA to accept string having "ab" as substring.](#exp18)<br/>	|Automaton Simulator |Uploaded |
|25.		|[DFA to accept strings starting with a or b.](#exp18)<br/>	|Automaton Simulator |Uploaded |

<h1 align="center"> OUTPUTS </h1>

</div>

## EXPERIMENT 1 : 
**AIM** : Write a C program to simulate a Deterministic Finite Automata (DFA) for the given language representing strings that start with a and end with a. <br/>
**File Link :** [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/THEORY-OF-COMPUTATION/blob/main/PROGRAMS/Exp1_DFA.c)<br/>
**Output :** </br>
![exp1](https://user-images.githubusercontent.com/113246116/212965637-12d1ea8a-9483-4a3e-8328-870e5cb1649c.png)<br/>

## EXPERIMENT 2 : 
**AIM** : Write a C program to simulate a Deterministic Finite Automata (DFA) for the given language representing strings that start with 0 and end with 1. <br/>
**File Link :** [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/THEORY-OF-COMPUTATION/blob/main/PROGRAMS/Exp2_DFA.c)<br/>
**Output :** </br>
![exp2](https://user-images.githubusercontent.com/113246116/212967056-d248d52d-abf9-4971-b943-0ebf2ba7f8fe.png)<br/>

## EXPERIMENT 3 : 
**AIM** : Write a C program to check whether a given string belongs to the language defined
by a Context Free Grammar (CFG)</br>
S → 0A1 </br>
A → 0A | 1A | ε <br/>
**File Link :** [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/THEORY-OF-COMPUTATION/blob/main/PROGRAMS/Exp3_CFG.c)<br/>
**Output :** </br>
![exp3](https://user-images.githubusercontent.com/113246116/212967764-f55bb8ed-914d-4a84-9805-0010014113b0.png)
<br/>

## EXPERIMENT 4 : 
**AIM** : Write a C program to check whether a given string belongs to the language defined
by a Context Free Grammar (CFG). </br>
S → 0S0 | 1S1 | 0 | 1 | ε <br/>
**File Link :** [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/THEORY-OF-COMPUTATION/blob/main/PROGRAMS/Exp4_CFG.c)<br/>
**Output :** </br>
![exp4](https://user-images.githubusercontent.com/113246116/212968607-ce7a8baf-87ed-48e9-8b83-f4596b9f8242.png)
<br/>

## EXPERIMENT 5 : 
**AIM** : Write a C program to check whether a given string belongs to the language defined
by a Context Free Grammar (CFG). </br>
S → 0S0 | A </br>
A → 1A | ε <br/>
**File Link :** [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/THEORY-OF-COMPUTATION/blob/main/PROGRAMS/Exp5_CFG.c)<br/>
**Output : **</br>
![exp5](https://user-images.githubusercontent.com/113246116/212969324-b7aba8aa-408d-4364-87c6-090c2f3e0389.png)<br/>

## EXPERIMENT 6 : 
**AIM** : Write a C program to check whether a given string belongs to the language defined
by a Context Free Grammar (CFG) </br>
S → 0S1 | ε <br/>
**File Link :** [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/THEORY-OF-COMPUTATION/blob/main/PROGRAMS/Exp6_CFG.c)<br/>
**Output :** <br/>
![exp6](https://user-images.githubusercontent.com/113246116/212970095-73ddfa31-f434-4549-8f04-fb2ecc0bf5bc.png)<br/>

## EXPERIMENT 7 : 
**AIM** : Write a C program to check whether a given string belongs to the language defined
by a Context Free Grammar (CFG) </br>
S → A101A </br>
A → 0A | 1A | ε <br/>
**File Link :** [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/THEORY-OF-COMPUTATION/blob/main/PROGRAMS/Exp7_CFG.c)<br/>
**Output :** <br/>
![exp7](https://user-images.githubusercontent.com/113246116/212970505-692ab9c6-60f7-46cb-9a65-947e5ae41ac1.png)
<br/>

## EXPERIMENT 8 : 
**AIM** : Write a C program to simulate a Non-Deterministic Finite Automata (NFA) for the
given language representing strings that start with b and end with a.  <br/>
**File Link :** [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/THEORY-OF-COMPUTATION/blob/main/PROGRAMS/Exp8_NFA.c)<br/>
**Output :** </br>
![exp8](https://user-images.githubusercontent.com/113246116/212970898-8154d2fd-ad7d-4d51-a068-cfbd2cef09c7.png)
<br/>

## EXPERIMENT 9 : 
**AIM** : Write a C program to simulate a Non-Deterministic Finite Automata (NFA) for the
given language representing strings that start with o and end with 1. <br/>
**File Link :** [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/THEORY-OF-COMPUTATION/blob/main/PROGRAMS/Exp9_NFA.c)<br/>
**Output :** </br>
![exp9](https://user-images.githubusercontent.com/113246116/212971214-9d66a583-9bcb-4794-9aab-38d855ed98eb.png)
<br/>

## EXPERIMENT 10 : 
**AIM** : Write a C program to find ℇ-closure for all the states in a Non-Deterministic Finite
Automata (NFA) with ℇ-moves. <br/>
**File Link :** [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/THEORY-OF-COMPUTATION/blob/main/PROGRAMS/Exp10_EClosure.c)<br/>
**Output :** 
![exp10]()<br/>

## EXPERIMENT 11 : 
**AIM** : Write a C program to find ℇ-closure for all the states in a Non-Deterministic Finite
Automata (NFA) with ℇ-moves. <br/>
File Link : [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/THEORY-OF-COMPUTATION/blob/main/PROGRAMS/Exp11_EClosure.c)<br/>
Output : 
![exp11]()<br/>

## EXPERIMENT 12 : 
**AIM** : Design DFA using simulator to accept the input string “a” ,”ac”,and ”bac”. <br/>
**File Link :** [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/THEORY-OF-COMPUTATION/blob/main/SIMULATIONS/Exp12_DFASim)<br/>
**Output :** </br>
![exp12](https://user-images.githubusercontent.com/113246116/212978167-be204213-19dc-4193-969a-28fe071b1fe9.gif)
<br/>

## EXPERIMENT 13 : 
**AIM** : Design PDA using simulator to accept the input string aabb.  <br/>
**File Link :** [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/THEORY-OF-COMPUTATION/blob/main/SIMULATIONS/Exp13_DFASim)<br/>
**Output :** <br/>
![exp13](https://user-images.githubusercontent.com/113246116/212979012-3b9e6e3a-32a7-4df0-8e6d-25aedbb7b44a.gif)
<br/>

## EXPERIMENT 14 : 
**AIM** : Design of 2 stage pipeline for addition and subtraction of two numbers using any high level language. <br/>
File Link : [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/COMPUTER-ARCHITECTURE/blob/main/DAY%203%20LAB/exp_14_2_stage_pipeline.c)<br/>
Output : <br/>
![exp14](https://user-images.githubusercontent.com/113246116/194515431-28746606-b6bc-4047-91b6-0a447a1c1d53.png)
<br/>

## EXPERIMENT 15 : 
**AIM** : Design of 3 stage pipeline for AND, OR, NAND of two numbers using any high level language. <br/>
File Link : [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/COMPUTER-ARCHITECTURE/blob/main/DAY%203%20LAB/exp_15_3_stage_pipeline.c)<br/>
Output : <br/>
![exp_15](https://user-images.githubusercontent.com/113246116/194562748-566371c5-bd08-4427-8607-6b261b453c3b.png)
<br/>

## EXPERIMENT 16 : 
**AIM** : Design of 4 stage pipeline for multiplication and division of two numbers using any high level language <br/>
File Link : [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/COMPUTER-ARCHITECTURE/blob/main/DAY%203%20LAB/exp_16_4_stage_pipeline.c)<br/>
Output : <br/>
![exp_16](https://user-images.githubusercontent.com/113246116/194558312-963e25b7-4feb-447c-ab30-e32a03d36d95.png)
<br/>

## EXPERIMENT 19 : 
**AIM** : Write a program to find the Hit ratio for the given number of Hits and Misses in Cache memory using any high level language. <br/>
File Link : [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/COMPUTER-ARCHITECTURE/blob/main/DAY%203%20LAB/exp_19_hitratio.c)<br/>
Output : <br/>
![exp_19](https://user-images.githubusercontent.com/113246116/194573938-6fa58e99-b8a3-469f-992f-f13d8c2ddba5.png)
<br/>

## EXPERIMENT 20 : 
**AIM** : Write an assembly language program to find 1’s and 2’s complement of 8 bit number <br/>
File Link : [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/COMPUTER-ARCHITECTURE/blob/main/DAY%204%20LAB/exp_20_complements.asm)<br/>
Output : 
![complement](https://user-images.githubusercontent.com/113246116/194015811-c9839a03-45cd-4041-b9cb-7db4c5276d94.png)
<br/>


## EXPERIMENT 21 : 
**AIM** : Design DFA using simulator to accept even number of a’s. <br/>
**File Link :** [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/THEORY-OF-COMPUTATION/blob/main/SIMULATIONS/Exp21_DFASim)<br/>
**Output :** <br/>
![Experiment_21](https://user-images.githubusercontent.com/113246116/212985294-0f982e97-c47e-4993-ac98-cb453910e706.gif)
<br/>

## EXPERIMENT 22 : 
**AIM** : Write a program to convert Decimal number to an Octal number using any high level language. <br/>
File Link : [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/COMPUTER-ARCHITECTURE/blob/main/DAY%204%20LAB/exp_22_dec_to_oct.c)<br/>
Output : <br/>
![exp22](https://user-images.githubusercontent.com/113246116/194033677-700992d1-e4dc-4dc2-8631-22ce55398968.png)
<br/>

## EXPERIMENT 23 : 
**AIM** : Write an assembly language program to find 1’s and 2’s complement of 8 bit number <br/>
File Link : [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/COMPUTER-ARCHITECTURE/blob/main/DAY%204%20LAB/exp_23_bin_to_dec.c)<br/>
Output : <br/>
![exp23](https://user-images.githubusercontent.com/113246116/194037781-47c1b8b8-034e-4611-aa13-8f8b82c7886a.png)
<br/>

## EXPERIMENT 24 : 
**AIM** : Write a program to find the CPU performance of a processor using any high level language. <br/>
File Link : [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/COMPUTER-ARCHITECTURE/blob/main/DAY%204%20LAB/exp_24_cpu_performance.c)<br/>
Output : <br/>
![exp_24](https://user-images.githubusercontent.com/113246116/194571067-d403118c-e2ae-4e34-95fa-5f33f2f66785.png)
<br/>

## EXPERIMENT 25 : 
**AIM** :  Write an assembly language program to swap two 8-bit data using 8085 processor. <br/>
File Link : [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/COMPUTER-ARCHITECTURE/blob/main/DAY%204%20LAB/exp_25_swap_num.asm)<br/>
Output : 
<br/> BEFORE SWAP : <br/> 
![swap_before](https://user-images.githubusercontent.com/113246116/194017578-5d5317ec-f939-48de-b810-9756b93ceb11.png)
<br/> AFTER SWAP : <br/> 
![swap_after](https://user-images.githubusercontent.com/113246116/194017589-85d55ba3-5ed9-4c08-ba5c-91934511f6d8.png)
<br/>
