//
//  Checklist.h
//  Checklists
//
//  Created by Michael Welburn on 12/22/13.
//  Copyright (c) 2013 welburn. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Checklist : NSObject <NSCoding>

@property (nonatomic, copy) NSString *name;
@property (nonatomic, strong) NSMutableArray *items;
@property (nonatomic, copy) NSString *iconName;

- (int)countUncheckedItems;

@end
