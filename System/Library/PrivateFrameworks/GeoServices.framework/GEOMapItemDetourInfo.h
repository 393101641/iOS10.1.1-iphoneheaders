/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDResultDetourInfo, NSData;

@interface GEOMapItemDetourInfo : NSObject {

	GEOPDResultDetourInfo* _detourInfo;

}

@property (getter=_detourInfo,nonatomic,readonly) GEOPDResultDetourInfo * detourInfo;              //@synthesize detourInfo=_detourInfo - In the implementation block
@property (nonatomic,readonly) double detourTime; 
@property (nonatomic,readonly) double timeToPlace; 
@property (nonatomic,readonly) double detourDistance; 
@property (nonatomic,readonly) double distanceToPlace; 
@property (nonatomic,readonly) NSData * detourInfoAsData; 
-(id)init;
-(void)dealloc;
-(id)_detourInfo;
-(id)initWithResultDetourInfo:(id)arg1 ;
-(double)detourTime;
-(double)timeToPlace;
-(double)detourDistance;
-(double)distanceToPlace;
-(NSData *)detourInfoAsData;
@end

