/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DChartMeshSharedChildResource.h>

@class TSCH3DDataBuffer;

@interface TSCH3DChartMeshSharedResource : TSCH3DChartMeshSharedChildResource {

	TSCH3DDataBuffer* mMesh;

}

@property (nonatomic,retain) TSCH3DDataBuffer * mesh; 
-(void)flushMemory;
-(void)setChildRegenerated:(BOOL)arg1 ;
-(void)setMesh:(TSCH3DDataBuffer *)arg1 ;
-(void)dealloc;
-(id)get;
-(TSCH3DDataBuffer *)mesh;
@end
