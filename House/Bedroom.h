//
//  Bedroom.h
//  House
//
//  Created by Sean Perez on 10/9/16.
//  Copyright © 2016 SeanPerez. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Bedroom.h"

typedef NS_ENUM(NSInteger, Direction) {
    North,
    South,
    East,
    West
};

@interface Bedroom : NSObject

@property (nonatomic) BOOL privateBath;
@property (nonatomic) Direction directionWindowFaces;

@property (nonatomic) Bedroom *frontBedroom;
@property (nonatomic) Bedroom *backBedroom;

@end
