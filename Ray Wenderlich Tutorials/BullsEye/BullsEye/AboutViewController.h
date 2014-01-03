//
//  AboutViewController.h
//  BullsEye
//
//  Created by Mike Welburn on 11/29/13.
//  Copyright (c) 2013 welburn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AboutViewController : UIViewController

@property (nonatomic, weak) IBOutlet UIWebView *webView;

- (IBAction)close;

@end
