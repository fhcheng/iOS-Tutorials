//
//  AllListsViewController.h
//  Checklists
//
//  Created by Michael Welburn on 12/22/13.
//  Copyright (c) 2013 welburn. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ListDetailViewController.h"

@class DataModel;

@interface AllListsViewController : UITableViewController <ListDetailViewControllerDelegate, UINavigationControllerDelegate>

@property (nonatomic, strong) DataModel *dataModel;

@end
