#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>  // استدعاء مكتبة المتجهات للذاكرة الديناميكية

using namespace std;

enum enQuestionsLevel { EasyLevel = 1, MedLevel = 2, HardLevel = 3, MixLevel = 4 };
enum enOperationType { Add = 1, Sub = 2, Mult = 3, Div = 4, MixOp = 5 };

int RandomNumber(int From, int To) {
    return rand() % (To - From + 1) + From;
}

string GetOpTypeSymbol(enOperationType OpType) {
    switch (OpType) {
        case enOperationType::Add: return "+";
        case enOperationType::Sub: return "-";
        case enOperationType::Mult: return "x";
        case enOperationType::Div: return "/";
        default: return "Mix";
    }
}

enOperationType GetRandomOperationType() {
    return (enOperationType)RandomNumber(1, 4);
}

void SetScreenColor(bool Right) {
    if (Right)
        system("color 2F"); // أخضر للإجابة الصحيحة
    else {
        system("color 4F"); // أحمر للإجابة الخاطئة
        cout << "\a";       // صوت تنبيه
    }
}

struct stQuestion {
    int Number1 = 0;
    int Number2 = 0;
    enOperationType OperationType;
    enQuestionsLevel QuestionLevel;
    int CorrectAnswer = 0;
    int PlayerAnswer = 0;
    bool AnswerResult = false;
};

struct stQuizz {
    vector<stQuestion> QuestionList; // استخدام المتجهات بدلاً من مصفوفة ثابتة
    short NumberOfQuestions = 0;
    enQuestionsLevel QuestionsLevel;
    enOperationType OpType;
    short NumberOfWrongAnswers = 0;
    short NumberOfRightAnswers = 0;
    bool isPass = false;
};

int SimpleCalculator(int Number1, int Number2, enOperationType OpType) {
    switch (OpType) {
        case enOperationType::Add: return Number1 + Number2;
        case enOperationType::Sub: return Number1 - Number2;
        case enOperationType::Mult: return Number1 * Number2;
        case enOperationType::Div: return (Number2 != 0) ? (Number1 / Number2) : 0;
        default: return Number1 + Number2;
    }
}

stQuestion GenerateQuestion(enQuestionsLevel QuestionLevel, enOperationType OpType) {
    stQuestion Question;

    if (QuestionLevel == enQuestionsLevel::MixLevel)
        QuestionLevel = (enQuestionsLevel)RandomNumber(1, 3);

    if (OpType == enOperationType::MixOp)
        OpType = GetRandomOperationType();

    Question.OperationType = OpType;
    Question.QuestionLevel = QuestionLevel;

    // تحديد نطاق الأرقام بناءً على الصعوبة
    int Min = 1, Max = 10;
    if (QuestionLevel == enQuestionsLevel::MedLevel) { Min = 10; Max = 50; }
    else if (QuestionLevel == enQuestionsLevel::HardLevel) { Min = 50; Max = 100; }

    Question.Number2 = RandomNumber(Min, Max);

    // معالجة ذكية لعملية القسمة لضمان نتيجة صحيحة بدون فواصل
    if (OpType == enOperationType::Div) {
        int ExpectedAnswer = RandomNumber(Min, Max);
        Question.Number1 = Question.Number2 * ExpectedAnswer; // بناء الرقم الأول ليكون قابلاً للقسمة
        Question.CorrectAnswer = ExpectedAnswer;
    } 
    else {
        Question.Number1 = RandomNumber(Min, Max);
        Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, OpType);
    }

    return Question;
}

void AskAndCorrectQuestionListAnswers(stQuizz& Quizz) {
    for (short i = 0; i < Quizz.NumberOfQuestions; i++) {
        cout << "\nQuestion [" << i + 1 << "/" << Quizz.NumberOfQuestions << "]\n";
        cout << Quizz.QuestionList[i].Number1 << " "
             << GetOpTypeSymbol(Quizz.QuestionList[i].OperationType) << " "
             << Quizz.QuestionList[i].Number2 << " = ";

        cin >> Quizz.QuestionList[i].PlayerAnswer;

        if (Quizz.QuestionList[i].PlayerAnswer == Quizz.QuestionList[i].CorrectAnswer) {
            cout << "Correct!\n";
            Quizz.NumberOfRightAnswers++;
            SetScreenColor(true); // استدعاء دالة الألوان للإجابة الصحيحة
        } else {
            cout << "Wrong! Correct Answer: " << Quizz.QuestionList[i].CorrectAnswer << endl;
            Quizz.NumberOfWrongAnswers++;
            SetScreenColor(false); // استدعاء دالة الألوان للإجابة الخاطئة
        }
    }

    Quizz.isPass = (Quizz.NumberOfRightAnswers >= Quizz.NumberOfWrongAnswers);
}

void PlayMathGame() {
    // إعادة تعيين لون الشاشة للوضع الطبيعي (أسود وأبيض) في بداية كل لعبة
    system("color 0F"); 

    stQuizz Quizz;
    Quizz.NumberOfQuestions = 5;
    Quizz.QuestionsLevel = enQuestionsLevel::EasyLevel;
    Quizz.OpType = enOperationType::MixOp;

    for (short i = 0; i < Quizz.NumberOfQuestions; i++) {
        // إضافة الأسئلة الديناميكية للمتجه (Vector)
        Quizz.QuestionList.push_back(GenerateQuestion(Quizz.QuestionsLevel, Quizz.OpType));
    }

    AskAndCorrectQuestionListAnswers(Quizz);

    cout << "\n______________________________\n";
    cout << "Quiz Completed!\n";
    cout << "Right Answers: " << Quizz.NumberOfRightAnswers << "\n";
    cout << "Wrong Answers: " << Quizz.NumberOfWrongAnswers << "\n";
    cout << (Quizz.isPass ? "Status: PASSED!\n" : "Status: FAILED!\n");
    cout << "______________________________\n";
    
    // إعادة الشاشة للون الطبيعي بعد عرض النتيجة
    system("color 0F");
}

int main() {
    srand((unsigned)time(NULL));
    
    char PlayAgain = 'Y';
    do {
        system("cls");
        PlayMathGame();
        cout << "\nDo you want to play again? (Y/N): ";
        cin >> PlayAgain;
    } while (PlayAgain == 'Y' || PlayAgain == 'y');

    return 0;
}
