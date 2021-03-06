/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSITunesStore.h>
@class NSString, NSDictionary;


@protocol IKJSITunesStore <JSExport>
@property (nonatomic,readonly) NSString * DSID; 
@property (nonatomic,readonly) NSDictionary * accountInfo; 
@property (nonatomic,readonly) NSString * userAgent; 
@property (nonatomic,readonly) NSString * networkConnectionType; 
@property (nonatomic,retain) NSString * storefront; 
@property (nonatomic,retain) NSString * cookieURL; 
@property (nonatomic,retain) id cookie; 
@property (getter=isManagedAppleID,nonatomic,readonly) BOOL managedAppleID; 
@required
-(id)eligibilityForService:(id)arg1;
-(NSString *)userAgent;
-(NSString *)storefront;
-(void)setStorefront:(id)arg1;
-(void)setCookie:(id)arg1;
-(id)cookie;
-(void)clearCookies;
-(id)getBag;
-(void)invalidateBag;
-(id)makeStoreXMLHttpRequest;
-(void)recordEvent:(id)arg1 :(id)arg2;
-(void)flushUnreportedEvents;
-(void)getServiceEligibility:(id)arg1 :(id)arg2;
-(void)loadStoreContent:(id)arg1 :(id)arg2;
-(void)evaluateScripts:(id)arg1 :(id)arg2;
-(void)authenticate:(id)arg1 :(id)arg2;
-(void)signOut;
-(void)updateServiceEligibility:(id)arg1;
-(NSDictionary *)accountInfo;
-(NSString *)networkConnectionType;
-(NSString *)cookieURL;
-(void)setCookieURL:(id)arg1;
-(BOOL)isManagedAppleID;
-(NSString *)DSID;

@end

#import <libobjc.A.dylib/JSExport.h>

@class NSString, NSDictionary, NSNumber, SSMetricsController, ISLoadURLBagOperation;

@interface IKJSITunesStore : IKJSObject <IKJSITunesStore, JSExport> {

	NSNumber* _lastAccountDSID;
	NSDictionary* _lastKnownStatusDictionary;
	SSMetricsController* _metricsController;
	os_unfair_lock_s _bagOperationLock;
	NSString* _storeFrontSuffix;
	id _ssAccountStoreChangedToken;
	id _isURLBagDidLoadToken;
	id _subscriptionStatusDidChangeToken;
	NSString* _cookieURL;
	ISLoadURLBagOperation* _pendingBagOperation;

}

@property (assign,nonatomic,__weak) ISLoadURLBagOperation * pendingBagOperation;              //@synthesize pendingBagOperation=_pendingBagOperation - In the implementation block
@property (nonatomic,retain) NSString * cookieURL;                                            //@synthesize cookieURL=_cookieURL - In the implementation block
@property (nonatomic,readonly) NSString * DSID; 
@property (nonatomic,readonly) NSDictionary * accountInfo; 
@property (nonatomic,readonly) NSString * userAgent; 
@property (nonatomic,readonly) NSString * networkConnectionType; 
@property (nonatomic,retain) NSString * storefront; 
@property (nonatomic,retain) id cookie; 
@property (getter=isManagedAppleID,nonatomic,readonly) BOOL managedAppleID; 
+(id)_URLBagContext;
+(void)setITunesStoreHeaders:(id)arg1 ;
+(void)setHeadersForURL:(id)arg1 inRequestProperties:(id)arg2 ;
-(id)eligibilityForService:(id)arg1 ;
-(void)dealloc;
-(NSString *)userAgent;
-(NSString *)storefront;
-(void)setStorefront:(NSString *)arg1 ;
-(void)setCookie:(id)arg1 ;
-(id)cookie;
-(void)_bagDidLoadNotification:(id)arg1 ;
-(void)_accountStoreChanged;
-(void)_subscriptionStatusChanged;
-(id)_subscriptionStatusDictionaryWithStatus:(id)arg1 isFinal:(BOOL)arg2 ;
-(void)_updateWithBag:(id)arg1 ;
-(void)_updateBag:(BOOL)arg1 ;
-(void)clearCookies;
-(ISLoadURLBagOperation *)pendingBagOperation;
-(void)setPendingBagOperation:(ISLoadURLBagOperation *)arg1 ;
-(id)getBag;
-(void)invalidateBag;
-(id)makeStoreXMLHttpRequest;
-(void)recordEvent:(id)arg1 :(id)arg2 ;
-(void)flushUnreportedEvents;
-(void)getServiceEligibility:(id)arg1 :(id)arg2 ;
-(void)loadStoreContent:(id)arg1 :(id)arg2 ;
-(void)evaluateScripts:(id)arg1 :(id)arg2 ;
-(void)authenticate:(id)arg1 :(id)arg2 ;
-(void)signOut;
-(void)updateServiceEligibility:(id)arg1 ;
-(NSDictionary *)accountInfo;
-(NSString *)networkConnectionType;
-(NSString *)cookieURL;
-(void)setCookieURL:(NSString *)arg1 ;
-(id)initWithAppContext:(id)arg1 ;
-(BOOL)isManagedAppleID;
-(NSString *)DSID;
@end

