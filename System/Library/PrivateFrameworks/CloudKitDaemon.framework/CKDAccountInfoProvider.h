/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKDAccountInfoProvider <NSObject>
@property (nonatomic,readonly) BOOL isAnonymousAccount; 
@property (nonatomic,readonly) BOOL isUnitTestingAccount; 
@property (nonatomic,readonly) BOOL accountWantsPushRegistration; 
@property (nonatomic,readonly) BOOL canAccessAccount; 
@optional
-(id)additionalHeaderValues;
-(void)noteTimeSpentInNetworking:(double)arg1;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
-(void)noteFailedNetworkRequest;
-(void)noteFailedProtocolRequest;

@required
-(id)config;
-(id)languageCode;
-(id)containerID;
-(id)dsid;
-(BOOL)isAnonymousAccount;
-(void)fetchContainerScopedUserIDUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(BOOL)isUnitTestingAccount;
-(id)serverPreferredPushEnvironment;
-(BOOL)accountWantsPushRegistration;
-(BOOL)canAccessAccount;
-(id)containerScopedUserID;
-(id)mescalSession;
-(id)hardwareID;
-(void)renewAuthTokenWithReason:(id)arg1 failedToken:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)fetchConfigurationUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)resetMescalSession;
-(void)renewMescalSessionForRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(id)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2;
-(void)fetchPublicURLUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 serverType:(long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)fetchPrivateURLWithServerType:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchDeviceIDUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)cloudKitAuthTokenWithCompletionHandler:(/*^block*/id)arg1;
-(BOOL)shouldFailAllTasks;
-(void)iCloudAuthTokenWithCompletionHandler:(/*^block*/id)arg1;
-(id)trafficContainerIdentifier;
-(id)bundleID;
-(id)deviceName;
-(id)regionCode;
-(id)enabledKeyboards;
-(id)applicationBundle;

@end

