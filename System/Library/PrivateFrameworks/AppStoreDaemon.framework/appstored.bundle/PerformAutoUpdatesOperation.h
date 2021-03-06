/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSMutableArray;

@interface PerformAutoUpdatesOperation : ISOperation {

	NSMutableArray* _updatesPurchases;
	BOOL _isBackgroundRequest;

}

@property (assign,nonatomic) BOOL isBackgroundRequest;              //@synthesize isBackgroundRequest=_isBackgroundRequest - In the implementation block
-(id)_newUpdateWithStoreItemData:(id)arg1 ;
-(id)_purchaseWithSoftwareUpdate:(id)arg1 ;
-(void)_addUpdatePurchase:(id)arg1 ;
-(void)_scheduleCellularTransitionsAfterTime:(id)arg1 ;
-(void)_createAccountPurchases:(id)arg1 ;
-(void)_modifyPurchaseUpdatesState:(id)arg1 withState:(long long)arg2 ;
-(id)_createJobsWithPurchaseResponse:(id)arg1 ;
-(void)_removeUpdatePurchase:(id)arg1 ;
-(id)_newManifestWithStorePurchaseItems:(id)arg1 accountID:(id)arg2 accountName:(id)arg3 ;
-(id)_purchaseWithSoftwareUpdate:(id)arg1 forApplication:(id)arg2 ;
-(id)_newBackgroundActivityJobWithStartTime:(id)arg1 interval:(double)arg2 ;
-(void)setIsBackgroundRequest:(BOOL)arg1 ;
-(BOOL)isBackgroundRequest;
-(id)init;
-(void)run;
-(id)initWithUpdates:(id)arg1 ;
-(id)_requestProperties;
@end

