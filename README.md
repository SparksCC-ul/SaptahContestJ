# ![Saptah](https://drive.google.com/uc?export=view&id=1XgSLl7poMxyTujdQXs28-8oLbLLMrQtZ)


# SaptahContest
Questions posted here are framed in a possibility that they can be solved in 15min  
Steps to Solve the questions in Github    
* Login and fork this Repository
* The question will be in the form of an md file  (ex: "Monday Rumble")
* read and analyse the question  
* use your own code editor to solve the question  
* create a new file
* paste your code in the new file
* Propose the changes
* Click on "create Pull Request'
* Done

# Today's Topic: Recursion

## Recursion

Recursion is the process of defining a problem (or the solution to a problem) in terms of (a simpler version of) itself.

For example, we can define the operation "find your way home" as:

    If you are at home, stop moving.

    Take one step toward home.

    "find your way home".

Here the solution to finding your way home is two steps (three steps). First, we don't go home if we are already home. Secondly, we do a very simple action that makes our situation simpler to solve. Finally, we redo the entire algorithm. 

Another example of recursion would be finding the maximum value in a list of numbers. The maximum value in a list is either the first number or the biggest of the remaining numbers. Here is how we would write the pseudocode of the algorithm:

         
          Function find_max( list ) 
 
            possible_max_1 = first value in list 
            possible_max_2 = find_max ( rest of the list ); 
             
            if ( possible_max_1 > possible_max_2 ) 
              answer is possible_max_1 
            else 
              answer is possible_max_2 
            end 
 
          end 
