/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface CKAbstractKnowledgeStorage : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)path;
+(id)instanceNamed:(id)arg1 ;
+(void)releaseInstanceNamed:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithPath:(id)arg1 name:(id)arg2 ;
@end
