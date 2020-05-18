#include <iostream>
#include <QVector>

void task1();
void task2();
int main() {
    std::cout<<"Task 1:"<<std::endl;
    task1();
    std::cout<<"\nTask 2:"<<std::endl;
    task2();
    return 0;
}

void task1(){
    int number=0;
    QVector<int> vector1;
    QVector<int> vector2;
    std::cout<<"Enter a sequence of numbers:"<<std::endl;
    while(std::cin.peek() != '\n'){
        std::cin>>number;
        vector1.append(number);
        if(0<=number){
            vector2.append(number);
        }
    }
    std::cout<<"All non-negative numbers in the entered sequence:"<<std::endl;
    for(int i = 0; i<vector2.length();i++){
        std::cout<<vector2[i]<<" ";
    }
}

void task2(){
    int number=0;
    int summ=0;
    QVector<int> vector1;
    std::cout<<"Enter a sequence of numbers:"<<std::endl;
    do{
        std::cin>>number;
        vector1.append(number);
    }while(std::cin.peek() != '\n');
    QVectorIterator<int> iter(vector1);
    while(iter.hasNext()){
        if(iter.next()==0){
            int summ1=0;
            while(iter.hasNext()){
                summ1+=iter.peekNext();
                if(0==iter.next()) {
                    summ+=summ1;
                    summ1=0;
                }
            }
            break;
        }
    }
    std::cout<<"The sum of the sequence elements between the first and last zero elements:\n"<<summ<<std::endl;
}