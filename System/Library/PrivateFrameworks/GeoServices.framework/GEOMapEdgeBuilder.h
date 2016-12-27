/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder, GEOMapAccess;

@interface GEOMapEdgeBuilder : GEOMapRequest {

	BOOL _buildAhead;
	BOOL _buildBehind;
	Matrix<float, 2, 1> _firstTilePoint;
	Matrix<float, 2, 1> _lastTilePoint;
	GEOMapTileFinder* _currentTileFinder;
	/*^block*/id _edgeHandler;
	unordered_set<_GEOTileKey, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<_GEOTileKey> >* _tileKeysSeen;
	BOOL _searchDirection;
	unsigned long long _buildDirection;

}

@property (nonatomic,copy) id edgeHandler;                                   //@synthesize edgeHandler=_edgeHandler - In the implementation block
@property (nonatomic,readonly) GEOMapAccess * map; 
@property (assign,nonatomic) unsigned long long buildDirection;              //@synthesize buildDirection=_buildDirection - In the implementation block
-(void)cancel;
-(void)dealloc;
-(GEOMapAccess *)map;
-(unsigned long long)_maxTileCount;
-(void)_buildCompleteEdge;
-(BOOL)_findEdgeAheadInTile:(id)arg1 ;
-(BOOL)_findEdgeBehindInTile:(id)arg1 ;
-(BOOL)_shouldFindEdgeAhead;
-(BOOL)_shouldFindEdgeBehind;
-(Matrix<float, 2, 1>)_firstPoint;
-(Matrix<float, 2, 1>)_lastPoint;
-(id)_firstTile;
-(id)_lastTile;
-(id)_tileFinderForMap:(id)arg1 center:(SCD_Struct_GE26)arg2 radius:(double)arg3 ;
-(id)initWithMap:(id)arg1 ;
-(BOOL)_findEdgeAhead;
-(BOOL)_findEdgeBehind;
-(BOOL)_findNextEdge;
-(void)buildEdge:(/*^block*/id)arg1 ;
-(void)_findTilesAdjacentToTile:(const GEOTileKey*)arg1 containingPoint:(const Matrix<float, 2, 1>*)arg2 findAhead:(BOOL)arg3 ;
-(BOOL)_pointConnects:(const Matrix<float, 2, 1>*)arg1 rect:(const SCD_Struct_GE49*)arg2 to:(const SCD_Struct_GE26*)arg3 ;
-(BOOL)_edgeStart:(const Matrix<float, 2, 1>*)arg1 end:(const Matrix<float, 2, 1>*)arg2 connectsTo:(const Matrix<float, 2, 1>*)arg3 ;
-(id)edgeHandler;
-(void)setEdgeHandler:(id)arg1 ;
-(unsigned long long)buildDirection;
-(void)setBuildDirection:(unsigned long long)arg1 ;
@end
