//
//  House.m
//  House
//
//  Created by Sean Perez on 10/7/16.
//  Copyright © 2016 SeanPerez. All rights reserved.
//

#import "House.h"

@interface House()

@property (nonatomic, readwrite) int numberOfBedrooms;

@end

@implementation House

-(instancetype)initWithAddress:(NSString*)address {
    self = [super init];
    
    if(self) {
        _address = address;
        _numberOfBedrooms = 2;
        _hasHotTub = false;
    }
    return self;
}

@end
