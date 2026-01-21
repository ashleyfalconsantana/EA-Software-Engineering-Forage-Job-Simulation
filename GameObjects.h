// Putting all 7 class definitions here
#ifndef GAMEOBJECTS_H
#define GAMEOBJECTS_H

#include <string> 

class ControllerInput;
class Player;
class TutorialManager;
class FootballMechanics;
class UIOverlay;
class Lesson;
class ProgressTracker;

class ControllerInput {
    private:
        std::string buttonMappings;

    public:
        void getInput();
        void mapButton();
};

class Player {
    private:
        int position;
        int stats;
        int currentAction;

    public:
        void move();
        void performAction();
        void notifyTutorial();
};

class TutorialManager {
    private:
        int currentLesson;
        bool tutorialActive;

    public:
        void startTutorial();
        void nextLesson();
        void skipTutorial();
};

class FootballMechanics {
    private:
        std::string gameState;
        int ballPosition;

    public:
        void passBall();
        void run();
        void tackle();
};

class UIOverlay {
    private:
        std::string messages;
        bool isVisible; 

    public:
        void showMessage();
        void hideMessage();
};

class Lesson {
    private:
        std::string lessonName;
        std::string description;
        bool isCompleted;

    public:
        void showLesson();
        void completeLesson();
};

class ProgressTracker {
    private:
        int completedLessons;

    public:
        void markCompleted();
        void resetProgress();
};

#endif
