/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLCache.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableArray, NSObject;

@interface __NSCFMemoryURLCache : NSURLCache {

	id _internal;
	unsigned long long _memoryCapacity;
	unsigned long long _currentLength;
	NSMutableDictionary* _memoryStorage;
	NSMutableArray* _memoryStorageLRU;
	NSObject*<OS_dispatch_queue> _memoryQueue;

}
+(void)initialize;
-(id)initByCallingSuperSuperInit;
-(id)initEmptyCache;
-(id)initMemoryCache;
-(unsigned long long)currentMemoryUsage;
-(void)dealloc;
-(id)description;
-(id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 diskPath:(id)arg3 ;
-(unsigned long long)diskCapacity;
-(unsigned long long)memoryCapacity;
-(void)setMemoryCapacity:(unsigned long long)arg1 ;
-(void)setDiskCapacity:(unsigned long long)arg1 ;
-(id)cachedResponseForRequest:(id)arg1 ;
-(void)storeCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)removeCachedResponseForRequest:(id)arg1 ;
-(void)removeAllCachedResponses;
-(unsigned long long)currentDiskUsage;
@end

