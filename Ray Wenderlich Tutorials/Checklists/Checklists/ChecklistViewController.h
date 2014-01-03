//
//  ChecklistsViewController.h
//  Checklists
//
//  Created by Mike Welburn on 11/29/13.
//  Copyright (c) 2013 welburn. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ItemDetailViewController.h"

@class Checklist;

@interface ChecklistViewController : UITableViewController <ItemDetailViewControllerDelegate>

@property (nonatomic, strong) Checklist *checklist;

@end
