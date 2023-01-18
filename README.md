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
**Output :** </br>
![image](https://user-images.githubusercontent.com/113246116/213078446-4d10853d-2977-4599-8964-6af05213f65d.png)
<br/>

## EXPERIMENT 11 : 
**AIM** : Write a C program to find ℇ-closure for all the states in a Non-Deterministic Finite
Automata (NFA) with ℇ-moves. <br/>
**File Link :** [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/THEORY-OF-COMPUTATION/blob/main/PROGRAMS/Exp11_EClosure.c)<br/>
**Output :** </br> 
![image](https://user-images.githubusercontent.com/113246116/213078467-0e0922f9-f04e-4a0d-a344-baea83380323.png)
<br/>

## EXPERIMENT 12 : 
**AIM** : Design DFA using simulator to accept the input string “a” ,”ac”,and ”bac”. <br/>
**File Link :** [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/THEORY-OF-COMPUTATION/blob/main/SIMULATIONS/Exp12_DFASim)<br/>
**Output :** </br>
![exp12](https://user-images.githubusercontent.com/113246116/213073786-9076561e-bce0-4cd2-a569-ec70e3dc13b0.png)
<br/>

## EXPERIMENT 13 : 
**AIM** : Design PDA using simulator to accept the input string aabb.  <br/>
**File Link :** [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/THEORY-OF-COMPUTATION/blob/main/SIMULATIONS/Exp13_DFASim)<br/>
**Output :** <br/>
![exp13](https://user-images.githubusercontent.com/113246116/213074345-7383b8e1-af01-4df7-ac49-02e5c06b1617.png)
<br/>

## EXPERIMENT 14 : 
**AIM** : Design PDA using simulator to accept the input string a^n.b^2n. <br/>
**File Link :** [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/THEORY-OF-COMPUTATION/blob/main/SIMULATIONS/Exp14_PDASim)<br/>
**Output :** <br/>
![image](https://user-images.githubusercontent.com/113246116/213076330-ff6d5cc0-e480-4dc8-835b-0d8adc8fd784.png)
<br/>

## EXPERIMENT 15 : 
**AIM** : Design TM using simulator to accept the input string A^n.B^n. <br/>
**File Link :** [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/THEORY-OF-COMPUTATION/blob/main/SIMULATIONS/Exp15_TMSim)<br/>
**Output :** <br/>
![image](https://user-images.githubusercontent.com/113246116/213076383-c32153b9-e0d6-4935-9b2b-4cd29a50fb9b.png)
<br/>

## EXPERIMENT 16 : 
**AIM** : Design TM using simulator to accept the input string A^n.B^2n <br/>
**File Link :** [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/THEORY-OF-COMPUTATION/blob/main/SIMULATIONS/Exp16_TMSim)<br/>
**Output :** <br/>
![image](https://user-images.githubusercontent.com/113246116/213076459-c1cd0e83-c442-4ee0-8817-7bdb598633b7.png)

<br/>

## EXPERIMENT 17 : 
**AIM** : Design TM using simulator to accept the input string Palindrome ababa. <br/>
**File Link :** [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/THEORY-OF-COMPUTATION/blob/main/SIMULATIONS/Exp17_TMSim)<br/>
**Output :** <br/>
![image](https://user-images.githubusercontent.com/113246116/213076540-7d6ccbf8-74e8-4371-8e9f-438c8c866492.png)
<br/>

## EXPERIMENT 18 : 
**AIM** : Design TM using simulator to accept the input string ww. <br/>
**File Link :** [FILE - CLICK HERE ]()<br/>
**Output :**<br/>

<br/>

## EXPERIMENT 19 : 
**AIM** : Design TM using simulator to perform addition of ‘aa’ and ‘aaa’. <br/>
**File Link :** [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/THEORY-OF-COMPUTATION/blob/main/SIMULATIONS/Exp19_TMSim)<br/>
**Output :** <br/>
![image](https://user-images.githubusercontent.com/113246116/213076610-39acd315-1baf-4204-a3e7-2bfa15ed4328.png)
<br/>

## EXPERIMENT 20 : 
**AIM** : Write an assembly language program to find 1’s and 2’s complement of 8 bit number <br/>
**File Link :** [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/THEORY-OF-COMPUTATION/blob/main/SIMULATIONS/Exp20_TMSim)<br/>
**Output :** </br> 
![image](https://user-images.githubusercontent.com/113246116/213076656-e969f0e1-7b9d-4349-92a6-6f9ba8bf5b3b.png)
<br/>

## EXPERIMENT 21 : 
**AIM** : Design DFA using simulator to accept even number of a’s. <br/>
**File Link :** [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/THEORY-OF-COMPUTATION/blob/main/SIMULATIONS/Exp21_DFASim)<br/>
**Output :** <br/>
![Experiment_21](https://user-images.githubusercontent.com/113246116/212985294-0f982e97-c47e-4993-ac98-cb453910e706.gif)
<br/>

## EXPERIMENT 22 : 
**AIM** : Design DFA using simulator to accept odd number of a’s <br/>
**File Link :** [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/THEORY-OF-COMPUTATION/blob/main/SIMULATIONS/Exp22_DFASim)<br/>
**Output :** <br/>
![Experiment_22](https://user-images.githubusercontent.com/113246116/212988858-ab0df54a-9204-45a0-b321-b33e765c6b61.gif)

<br/>

## EXPERIMENT 23 : 
**AIM** : Design DFA using simulator to accept the string the end with ab over set {a,b) W= aaabab <br/>
**File Link :** [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/THEORY-OF-COMPUTATION/blob/main/SIMULATIONS/Exp23_DFASim)<br/>
**Output :** <br/>
![image](https://user-images.githubusercontent.com/113246116/213076736-7771907b-454a-4eef-b3c3-c849c449c752.png)
<br/>

## EXPERIMENT 24 : 
**AIM** : Design DFA using simulator to accept the string having ‘ab’ as substring over the set {a,b}. <br/>
**File Link :** [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/THEORY-OF-COMPUTATION/blob/main/SIMULATIONS/Exp24_DFASim)<br/>
**Output :** <br/>
![image](https://user-images.githubusercontent.com/113246116/213076786-4ad7c471-292b-45b5-9b6a-637f9bbcc0b1.png)

<br/>

## EXPERIMENT 25 : 
**AIM** :  Design DFA using simulator to accept the string start with a or b over the set {a,b} <br/>
**File Link :** [FILE - CLICK HERE ](https://github.com/ACHYUTANANDA-SAHOO/THEORY-OF-COMPUTATION/blob/main/SIMULATIONS/Exp25_DFASim)<br/>
**Output :** </br>
![Experiment_25](https://user-images.githubusercontent.com/113246116/212989805-4a88bdcb-8441-400b-bf92-0639eb5b2d21.gif)


