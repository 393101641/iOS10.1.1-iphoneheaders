/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, MPCJinglePlayActivityReportingController;

@interface MPCRadioGetTracksController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	MPCJinglePlayActivityReportingController* _jinglePlayActivityReportingController;

}

@property (nonatomic,retain) MPCJinglePlayActivityReportingController * jinglePlayActivityReportingController;              //@synthesize jinglePlayActivityReportingController=_jinglePlayActivityReportingController - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)getTracksWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(MPCJinglePlayActivityReportingController *)jinglePlayActivityReportingController;
-(void)setJinglePlayActivityReportingController:(MPCJinglePlayActivityReportingController *)arg1 ;
@end
