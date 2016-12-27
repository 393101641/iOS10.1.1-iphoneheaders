/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class _UIFallbackPresentationWindow, UIWindow;

@interface _UIFallbackPresentationViewController : UIViewController {

	_UIFallbackPresentationWindow* _presentationWindow;
	BOOL _hasPreservedKeyboardInputViews;
	BOOL _hasDismissCompletionHandler;
	UIWindow* _rotationDecider;
	/*^block*/id _presentationPreparationBlock;

}

@property (assign,nonatomic) BOOL hasPreservedKeyboardInputViews;              //@synthesize hasPreservedKeyboardInputViews=_hasPreservedKeyboardInputViews - In the implementation block
@property (assign,nonatomic) BOOL hasDismissCompletionHandler;                 //@synthesize hasDismissCompletionHandler=_hasDismissCompletionHandler - In the implementation block
@property (nonatomic,retain) UIWindow * rotationDecider;                       //@synthesize rotationDecider=_rotationDecider - In the implementation block
@property (nonatomic,copy) id presentationPreparationBlock;                    //@synthesize presentationPreparationBlock=_presentationPreparationBlock - In the implementation block
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewDidLoad;
-(void)_preparePresentationControllerForPresenting:(id)arg1 ;
-(void)_dismissViewControllerWithTransition:(int)arg1 from:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_preserveInputViewsAnimated:(BOOL)arg1 ;
-(void)_restoreInputViewsAnimated:(BOOL)arg1 ;
-(void)setRotationDecider:(UIWindow *)arg1 ;
-(void)setHasDismissCompletionHandler:(BOOL)arg1 ;
-(BOOL)hasDismissCompletionHandler;
-(void)setHasPreservedKeyboardInputViews:(BOOL)arg1 ;
-(BOOL)hasPreservedKeyboardInputViews;
-(void)_presentViewController:(id)arg1 sendingView:(id)arg2 animated:(BOOL)arg3 ;
-(UIWindow *)rotationDecider;
-(id)presentationPreparationBlock;
-(void)setPresentationPreparationBlock:(id)arg1 ;
@end
