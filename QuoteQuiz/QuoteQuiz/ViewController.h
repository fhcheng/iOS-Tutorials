//
//  ViewController.h
//  QuoteQuiz
//
//  Created by Mike Welburn on 10/30/13.
//  Copyright (c) 2013 Mike Welburn. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "QuizTipViewController.h"

@class Quiz;

@interface ViewController : UIViewController <QuizTipViewControllerDelegate>

@property (nonatomic, assign) NSInteger quizIndex;
@property (nonatomic, strong) Quiz *quiz;

- (IBAction)ans1Action:(id)sender;
- (IBAction)ans2Action:(id)sender;
- (IBAction)ans3Action:(id)sender;
- (IBAction)startAgain:(id)sender;

@end
