/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOPDSimpleRestaurantMenuText : PBCodable <NSCopying> {

	NSMutableArray* _menuGroups;

}

@property (nonatomic,retain) NSMutableArray * menuGroups;              //@synthesize menuGroups=_menuGroups - In the implementation block
+(Class)menuGroupType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearMenuGroups;
-(void)addMenuGroup:(id)arg1 ;
-(unsigned long long)menuGroupsCount;
-(id)menuGroupAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)menuGroups;
-(void)setMenuGroups:(NSMutableArray *)arg1 ;
@end

