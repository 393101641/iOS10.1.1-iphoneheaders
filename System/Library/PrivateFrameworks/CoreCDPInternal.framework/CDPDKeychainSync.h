/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPDCircleProxy;
@interface CDPDKeychainSync : NSObject {

	id<CDPDCircleProxy> _circleProxy;

}
+(id)keyChainSync;
+(id)keyChainSyncWithProxy:(id)arg1 ;
+(id)_defaultUserVisibleViewSet;
-(BOOL)isUserVisibleKeychainSyncEnabled;
-(void)setUserVisibleKeychainSyncEnabled:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeNonViewAwarePeersFromCircleWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)synchronizeKeychainViewSetWithOtherPeers:(id*)arg1 ;
-(BOOL)_isThisDeviceInCircle;
-(BOOL)_setKeychainSyncState:(BOOL)arg1 ;
-(void)_preflightCircleStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)_processAuthFailure:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
