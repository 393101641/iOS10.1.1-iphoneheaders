/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSMetricsEventController, NSString;

@interface AnalyticsReportingOperation : ISOperation {

	SSMetricsEventController* _controller;
	NSString* _directory;
	/*^block*/id _finishBlock;
	long long _insertTimestamp;

}

@property (copy) id finishBlock; 
-(BOOL)_runForReportingURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_shouldBackoffAfterError:(id)arg1 ;
-(void)_destroyOutputFile:(id)arg1 ;
-(id)_signatureWithData:(id)arg1 error:(id*)arg2 ;
-(BOOL)_shouldClearEventsDespiteError:(id)arg1 ;
-(id)init;
-(void)run;
-(id)_path;
-(id)initWithController:(id)arg1 ;
-(id)finishBlock;
-(void)setFinishBlock:(id)arg1 ;
-(id)uniqueKey;
@end

