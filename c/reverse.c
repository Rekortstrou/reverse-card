#include <stdio.h>
int main(){
    char arr[50][100] = {
      "*-------------------------:-::::::-:-:-:-::-:-:-----------------------:",
      "*------*********************************************************------*",
      "*----:*********+%%%%%%%%%%%%+******************************************:----*",
      "+----**********@#-----@*******************************************----*",
      "*----********+#*-----+=********************:---------------:******----*",
      "*----*******#+----%%%###%%%@*****************:-----::*********:-----****----*",
      "*----******+#:-:@*==***************:----:*******************----**----*",
      "*----****+#%%%%#@----@************:----:************************--------*",
      "*----****@=------:@***********----:****************************:------*",
      "*----****#*----%%@**********:---:********************************:-----*",
      "*----***+#:::::=%%********:---:***********************************-----*",
      "*----******************:---:*************************************:----*",
      ":----*****************---:****************************************----:",
      ":----***************---:******************************************----:",
      ":----*************:---********************************************----:",
      ":----************---:*********************************************----:",
      ":----**********:---****************%%%%%%%%%%%%%%%%%%%%%%==+*****************----:",
      ":----*********---:***************###-----------*#****************:----:",
      ":----********---:****************####=---------=%%****************:----:",
      ":----******:---*******************@#=----------#+****************-----:",
      ":----*****:---******************##:-----------:#****************:-----:",
      ":----****:---****************+#@----------*---=%%****************------:",
      ":----***:---****************##:---------%%###=-#+***************:------:",
      ":----**:---****************##*-------:##=%%%####%********************-------:",
      "*----**---****************@##+-----+##:-+@*%%=*****************:--:----:",
      "*----*---:****************%%###*--@#=-----=%%******************:--:*----:",
      ":-------:***************@%%*@#####*-------+@*****************:--:**----:",
      ":-------**************@#@-@@@#@---------:#*****************:---***----:",
      ":------:*************+##+--:+----------%%@******************---****----:",
      ":------**************@##-------------@@******************:---*****----:",
      ":-----:**************##@----------+#%%*******************:---******----:",
      ":-----**************+##+---------@@********************:--:*******----:",
      ":----:**************%%##:----------*#******************---:********----:",
      ":----:**************###############@*****************---**********----:",
      ":----:***************+++=+++++++++*****************:--:***********----:",
      ":----*********************************************---:************----:",
      ":----:******************************************:--:**************----:",
      ":----:****************************************:---****************----:",
      ":----:***************************************---:*****************----:",
      "*-----*************************************---:*******************----*",
      "*-----:*********************************:---:*********%%#-----=****----*",
      "*------:******************************:---***********+#+-----@****----*",
      "*-------:**************************:---:************#*----=+:@****----*",
      "*----*----:*********************:---:**************#=--:@%%=@******----*",
      "*----**:----:***************:----:****************+=#%%@---%%+******----*",
      "*----*****:-------::::-------:*******************#-=+----*%%*******----*",
      "*----*********::------:::***********************%%@-----+@*********----*",
      "*----*******************************************#+----:@*********:----*",
      "*-----******************************************+====++**********-----*",
      "*-------:*****************************************************:-------*"};
     for(int i = 0; i < 50;i++){
         printf(arr[i]);
         printf("\n");
     }
}