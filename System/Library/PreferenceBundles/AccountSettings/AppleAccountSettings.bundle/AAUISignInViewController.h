/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSAppleIDSplashViewController.h>
#import <libobjc.A.dylib/AAUIAccountCreationDelegate.h>

@class AAUIAccountCreationRemoteUI;

@interface AAUISignInViewController : PSAppleIDSplashViewController <AAUIAccountCreationDelegate> {

	AAUIAccountCreationRemoteUI* _remoteAccountCreationUI;
	/*^block*/id _appleIDCreationCompletion;

}
-(void)_handleiForgotActionURL:(id)arg1 ;
-(void)didCompleteSigningInWithAccount:(id)arg1 ;
-(void)handleURL:(id)arg1 ;
-(void)willBeginAuthWithContext:(id)arg1 ;
-(void)handleAuthCompletionWithResults:(id)arg1 ;
-(void)createNewAppleIDWithCompletion:(/*^block*/id)arg1 ;
-(id)serviceDescription;
-(id)serviceIcon;
-(void)accountCreationWillBeginWithAppleID:(id)arg1 password:(id)arg2 ;
-(void)accountCreationDidFailWithError:(id)arg1 ;
-(void)accountCreationDidSucceedWithAppleID:(id)arg1 password:(id)arg2 emailChoice:(id)arg3 ;
-(void)accountCreationWasCanceled;
-(BOOL)shouldAutomaticallySaveSignInResults;
-(id)accountChangeObserver;
-(id)serviceName;
@end
