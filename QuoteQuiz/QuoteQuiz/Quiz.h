//
//  Quiz.h
//  QuoteQuiz
//
//  Created by Mike Welburn on 10/30/13.
//  Copyright (c) 2013 Mike Welburn. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Quiz : NSObject

@property (nonatomic, strong) NSMutableArray *movieArray;
@property (nonatomic, assign) NSInteger correctCount;
@property (nonatomic, assign) NSInteger incorrectCount;
@property (nonatomic, assign) NSInteger quizCount;
@property (nonatomic, readonly, strong) NSString *quote;
@property (nonatomic, readonly, strong) NSString *ans1;
@property (nonatomic, readonly, strong) NSString *ans2;
@property (nonatomic, readonly, strong) NSString *ans3;
@property (nonatomic, assign) NSInteger tipCount;
@property (nonatomic, strong) NSString *tip;

- (id)initWithQuiz:(NSString*)plistName;
- (void)nextQuestion:(NSUInteger)idx;
- (BOOL)checkQuestion:(NSUInteger)question forAnswer:(NSUInteger)answer;

@end
