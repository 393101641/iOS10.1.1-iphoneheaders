/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSObject;

@interface CFCommandQueuer : NSObject {

	NSObject*<OS_dispatch_group> _commandGroup;
	NSObject*<OS_dispatch_queue> _commandQueue;

}

@property (retain) NSObject*<OS_dispatch_group> commandGroup;              //@synthesize commandGroup=_commandGroup - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> commandQueue;              //@synthesize commandQueue=_commandQueue - In the implementation block
+(id)sharedInstance;
-(void)initQueues;
-(NSObject*<OS_dispatch_queue>)commandQueue;
-(void)setCommandQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dispatchOneWayCommand:(id)arg1 withServiceHelper:(id)arg2 replyWithMetrics:(/*^block*/id)arg3 ;
-(void)dispatchCommand:(id)arg1 withServiceHelper:(id)arg2 replyWithMetrics:(/*^block*/id)arg3 ;
-(void)dispatchBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_group>)commandGroup;
-(void)dispatchCommand:(id)arg1 isOneWay:(BOOL)arg2 withServiceHelper:(id)arg3 replyWithMetrics:(/*^block*/id)arg4 ;
-(void)setCommandGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end

