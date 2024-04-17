public class abc {

    public static void main(String[] args) {
        String a = "24/12/2003";
        String b = "14/11/2013";

        //find the totat no of days between these two given dates
        String day1 = "";
        String month1 = "";
        String year1 ="";

        String day2 = "";
        String month2 = "";
        String year2 ="";

        for(int i = 0; i <2;i++){
            day1+=a.charAt(i);
        }
        int days1 = Integer.parseInt(day1);
        System.out.println(days1);



        for(int i = 3; i < 5;i++){
            month1+=a.charAt(i);
        }
        int months1 = Integer.parseInt(month1);
        System.out.println(months1);
        
        
        for(int i = 6; i <10;i++){
            year1+=a.charAt(i);
        }
        int years1 = Integer.parseInt(year1);
        System.out.println(years1);




        for(int i = 0; i <2;i++){
            day2+=b.charAt(i);
        }
        int days2 = Integer.parseInt(day2);
        System.out.println(days2);



        for(int i = 3; i < 5;i++){
            month2+=b.charAt(i);
        }
        int months2 = Integer.parseInt(month2);
        System.out.println(months2);
        
        
        for(int i = 6; i <10;i++){
            year2+=b.charAt(i);
        }
        int years2 = Integer.parseInt(year2);
        System.out.println(years2);




        if(years1>years2){
            System.out.println("Error wrong in input as day2");
            return ;
        }


        int year_gap = years2-years1;

        int month_gap = months2-months1;

        int day_gap = days2-days1;

        if(month_gap<0){

        }



    }
}