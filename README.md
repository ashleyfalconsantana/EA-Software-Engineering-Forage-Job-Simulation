# EA Software Engineering Forage Job Simulation
This simulation is a hands on, self paced introduction to EA software engineering, letting me practice problem solving, coding in C++, and exploring real world game development tasks to build skills and career readiness. 

## Task 1: Write a Feature Proposal
In task one, I was asked to develop a feature proposal for EA SPORTS College Football. The proposal focuses on improving the experience for new players. It outlines an in-game tutorial that teaches core gameplay controls alongside fundamental football concepts. It evaluates the current lack of onboarding, explains the value of a structured tutorial for accessibility and player retention, and weighs the potential benefits and tradeoffs of implementing the feature within the existing game systems.

[View Feature Proposal Here](EA%20virtual%20internship%20task%201.pdf)

## Task 2: Create a Game Object Class
In this task, I designed a UML class diagram to model the architecture of the proposed tutorial feature. The diagram breaks the system into core classes, defines their responsibilities, and visualizes how they interact. This helps to clarify object relationships, state, and behavior before implementation. 

SmartDraw was used to make the following UML Diagram:

![uml diagram](uml-3.png)

## Task 3: Improve Inventory System
For Task 3, I created "GameObjects.h" to define all 7 game objects for the system(which can be seen in the UML Diagram above). Each class includes private member vairables for data storage and public method stubs, with include guards and forward declarations to manage dependencies. I also chose data types carefully - like bool for state flags - ensuring proper encapsulation and clear class responsibilities before implementation. 

[View Header File Here](GameObjects.h)

## Task 4: Live Bugfix
For this task I refactored the invetory system to properly implement item removal when quantity reaches zero and modernized the codebase structure. I replaced the C style item array with the std::vector for safer memory managemenr, updated the remove_item() logic to fully delete items instead of leavning zero quantity entries, and cleaned up related input handling and data flow. This ensured correct inventory state management, improved code safety, and aligned the system wuith modern C++ practices used in collaborative codebases. 

[View Updated File Here](task-4-starter.cpp)
