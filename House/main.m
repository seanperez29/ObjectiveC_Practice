//
//  main.m
//  House
//
//  Created by Sean Perez on 10/7/16.
//  Copyright © 2016 SeanPerez. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "House.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        House *myHouse = [[House alloc] init];
        NSLog(@"%@", myHouse.address);
        NSLog(@"Hello, World!");
    }
    return 0;
}
