//
//  QuizTipViewController.h
//  QuoteQuiz
//
//  Created by Mike Welburn on 11/1/13.
//  Copyright (c) 2013 Mike Welburn. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol QuizTipViewControllerDelegate;

@interface QuizTipViewController : UIViewController

@property (nonatomic, assign) id <QuizTipViewControllerDelegate> delegate;
@property (weak, nonatomic) IBOutlet UITextView *tipView;
@property (nonatomic, copy) NSString *tipText;

- (IBAction)doneAction:(id)sender;

@end

@protocol QuizTipViewControllerDelegate

- (void)quizTipDidFinish:(QuizTipViewController *)controller;

@end
