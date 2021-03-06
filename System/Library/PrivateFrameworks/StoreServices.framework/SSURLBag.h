/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:38:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSXPCConnection, SSURLBagContext, NSDictionary, NSObject, NSMutableArray, NSString;

@interface SSURLBag : NSObject {

	SSXPCConnection* _connection;
	SSURLBagContext* _context;
	NSDictionary* _dictionary;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _expirationTime;
	BOOL _ignoreCacheForNextLookup;
	NSMutableArray* _pendingLookups;
	NSString* _storeFrontIdentifier;

}

@property (readonly) SSURLBagContext * URLBagContext; 
+(id)URLBagForContext:(id)arg1 ;
+(void)setURLBag:(id)arg1 forContext:(id)arg2 ;
-(void)_loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_drainPendingLookupsWithError:(id)arg1 ;
-(void)_loadURLBag;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)_connection;
-(void)loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)valueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValueForKey:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dispatchSync:(/*^block*/id)arg1 ;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(id)existingBagDictionary;
-(void)getTrustForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(SSURLBagContext *)URLBagContext;
-(id)initWithURLBagContext:(id)arg1 ;
@end

