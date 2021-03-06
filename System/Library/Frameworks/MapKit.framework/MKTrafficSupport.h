/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MKTrafficSupport : NSObject
+(id)sharedTrafficSupport;
-(void)setupTrafficIncidents;
-(long long)_convertType:(int)arg1 ;
-(id)localizedTitleForGEOIncidentType:(int)arg1 laneType:(int)arg2 laneCount:(unsigned long long)arg3 ;
-(id)localizedTitleForIncidentType:(long long)arg1 laneType:(long long)arg2 laneCount:(unsigned long long)arg3 ;
-(id)localizedSubtitleForStreet:(id)arg1 crossStreet:(id)arg2 ;
@end

