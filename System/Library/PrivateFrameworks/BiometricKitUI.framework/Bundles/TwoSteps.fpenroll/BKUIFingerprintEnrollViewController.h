/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/Bundles/TwoSteps.fpenroll/TwoSteps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TwoSteps/TwoSteps-Structs.h>
#import <TwoSteps/BKUIBundleEnrollViewController.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol OS_os_log;
@class BiometricKitIdentity, NSDate, NSTimer, NSString, UIView, UILabel, UIButton, BKUIAlertView, UIImageView, BKUICurvesView, BKUIRadarButton, NSMutableArray, NSLayoutConstraint, NSObject;

@interface BKUIFingerprintEnrollViewController : BKUIBundleEnrollViewController <UIAlertViewDelegate, CAAnimationDelegate> {

	BOOL _restartRequest;
	BOOL _willDisappear;
	BOOL _enrollmentPhaseTwo;
	BOOL _matchInProgress;
	long long _mesaEnrollSecondPhaseSteps;
	long long _ignoreTouchOffset;
	BiometricKitIdentity* _mesaEnrollFingerIdentity;
	NSDate* _enrollmentEndTime;
	NSTimer* _messageTimer;
	int _movedFingerCount;
	BOOL _movedFingerAlertShown;
	BOOL _stillFingerAlertShown;
	BOOL _showLiftYourFingerMsg;
	NSString* _lastPromptMessage;
	BOOL _cancelForRadar;
	BOOL _cancelForRestart;
	BOOL _displayingFirstTitle;
	BOOL _titleEffectFromBottomLeft;
	double _liftFingerMsgDelay;
	long long _msgTransType;
	long long _msgTransSubType1;
	long long _msgTransSubType2;
	double _msgTransLength;
	double _msgShowTimeout;
	BOOL _enrollInProgress;
	BOOL _waitInProgress;
	float _currentProgress;
	UIView* _mesaEnrollView;
	UIView* _mesaEnrollTextContainer;
	UILabel* _mesaEnrollTutorTitle;
	UILabel* _mesaEnrollTutorIntro;
	UILabel* _mesaEnrollTutorText;
	UILabel* _mesaEnrollTitle;
	UILabel* _mesaEnrollPrompt;
	UIButton* _mesaEnrollButton;
	UIButton* _mesaEnrollTutorContinueButton;
	UIButton* _mesaEnrollTutorSkipButton;
	BKUIAlertView* _alertView;
	UIView* _tutorialView;
	UIImageView* _mesaEnrollTutorImage;
	BOOL _mesaEnrollCompactContainer;
	UIView* _mesaEnrollContainer;
	BKUICurvesView* _mesaFirstEnrollView;
	BKUICurvesView* _mesaSecondEnrollView;
	BKUIRadarButton* _radarButton;
	UIView* _disclaimerView;
	UILabel* _disclaimerText;
	UIView* _mesaEnrollErrorButtonsContainer;
	UIButton* _mesaEnrollErrorButtonRestartEnroll;
	UIButton* _mesaEnrollErrorButtonSkipEnroll;
	UIView* _alertHudView;
	UILabel* _alertHudText;
	float _alertHudWhite;
	float _alertHudAlpha;
	float _alertHudCorners;
	float _alertHudBorder;
	BOOL _smallCoverageMessage;
	long long _smallCoverageCount;
	long long _smallCoverageInRowCount;
	long long _maxSmallCoverageCount;
	NSMutableArray* _mesaEnrollContainerConstraints;
	NSLayoutConstraint* _mesaEnrollViewLeadingConstraint;
	NSLayoutConstraint* _mesaEnrollViewTrailingConstraint;
	NSLayoutConstraint* _tutorialViewLeadingConstraint;
	NSLayoutConstraint* _tutorialViewTrailingConstraint;
	NSLayoutConstraint* _mesaEnrollTitleContainerLeadingConstraint;
	NSLayoutConstraint* _mesaEnrollTitleContainerTrailingConstraint;
	NSLayoutConstraint* _tutorTitleBorderLeadingConstraint;
	NSLayoutConstraint* _tutorTitleBorderTrailingConstraint;
	NSLayoutConstraint* _tutorIntroTextBorderLeadingConstraint;
	NSLayoutConstraint* _tutorIntroTextBorderTrailingConstraint;
	NSLayoutConstraint* _tutorTextBorderLeadingConstraint;
	NSLayoutConstraint* _tutorTextBorderTrailingConstraint;
	NSLayoutConstraint* _tutorTitleTopConstraint;
	NSLayoutConstraint* _mesaEnrollTitleTopConstraint;
	NSLayoutConstraint* _mesaEnrollContainerTopConstraint;
	NSLayoutConstraint* _tutorIntroHeightConstraint;
	NSLayoutConstraint* _tutorTextHeightConstraint;
	NSLayoutConstraint* _tutorContinueButtonHeightConstraint;
	NSLayoutConstraint* _tutorSkipButtonHeightConstraint;
	NSLayoutConstraint* _tutorIntroPhase1TopConstraint;
	NSLayoutConstraint* _tutorTextPhase2TopConstraint;
	NSLayoutConstraint* _tutorTextSettingsPhase1TopConstraint;
	NSLayoutConstraint* _tutorContinueBuddyPhase1TopConstraint;
	NSLayoutConstraint* _tutorContinuePhase2TopConstraint;
	NSLayoutConstraint* _tutorImageSettingsTopConstraint;
	NSLayoutConstraint* _tutorSkipBuddyTopConstraint;
	NSLayoutConstraint* _tutorImageBuddyTopConstraint;
	BOOL _inBuddy;
	CGSize _lastLayoutSize;
	NSString* _lastTutorialImageName;
	unsigned _userid;
	NSObject*<OS_os_log> bkui_result_delegate_log;
	NSObject*<OS_os_log> bkui_biometric_kit_delegate_log;
	NSObject*<OS_os_log> bkui_fingerprint_enroll_view_controller_log;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_finishEnrollmentPhaseTwo;
-(void)_updatePromptMessage:(id)arg1 ;
-(void)_stopTutorial;
-(void)_startTutorial:(BOOL)arg1 ;
-(void)skipEnrollmentPressed:(id)arg1 ;
-(void)_restartEnrollment;
-(double)_getSpecifiedOffsetWithType:(unsigned long long)arg1 ;
-(void)_updateTutorialLayoutPhaseTwo;
-(void)_cancelEnrollmentAndRestart:(BOOL)arg1 ;
-(id)_getTransSubTypeString:(long long)arg1 ;
-(void)_startEnrollmentMatch;
-(void)_failEnrollment:(int)arg1 withMessage:(id)arg2 ;
-(void)_stopBiometricOperations;
-(void)_setTutorHiddenWithAnimation:(BOOL)arg1 ;
-(void)_enrollHapticFeedback:(id)arg1 ;
-(void)_failEnrollmentAlertDismissed;
-(BOOL)_shouldUseCompactEnrollContainer;
-(void)_resetUI;
-(void)_radarTapped:(id)arg1 ;
-(void)_failEnrollmentWithAlert;
-(void)_messageTimeout;
-(id)bundleAlertView;
-(void)_showLiftYourFinger;
-(void)_setTutorialImage;
-(void)_showEnrollmentPhaseTwo;
-(void)tutorialContinueButtonPressed:(id)arg1 ;
-(void)_showLiftYourFingerWithDelay;
-(void)_showSkipEnrollmentAlert;
-(unsigned long long)_getDeviceViewType;
-(void)_setHiddenWithAnimation:(id)arg1 hidden:(BOOL)arg2 ;
-(void)respondToTapGesture:(id)arg1 ;
-(void)_startInitialTutorial:(BOOL)arg1 ;
-(void)_updateEnrollViewsForSize:(CGSize)arg1 ;
-(void)_showSmallCoverageAlertView;
-(void)initPromptMessage;
-(void)_showDirtOnSensorAlertView;
-(BOOL)_canFillRadars;
-(void)_startMessageTimer:(double)arg1 ;
-(void)_stopMessageTimer;
-(id)_getTransTypeString:(long long)arg1 ;
-(void)handleProgress:(unsigned)arg1 ;
-(void)_setFadeAnimation:(id)arg1 ;
-(void)tutorialSkipButtonPressed:(id)arg1 ;
-(void)_transitionPromptMessage:(BOOL)arg1 ;
-(void)_startEnroll;
-(void)_setButtonFontSize:(id)arg1 smallFont:(BOOL)arg2 ;
-(void)_cancelActiveEnrollOperation;
-(void)_hapticFeedback:(BOOL)arg1 ;
-(void)_cancelEnrollmentMatch;
-(void)_updateTutorialLayoutPhaseOne;
-(void)_safeBioKitDelegateClear;
-(void)restartEnrollPressed:(id)arg1 ;
-(void)_setTapRecognizer:(id)arg1 ;
-(void)_skipEnrollment;
-(void)_fileRadar;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(id)_titleFont;
-(void)_setConstraints;
-(id)_subtitleFont;
-(void)appDidEnterBackground:(id)arg1 ;
-(void)enrollResult:(id)arg1 ;
-(void)matchResult:(id)arg1 withDetails:(id)arg2 ;
-(void)statusMessage:(unsigned)arg1 ;
-(void)enrollProgress:(id)arg1 ;
-(void)homeButtonPressed;
-(void)restartEnroll;
-(void)continueButtonPressed:(id)arg1 ;
@end
