//
//  Checklist.m
//  Checklists
//
//  Created by Michael Welburn on 12/22/13.
//  Copyright (c) 2013 welburn. All rights reserved.
//

#import "Checklist.h"
#import "ChecklistItem.h"

@implementation Checklist

- (id)init
{
    if ((self = [super init]))
    {
        self.items = [[NSMutableArray alloc] initWithCapacity:20];
        self.iconName = @"No Icon";
    }
    return self;
}

- (int)countUncheckedItems
{
    int count = 0;
    for (ChecklistItem *item in self.items)
    {
        if (!item.checked)
        {
            count++;
        }
    }
    return count;
}

- (id)initWithCoder:(NSCoder *)aDecoder
{
    if ((self = [super init]))
    {
        self.name = [aDecoder decodeObjectForKey:@"Name"];
        self.items = [aDecoder decodeObjectForKey:@"Items"];
        self.iconName = [aDecoder decodeObjectForKey:@"IconName"];
    }
    return self;
}

- (void)encodeWithCoder:(NSCoder *)aCoder
{
    [aCoder encodeObject:self.name forKey:@"Name"];
    [aCoder encodeObject:self.items forKey:@"Items"];
    [aCoder encodeObject:self.iconName forKey:@"IconName"];
}

- (NSComparisonResult)compare:(Checklist *)otherChecklist
{
    return [self.name localizedStandardCompare:otherChecklist.name];
}

@end
