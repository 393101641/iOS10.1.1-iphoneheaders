/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _DASNetworkEvaluationMonitor : NSObject {

	NSMutableDictionary* _networkPathEvaluators;
	/*^block*/id _callback;

}

@property (nonatomic,retain) NSMutableDictionary * networkPathEvaluators;              //@synthesize networkPathEvaluators=_networkPathEvaluators - In the implementation block
@property (nonatomic,copy) id callback;                                                //@synthesize callback=_callback - In the implementation block
+(id)sharedInstance;
-(void)stopMonitoringActivity:(id)arg1 ;
-(void)startMonitoringActivity:(id)arg1 withNetworkParameters:(id)arg2 withEndpoint:(id)arg3 ;
-(void)registerForNetworkEvaluationWithCallback:(/*^block*/id)arg1 ;
-(BOOL)isNetworkPathAvailableForActivity:(id)arg1 ;
-(void)setNetworkPathEvaluators:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)networkPathEvaluators;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
@end
