/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <Preferences/PSSetupController.h>
#import <libobjc.A.dylib/CNFRegFirstRunDelegate.h>

@protocol CNFRegWizardControllerDelegate;
@class CNFRegController, _UIBackdropView, NSString;

@interface CNFRegWizardController : PSSetupController <CNFRegFirstRunDelegate> {

	CNFRegController* _regController;
	long long _serviceType;
	id<CNFRegWizardControllerDelegate> _firstRunDelegate;
	id _resignListener;
	id _resumeListener;
	struct {
		unsigned automaticKeyboardWasDisabled : 1;
		unsigned shouldListenForSuspension : 1;
		unsigned canStartNested : 1;
		unsigned canShowSplashScreen : 1;
		unsigned canShowDisabledScreen : 1;
		unsigned hideLearnMoreButton : 1;
		unsigned showSplashOnSignin : 1;
		unsigned skipReloadOnNextViewWillAppear : 1;
		unsigned allowCancel : 1;
		unsigned allowSMS : 1;
		unsigned shouldTerminateInBackground : 1;
	}  _wizardFlags;
	_UIBackdropView* _backdropView;

}

@property (nonatomic,retain) CNFRegController * regController;                                 //@synthesize regController=_regController - In the implementation block
@property (assign,nonatomic) BOOL shouldListenForSuspension; 
@property (assign,nonatomic) BOOL shouldTerminateInBackground; 
@property (assign,nonatomic) id<CNFRegWizardControllerDelegate> firstRunDelegate;              //@synthesize firstRunDelegate=_firstRunDelegate - In the implementation block
@property (assign,nonatomic) BOOL canStartNested; 
@property (assign,nonatomic) BOOL canShowSplashScreen; 
@property (assign,nonatomic) BOOL canShowDisabledScreen; 
@property (assign,nonatomic) BOOL allowCancel; 
@property (assign,nonatomic) BOOL allowSMS; 
@property (assign,nonatomic) BOOL hideLearnMoreButton; 
@property (assign,nonatomic) BOOL showSplashOnSignin; 
@property (nonatomic,retain) _UIBackdropView * backdropView;                                   //@synthesize backdropView=_backdropView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setGlobalAppearanceStyle:(long long)arg1 ;
+(void)setSupportsAutoRotation:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(void)applicationWillSuspend;
-(void)_applicationDidEnterBackground;
-(void)applicationDidResume;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(id)popViewControllerWithTransition:(int)arg1 ;
-(void)pushViewController:(id)arg1 transition:(int)arg2 ;
-(_UIBackdropView *)backdropView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(void)setupController;
-(CNFRegController *)regController;
-(void)setRegController:(CNFRegController *)arg1 ;
-(id)initWithRegController:(id)arg1 ;
-(void)firstRunController:(id)arg1 finishedWithState:(unsigned long long)arg2 ;
-(void)_restrictionsChanged;
-(void)_applicationDidFinishLaunching;
-(id)initWithServiceTypes:(long long)arg1 ;
-(void)_stopListeningForResignResume;
-(BOOL)shouldShowFirstRunController;
-(BOOL)shouldTerminateInBackground;
-(void)setShouldTerminateInBackground:(BOOL)arg1 ;
-(int)_firstRunState:(id)arg1 ;
-(BOOL)canShowSplashScreen;
-(BOOL)canShowDisabledScreen;
-(id)controllerClassesToShow:(BOOL)arg1 ;
-(void)setHideLearnMoreButton:(BOOL)arg1 ;
-(void)_doCancel;
-(id)controllersToShow:(BOOL)arg1 ;
-(void)_updateNavigationBarTitle;
-(void)_updateNavigationBarHiddenForCurrentState;
-(void)_updateNavigationBarHiddenForPop;
-(void)_updateNavigationBarHiddenForPush;
-(void)_startListeningForResignResume;
-(void)_checkRestrictions;
-(void)dismissFinished:(BOOL)arg1 ;
-(void)dismissWithState:(unsigned long long)arg1 ;
-(id)controllersToShow;
-(BOOL)canStartNested;
-(void)setCanStartNested:(BOOL)arg1 ;
-(void)setCanShowSplashScreen:(BOOL)arg1 ;
-(void)setCanShowDisabledScreen:(BOOL)arg1 ;
-(BOOL)skipReloadOnNextViewWillAppear;
-(void)setSkipReloadOnNextViewWillAppear:(BOOL)arg1 ;
-(BOOL)shouldListenForSuspension;
-(void)setShouldListenForSuspension:(BOOL)arg1 ;
-(BOOL)allowCancel;
-(void)setAllowCancel:(BOOL)arg1 ;
-(BOOL)allowSMS;
-(void)setAllowSMS:(BOOL)arg1 ;
-(BOOL)hideLearnMoreButton;
-(BOOL)showSplashOnSignin;
-(void)setShowSplashOnSignin:(BOOL)arg1 ;
-(id<CNFRegWizardControllerDelegate>)firstRunDelegate;
-(void)setFirstRunDelegate:(id<CNFRegWizardControllerDelegate>)arg1 ;
@end

