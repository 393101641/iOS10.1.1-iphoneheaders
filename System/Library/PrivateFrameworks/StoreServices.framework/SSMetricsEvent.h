/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:38:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SSMetricsEvent : NSObject
+(id)_globalCanaryLock;
+(id)globalEventCanary;
+(void)setGlobalEventCanary:(id)arg1 ;
-(BOOL)isFieldBlacklistEnabled;
-(BOOL)isBlacklistedByConfiguration:(id)arg1 ;
-(id)allTableEntityPropertiesPermittedByConfiguration:(id)arg1 externalValues:(id)arg2 ;
-(id)decorateReportingURL:(id)arg1 ;
-(BOOL)requiresDiagnosticSendingPermission;
-(id)_dictionaryRepresentationOfBody;
-(id)allTableEntityPropertiesPermittedByConfiguration:(id)arg1 ;
-(id)millisecondsFromTimeInterval:(double)arg1 ;
-(double)timeIntervalFromMilliseconds:(id)arg1 ;
-(void)appendPropertiesToBody:(id)arg1 ;
@end

