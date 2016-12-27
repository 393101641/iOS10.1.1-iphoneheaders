/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKMapTileList : NSObject {

	vector<VKMapTile *, std::__1::allocator<VKMapTile *> >* _list;
	float _maximumStyleZ;

}

@property (nonatomic,readonly) id* tileList; 
@property (nonatomic,readonly) unsigned long long numTiles; 
@property (nonatomic,readonly) float maximumStyleZ;                      //@synthesize maximumStyleZ=_maximumStyleZ - In the implementation block
-(id)init;
-(id*)tileList;
-(unsigned long long)numTiles;
-(float)maximumStyleZ;
-(void)consolidateList;
-(void)addTileToList:(id)arg1 ;
-(void)clearList;
@end
