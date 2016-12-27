/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUFlushableObject.h>

@class NSString, NSMutableDictionary;

@interface TSUCache : TSUFlushableObject {

	NSString* mCacheName;
	NSMutableDictionary* mCache;

}
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithName:(id)arg1 ;
-(void)unload;
-(BOOL)hasFlushableContent;
-(id)p_objectForKey:(id)arg1 ;
-(void)p_addEntriesFromDictionary:(id)arg1 ;
-(id)p_objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
@end
