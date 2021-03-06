/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SpringBoardPlugins/FindMyiPhoneLockScreen.lockbundle/FindMyiPhoneLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <FindMyiPhoneLockScreen/SBLockScreenModalViewDelegate.h>
#import <libobjc.A.dylib/SBLockScreenPluginViewController.h>

@protocol SBLockScreenPluginController, SBLockScreenModalView, NSObject;
@class UIView, NSString;

@interface FMIPLockScreenViewController : UIViewController <SBLockScreenModalViewDelegate, SBLockScreenPluginViewController> {

	BOOL _isManagedLostmode;
	id<SBLockScreenPluginController> _pluginController;
	UIView*<SBLockScreenModalView> _lockScreenModalView;
	long long _currentState;
	id<NSObject> _lostModeChangedToken;
	id<NSObject> _simStatusChangedToken;
	id<NSObject> _registrationStatusChangedToken;

}

@property (nonatomic,retain) UIView*<SBLockScreenModalView> lockScreenModalView;                    //@synthesize lockScreenModalView=_lockScreenModalView - In the implementation block
@property (assign,nonatomic) long long currentState;                                                //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic) BOOL isManagedLostmode;                                                //@synthesize isManagedLostmode=_isManagedLostmode - In the implementation block
@property (nonatomic,retain) id<NSObject> lostModeChangedToken;                                     //@synthesize lostModeChangedToken=_lostModeChangedToken - In the implementation block
@property (nonatomic,retain) id<NSObject> simStatusChangedToken;                                    //@synthesize simStatusChangedToken=_simStatusChangedToken - In the implementation block
@property (nonatomic,retain) id<NSObject> registrationStatusChangedToken;                           //@synthesize registrationStatusChangedToken=_registrationStatusChangedToken - In the implementation block
@property (assign,nonatomic,__weak) id<SBLockScreenPluginController> pluginController;              //@synthesize pluginController=_pluginController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateLockScreenView;
-(void)callOwner:(id)arg1 ;
-(void)setCallButtonEnabled:(BOOL)arg1 ;
-(void)setIsManagedLostmode:(BOOL)arg1 ;
-(BOOL)isDeviceActivated;
-(void)setRegistrationStatusChangedToken:(id<NSObject>)arg1 ;
-(id<NSObject>)simStatusChangedToken;
-(id<NSObject>)lostModeChangedToken;
-(void)setLostModeChangedToken:(id<NSObject>)arg1 ;
-(void)setSimStatusChangedToken:(id<NSObject>)arg1 ;
-(void)setPluginController:(id<SBLockScreenPluginController>)arg1 ;
-(void)bottomButtonPressed:(id)arg1 ;
-(id<SBLockScreenPluginController>)pluginController;
-(void)setLockScreenModalView:(UIView*<SBLockScreenModalView>)arg1 ;
-(void)updateAppearance;
-(void)handlePrimaryActionForView:(id)arg1 ;
-(UIView*<SBLockScreenModalView>)lockScreenModalView;
-(id<NSObject>)registrationStatusChangedToken;
-(void)handleSecondaryActionForView:(id)arg1 ;
-(BOOL)isManagedLostmode;
-(BOOL)canCall;
-(void)dealloc;
-(long long)currentState;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setCurrentState:(long long)arg1 ;
-(BOOL)pluginAnimatesAppearanceTransition:(BOOL)arg1 ;
-(void)disable;
@end

