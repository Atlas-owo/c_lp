//
//  main.c
//  P2089
//
//  Created by Atlas.owo on 18/11/1.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>
int sum(int s[10]);
int main(int argc, const char * argv[]) {
    int s[10] = {0};
    int n,i,count = 0;
    scanf("%d",&n);
    
    for(s[0] = 1; s[0] < 4; s[0]++){
        
        for(s[1] = 1; s[1] < 4; s[1]++){
            
            for(s[2] = 1; s[2] < 4; s[2]++){
                
                for(s[3] = 1; s[3] < 4; s[3]++){
                    
                    for(s[4] = 1; s[4] < 4; s[4]++){
                        
                        for(s[5] = 1; s[5] < 4; s[5]++){
                            
                            for(s[6] = 1; s[6] < 4; s[6]++){
                                
                                for(s[7] = 1; s[7] < 4; s[7]++){
                                    
                                    for(s[8] = 1; s[8] < 4; s[8]++){
                                        
                                        for(s[9] = 1; s[9] < 4; s[9]++){
                                            if(sum(s) > n){
                                                break;
                                            }
                                            
                                            if(sum(s) == n){
                                                /*
                                                 for(i = 0; i < 10; i++){
                                                    printf("%d ",s[i]);
                                                }
                                                printf("\n");
                                                 */
                                                count++;
                                                
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                }
                
            }
            
        }

        
    }
    
    if(count != 0)  printf("%d\n",count);
    
    for(s[0] = 1; s[0] < 4; s[0]++){
        
        for(s[1] = 1; s[1] < 4; s[1]++){
            
            for(s[2] = 1; s[2] < 4; s[2]++){
                
                for(s[3] = 1; s[3] < 4; s[3]++){
                    
                    for(s[4] = 1; s[4] < 4; s[4]++){
                        
                        for(s[5] = 1; s[5] < 4; s[5]++){
                            
                            for(s[6] = 1; s[6] < 4; s[6]++){
                                
                                for(s[7] = 1; s[7] < 4; s[7]++){
                                    
                                    for(s[8] = 1; s[8] < 4; s[8]++){
                                        
                                        for(s[9] = 1; s[9] < 4; s[9]++){
                                            if(sum(s) > n){
                                                break;
                                            }
                                            
                                            if(sum(s) == n){
                                                 for(i = 0; i < 10; i++){
                                                 printf("%d ",s[i]);
                                                 }
                                                 printf("\n");
                                                
                                                //count++;
                                                
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                }
                
            }
            
        }
        
        
    }

    
    if(count == 0)  printf("0");
    return 0;
}

int sum(int s[10]){
    int count = 0,i;
    for(i = 0; i < 10; i++){
        count += s[i];
    }
    return count;
}
