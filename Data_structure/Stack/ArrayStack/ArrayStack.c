#include "ArrayStack.h"

int main(){

    Stack * myStack = CreateStack(1000);
    for(int i=1;i<=10;i++) stackPush(myStack, i);
    PrintStackState(myStack);
    for(int i=1;i<=10;i++) printf("%d\n", stackPop(myStack));
    PrintStackState(myStack);
    return 0;
}