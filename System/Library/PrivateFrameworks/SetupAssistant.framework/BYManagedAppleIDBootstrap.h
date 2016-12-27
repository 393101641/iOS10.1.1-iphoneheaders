/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AKAppleIDAuthenticationDelegate.h>

@class AKAppleIDAuthenticationContext, UMUserSwitchContext, NSString;

@interface BYManagedAppleIDBootstrap : NSObject <AKAppleIDAuthenticationDelegate> {

	AKAppleIDAuthenticationContext* _authContext;
	UMUserSwitchContext* _userSwitchContext;

}

@property (nonatomic,readonly) UMUserSwitchContext * userSwitchContext; 
@property (nonatomic,copy,readonly) NSString * shortLivedToken; 
@property (nonatomic,readonly) BOOL passwordChangeFlowNeedsToRun; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)delegateBundleIDsForManagedAccount;
+(BOOL)isMultiUser;
+(id)sharedManager;
-(BOOL)isLoginUser;
-(id)init;
-(void)dealloc;
-(NSString *)shortLivedToken;
-(UMUserSwitchContext *)userSwitchContext;
-(void)postUserSwitchContextHasBeenUsed;
-(void)recoverEMCSWithCompletion:(/*^block*/id)arg1 ;
-(void)_upgradeShortLivedTokenCompletion:(/*^block*/id)arg1 ;
-(BOOL)needsToUpgradeShortLivedToken;
-(BOOL)passwordChangeFlowNeedsToRun;
-(void)switchToLoginWindowDueToError:(id)arg1 ;
-(void)_runSilentLoginUpgradeWithCompletion:(/*^block*/id)arg1 ;
-(void)_createAppleAccountWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_languageConfigurationDictionary;
-(void)userSwitchContextHasBeenUsed;
-(void)ingestManagedBuddyData;
-(void)runSilentLoginUpgradeIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)writeAccountConfigurationIfNeededWithCompletion:(/*^block*/id)arg1 ;
@end
