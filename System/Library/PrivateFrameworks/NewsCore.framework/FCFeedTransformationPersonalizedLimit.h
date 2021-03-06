/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@protocol FCFeedPersonalizing;
@class FCDateRange, NSString;

@interface FCFeedTransformationPersonalizedLimit : NSObject <FCFeedTransforming> {

	id<FCFeedPersonalizing> _feedPersonalizer;
	FCDateRange* _dateRange;

}

@property (nonatomic,retain) id<FCFeedPersonalizing> feedPersonalizer;              //@synthesize feedPersonalizer=_feedPersonalizer - In the implementation block
@property (nonatomic,retain) FCDateRange * dateRange;                               //@synthesize dateRange=_dateRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationWithPersonalizer:(id)arg1 dateRange:(id)arg2 ;
-(id)transformFeedItems:(id)arg1 ;
-(FCDateRange *)dateRange;
-(void)setDateRange:(FCDateRange *)arg1 ;
-(id<FCFeedPersonalizing>)feedPersonalizer;
-(void)setFeedPersonalizer:(id<FCFeedPersonalizing>)arg1 ;
@end

