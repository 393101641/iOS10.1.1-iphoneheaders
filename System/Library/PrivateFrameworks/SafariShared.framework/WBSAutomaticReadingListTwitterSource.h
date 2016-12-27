/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSAutomaticReadingListSocialSource.h>

@interface WBSAutomaticReadingListTwitterSource : WBSAutomaticReadingListSocialSource {

	unsigned long long _numberOfRequestsAllowedInRateLimitWindow;

}

@property (assign,nonatomic) unsigned long long numberOfRequestsAllowedInRateLimitWindow;              //@synthesize numberOfRequestsAllowedInRateLimitWindow=_numberOfRequestsAllowedInRateLimitWindow - In the implementation block
+(id)sharedSource;
-(id)serviceType;
-(Class)itemClass;
-(id)accountTypeIdentifier;
-(id)resourceURLString;
-(id)requestParametersForRecordsWithAge:(int)arg1 relativeTo:(id)arg2 ;
-(double)minimumTimeBetweenRequests;
-(void)updateMinimumTimeBetweenRequestsFromResponseHeaders:(id)arg1 ;
-(id)repostResourceURLStringForItem:(id)arg1 ;
-(unsigned long long)numberOfRequestsAllowedInRateLimitWindow;
-(void)setNumberOfRequestsAllowedInRateLimitWindow:(unsigned long long)arg1 ;
-(id)serviceName;
@end
