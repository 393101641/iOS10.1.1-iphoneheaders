/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, BSInvalidatable, PKAuthenticatorDelegate;
@class NSObject, PKAuthenticatorEvaluationContext;

@interface PKAuthenticator : NSObject {

	unsigned long long _authenticationIdentifier;
	NSObject*<OS_dispatch_queue> _contextMutationQueue;
	BOOL _acquiringHintSupressionAssertion;
	id<BSInvalidatable> _hintSupressionAssertion;
	PKAuthenticatorEvaluationContext* _context;
	id<PKAuthenticatorDelegate> _delegate;
	double _fingerPresentTimeout;

}

@property (assign,nonatomic,__weak) id<PKAuthenticatorDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double fingerPresentTimeout;                                //@synthesize fingerPresentTimeout=_fingerPresentTimeout - In the implementation block
@property (nonatomic,readonly) unsigned long long authenticationIdentifier; 
@property (nonatomic,readonly) BOOL fingerPresent; 
@property (nonatomic,readonly) BOOL passcodeActive; 
@property (nonatomic,readonly) BOOL passphraseActive; 
@property (nonatomic,readonly) BOOL passcodeWasPresented; 
@property (nonatomic,readonly) BOOL fingerPresentTimeoutRequired; 
@property (nonatomic,readonly) BOOL fingerPresentTimeoutExpired; 
+(unsigned long long)currentStateForPolicy:(long long)arg1 ;
+(id)viewServiceBundleID;
+(void)preheatAuthenticator;
-(id)init;
-(void)setDelegate:(id<PKAuthenticatorDelegate>)arg1 ;
-(void)dealloc;
-(id<PKAuthenticatorDelegate>)delegate;
-(id)_context;
-(id)initWithDelegate:(id)arg1 ;
-(void)cancelEvaluation;
-(void)evaluateRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)fingerPresent;
-(BOOL)fingerPresentTimeoutRequired;
-(void)restartEvaluation;
-(void)setFingerPresentTimeout:(double)arg1 preventRestart:(BOOL)arg2 ;
-(unsigned long long)authenticationIdentifier;
-(void)evaluatePolicy:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setFingerPresentTimeout:(double)arg1 ;
-(void)fallbackToSystemPasscodeUI;
-(BOOL)_delegateSupportsPasscodePresentation;
-(BOOL)_delegateSupportsPassphrasePresentation;
-(BOOL)passcodeActive;
-(BOOL)passphraseActive;
-(BOOL)fingerPresentTimeoutExpired;
-(void)_contextChanged;
-(id)_swapContext:(id)arg1 ;
-(BOOL)_contextMatchesContext:(id)arg1 ;
-(id)_compareAndSwapWithCompareContext:(id)arg1 replacementContext:(id)arg2 ;
-(void)accessExternalizedContextWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)passcodeWasPresented;
-(double)fingerPresentTimeout;
@end
