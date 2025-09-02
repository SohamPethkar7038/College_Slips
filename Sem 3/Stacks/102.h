int top,n;
void push(){
    
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");
        
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}

int isempty(){
    if (top!= NULL)
    return 0;
        // printf("\n Stack is empty");
    else
    return 1;
        // printf("\n Stack is not empty with %d elements", x);
}

void display(){
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
   
}
