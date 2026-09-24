//#include <stdio.h>
//
//
//int main(void){
//    float obt_mark,total_mark;
//    float persontage;
//    char name[40];
//    
//    printf("Enter Your Name: ");
//    scanf("%39s",&name);
//    
//    
//    printf("Enter Your Marks: ");
//    scanf("%f",&obt_mark);
//    printf("Enter Total Marks: ");
//    scanf("%f",&total_mark);
//    persontage = (obt_mark / total_mark) * 100;
//    printf("%s Your persontage is %0.2f",name,persontage);
//
//    return 0;
//}
//


//
////sum of number
////#include <stdio.h>
////int main(void){
////    int num1,num2;
////    
////    printf("Enter First Number: ");
////    scanf("%d",&num1);
////    
////    printf("Enter Second Number:");
////    scanf("%d",&num2);
////    
////    printf("%d + %d = %d",num1,num2,num1 + num2);
////    
////    return 0;
////}




//
//int main(void){
//	  char fav_man[40];
//    char fav_alphabet;
//		int fav_num;
////		Favroite Man
//		printf("\nEnter Your Favroite men:\b\n");
//		scanf("%s",&fav_man);
//		printf("Your Favroite man is\t %s",fav_man);
//		// alphabet letters
//		printf("\nEnter Favroite alphabet  letters :\b\n");
//		scanf("%s",&fav_alphabet);
//		printf("Your Favroite alphabet letter is\t %c",fav_alphabet);
//		
//
//    return 0;
//}


#include <stdio.h>

int main(void){
	 float eng,python,urdu,math,chemistry,all_subject_marks,total_marks,persontage;
	 printf("Enter Englsh Marks: ");
	 scanf("%f",&eng);
	 
	 printf("Enter python Marks: ");
	 scanf("%f",&python);
	 
	 printf("Enter urdu Marks: ");
	 scanf("%f",&urdu);
	 
	 printf("Enter math Marks: ");
	 scanf("%f",&math);
	 
	 printf("Enter chemistry Marks: ");
	 scanf("%f",&chemistry);
	 
	 printf("Enter Total Marks: ");
	 scanf("%f",&total_marks);
	 all_subject_marks = eng + python + urdu + math +chemistry;
	  
	 persontage = (all_subject_marks / total_marks) * 100;
	 
	 printf("Your Persontage is %0.2f",persontage);

	 
    return 0;
}