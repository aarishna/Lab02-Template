#include <stdio.h>
#include <math.h>
int main(){
    float coordinate_1,coordinate_2;
    float coordinate_3,coordinate_4;
    float coordinate_5,coordinate_6;
    printf("Point 1: ");
    if (scanf(" ( %f , %f )",&coordinate_1,&coordinate_2)==0)
    {return 1;}
    
    printf("Point 2: ");
    if (scanf(" ( %f , %f )",&coordinate_3,&coordinate_4)==0)
    {return 1;}
   
    printf("Point 3: ");
    if (scanf(" ( %f , %f )",&coordinate_5,&coordinate_6)==0)
    {return 1;}
    
	
    float distance_ab = sqrtf((coordinate_3-coordinate_1)*(coordinate_3-coordinate_1) + (coordinate_4-coordinate_2)*(coordinate_4-coordinate_2));
    float distance_bc = sqrtf((coordinate_5-coordinate_3)*(coordinate_5-coordinate_3) + (coordinate_6-coordinate_4)*(coordinate_6-coordinate_4));
    float distance_ac = sqrtf((coordinate_5-coordinate_1)*(coordinate_5-coordinate_1) + (coordinate_6-coordinate_2)*(coordinate_6-coordinate_2));
    int least_distance_1;   
    float least_distance;
    printf("\n");
    if (distance_ab==distance_bc && distance_ab==distance_ac)
    {
        printf("All points are equal distance: %.2f\n",distance_ab);
        return 0;
    }
    if (distance_ab==distance_bc)
    {
        least_distance=distance_ab;
        
        if ((least_distance>1000)){least_distance_1=least_distance/1000;}
        printf("P1<->P2: %d,%.2f\n",least_distance_1,least_distance-=least_distance_1*1000);
        printf("P2<->P3: %d,%.2f\n",least_distance_1,least_distance);
        return 0;
    }
    else if (distance_ab==distance_ac)
    {
        least_distance=distance_ab;
	
        if ((least_distance>1000)){least_distance_1=least_distance/1000;}
        printf("P1<->P2: %d,%.2f\n",least_distance_1,least_distance-=least_distance_1*1000);
        printf("P1<->P3: %d,%.2f\n",least_distance_1,least_distance);
        return 0;
    }

    if (distance_ab < distance_bc && distance_ab < distance_ac)
    {least_distance=distance_ab;}

    else if (distance_bc < distance_ab && distance_bc < distance_ac)
    {least_distance = distance_bc;}
        
    else
    {least_distance=distance_ac;}
    
        
    
    if (least_distance>1000)
    {least_distance_1=least_distance/1000;}
    

    
    if(least_distance==distance_ab && least_distance_1)
    {
        printf("P1<->P2: %d,%.2f\n",least_distance_1,least_distance-=least_distance_1*1000);
    }
    else if (least_distance==distance_ab)
    {
        printf("P1<->P2: %.2f\n",least_distance);
    }
    else if(least_distance==distance_bc && least_distance_1)
    {
        printf("P2<->P3: %d,%.2f\n",least_distance_1,least_distance-=least_distance_1*1000);
    }
    else if (least_distance==distance_bc)
    {
        printf("P2<->P3: %.2f\n",least_distance);
    }
    else if(least_distance==distance_ac && least_distance_1)
    {
        printf("P1<->P3: %d,%.2f\n",least_distance_1,least_distance-=least_distance_1*1000);
    }
    else if (least_distance==distance_ac)
    {
        printf("P1<->P3: %.2f\n",least_distance);
    }


return 0;
}
