/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BRCUserNotifier.h>

@class NSString;

@interface BRCUserNotificationNoPrompt : NSObject <BRCUserNotifier>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(void)moveToFront;
-(void)showJoinDialogForShareMetadata:(id)arg1 session:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)showErrorSignInToiCloudForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)showErrorTurnOniCloudDriveForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)showErrorInstallNativeAppForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)showErrorNativeAppDisabledByProfileForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)showErrorReasonUnknownForShareURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)showErrorDeviceOfflineForShareURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)showErrorServerNotReachableForShareURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)showErrorItemUnavailableOrAccessRestrictedForShareURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)showErrorParticipantLimitReachedForShareURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)showErroriCloudDriveAppNotVisibleForShareURL:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

