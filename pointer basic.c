       #include<stdio.h>

main(){
    int m=10;
    int n,o,*z;

        z=&m;  //placing m's address in z
        printf("\nvalue of z is %d",*z); // *z stores value of m


        printf("\naddress of z is %p",z); // z stores m's adress

        printf("\naddress of m is %p",&m); //&m stores m's address

        printf("\naddress of n is %p",&n); //&n stores address of n

        printf("\naddress of o is %p",&o); //&o stores address of o

        printf("\naddress of z is %p",&z);//&z stores address of z only (not m's address)
    // %d prints decimal
    //%p prints hexadecimal

return 0;

}






