//
//  ViewController.h
//  QuoteGen
//
//  Created by Michael Welburn on 10/27/13.
//  Copyright (c) 2013 Michael Welburn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (nonatomic, strong) NSArray *myQuotes;
@property (nonatomic, strong) NSMutableArray *movieQuotes;

@property (nonatomic, strong) IBOutlet UISegmentedControl *quoteOpt;
@property (nonatomic, strong) IBOutlet UITextView *quoteText;

- (IBAction)quoteButtonTapped:(id)sender;

@end
