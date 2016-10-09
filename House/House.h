//
//  House.h
//  House
//
//  Created by Sean Perez on 10/7/16.
//  Copyright © 2016 SeanPerez. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface House : NSObject

@property (nonatomic, copy) NSString *address;
@property (nonatomic, readonly) int numberOfBedrooms;
@property (nonatomic) BOOL hasHotTub;

@end
