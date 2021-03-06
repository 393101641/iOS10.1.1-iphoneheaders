/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSDictionary, DKMutableResult, UIViewController, DATestViewController;

@interface DATestViewOperation : NSOperation {

	BOOL _cancelled;
	BOOL _executing;
	BOOL _finished;
	NSDictionary* _parameters;
	NSDictionary* _specifications;
	NSDictionary* _predicates;
	DKMutableResult* _testResult;
	UIViewController* _presentingViewController;
	DATestViewController* _weakViewController;

}

@property (assign,nonatomic,__weak) DATestViewController * weakViewController;              //@synthesize weakViewController=_weakViewController - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;                                     //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) NSDictionary * specifications;                                 //@synthesize specifications=_specifications - In the implementation block
@property (nonatomic,retain) NSDictionary * predicates;                                     //@synthesize predicates=_predicates - In the implementation block
@property (nonatomic,retain) DKMutableResult * testResult;                                  //@synthesize testResult=_testResult - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;                   //@synthesize presentingViewController=_presentingViewController - In the implementation block
-(void)cancel;
-(UIViewController *)presentingViewController;
-(void)start;
-(BOOL)isCancelled;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)_cancel;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)finish;
-(void)setPredicates:(NSDictionary *)arg1 ;
-(BOOL)isAsynchronous;
-(void)presentViewController:(id)arg1 ;
-(NSDictionary *)predicates;
-(void)_finish;
-(void)setWeakViewController:(DATestViewController *)arg1 ;
-(DATestViewController *)weakViewController;
-(NSDictionary *)specifications;
-(void)setSpecifications:(NSDictionary *)arg1 ;
-(DKMutableResult *)testResult;
-(void)setTestResult:(DKMutableResult *)arg1 ;
@end

