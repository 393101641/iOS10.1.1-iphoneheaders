/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/UserEventPlugins/DuetKnowledgeEventAgentPlugin.plugin/DuetKnowledgeEventAgentPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate;


@protocol _DKHistoricalMonitor <_DKMonitor>
@property (nonatomic,copy) id historicalHandler; 
@property (nonatomic,readonly) NSDate * lastUpdate; 
@required
-(NSDate *)lastUpdate;
-(void)update;
-(id)historicalHandler;
-(void)setHistoricalHandler:(/*^block*/id)arg1;

@end
