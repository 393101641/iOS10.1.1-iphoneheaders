/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOVLaneCharacteristic : PBCodable <NSCopying> {

	NSMutableArray* _laneDirections;
	NSMutableArray* _laneDividers;
	NSMutableArray* _laneTypes;
	unsigned _roadLaneCount;
	SCD_Struct_GE15 _has;

}

@property (assign,nonatomic) BOOL hasRoadLaneCount; 
@property (assign,nonatomic) unsigned roadLaneCount;                       //@synthesize roadLaneCount=_roadLaneCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * laneDividers;                //@synthesize laneDividers=_laneDividers - In the implementation block
@property (nonatomic,retain) NSMutableArray * laneDirections;              //@synthesize laneDirections=_laneDirections - In the implementation block
@property (nonatomic,retain) NSMutableArray * laneTypes;                   //@synthesize laneTypes=_laneTypes - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRoadLaneCount:(unsigned)arg1 ;
-(void)setHasRoadLaneCount:(BOOL)arg1 ;
-(BOOL)hasRoadLaneCount;
-(void)clearLaneDividers;
-(void)addLaneDivider:(id)arg1 ;
-(unsigned long long)laneDividersCount;
-(id)laneDividerAtIndex:(unsigned long long)arg1 ;
-(void)clearLaneDirections;
-(void)addLaneDirection:(id)arg1 ;
-(unsigned long long)laneDirectionsCount;
-(id)laneDirectionAtIndex:(unsigned long long)arg1 ;
-(void)clearLaneTypes;
-(void)addLaneType:(id)arg1 ;
-(unsigned long long)laneTypesCount;
-(id)laneTypeAtIndex:(unsigned long long)arg1 ;
-(unsigned)roadLaneCount;
-(NSMutableArray *)laneDividers;
-(void)setLaneDividers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)laneDirections;
-(void)setLaneDirections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)laneTypes;
-(void)setLaneTypes:(NSMutableArray *)arg1 ;
@end
