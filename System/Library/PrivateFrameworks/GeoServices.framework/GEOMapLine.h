/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMapLine <NSObject>
@property (nonatomic,readonly) unsigned long long coordinateCount; 
@property (nonatomic,readonly) SCD_Struct_GE26* coordinates; 
@property (nonatomic,readonly) double length; 
@required
-(double)length;
-(double)distanceFromCoordinate:(SCD_Struct_GE26)arg1 outSegmentCoordinate:(PolylineCoordinate*)arg2;
-(unsigned long long)coordinateCount;
-(SCD_Struct_GE26*)coordinates;

@end

