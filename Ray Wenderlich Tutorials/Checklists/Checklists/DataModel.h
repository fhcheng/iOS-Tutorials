//
//  DataModel.h
//  Checklists
//
//  Created by Michael Welburn on 12/25/13.
//  Copyright (c) 2013 welburn. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataModel : NSObject

@property (nonatomic, strong) NSMutableArray *lists;

- (void)saveChecklists;
- (NSInteger)indexOfSelectedChecklist;
- (void)setIndexOfSelectedChecklist:(NSInteger)index;
- (void)sortChecklists;

+ (NSInteger)nextChecklistItemId;

@end
