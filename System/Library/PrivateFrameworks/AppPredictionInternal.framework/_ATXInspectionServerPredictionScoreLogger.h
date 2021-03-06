/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_ATXAppPredictorScoreLogger.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface _ATXInspectionServerPredictionScoreLogger : NSObject <_ATXAppPredictorScoreLogger> {

	NSMutableDictionary* _inputsAndSubscores;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)inputsAndSubscores;
-(void)logInputs:(id)arg1 subscores:(id)arg2 forBundleId:(id)arg3 ;
-(void)setPredictionClass:(id)arg1 ;
-(void)setAssetVersion:(int)arg1 ;
@end

