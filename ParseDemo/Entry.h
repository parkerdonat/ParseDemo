//
//  Entry.h
//  DayX
//
//  Created by Joshua Howland on 10/2/14.
//  Copyright (c) 2014 DevMountain. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Parse/Parse.h>

@interface Entry : PFObject <PFSubclassing>

@property (nonatomic, retain) NSString * name;

+ (NSString *)parseClassName;

@end