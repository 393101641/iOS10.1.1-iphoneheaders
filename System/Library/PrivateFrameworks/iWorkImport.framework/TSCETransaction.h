/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray;

@interface TSCETransaction : NSObject {

	unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >* _ownerUIDs;
	unordered_map<TSU::UUIDData<TSP::UUIDData>, std::__1::unordered_set<TSUCellCoord, TSCECellCoordinateHash, TSCECellCoordinateEqual, std::__1::allocator<TSUCellCoord> >, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, std::__1::unordered_set<TSUCellCoord, TSCECellCoordinateHash, TSCECellCoordinateEqual, std::__1::allocator<TSUCellCoord> > > > >* _cellsForOwnerUIDs;
	unordered_map<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> > > >* _resolverUIDForOwnerUID;
	NSMutableArray* _rewriteCommands;

}
-(UUIDData<TSP::UUIDData>)resolverUIDForOwnerUID:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(void)enumerateCellIDs:(/*^block*/id)arg1 ;
-(BOOL)isDeferringReplaceFormulaForOwnerUID:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(void)addCellID:(const TSUCellCoord*)arg1 inOwner:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(void)deferReplaceFormulaForOwnerUID:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(void)deferReplaceFormulaForOwnerUID:(const UUIDData<TSP::UUIDData>*)arg1 withResolverUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(void)dealloc;
-(id)description;
@end

