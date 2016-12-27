/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface _MDLProbeCluster : NSObject {

	NSMutableSet* _probes;
	 _centroid;

}

@property (assign)  centroid;                          //@synthesize centroid=_centroid - In the implementation block
@property (retain) NSMutableSet * probes;              //@synthesize probes=_probes - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEmpty;
-()centroid;
-(void)setCentroid:;
-(BOOL)isEqualToCluster:(id)arg1 ;
-(void)calculateCentroidNotIncludingSamplesinArray:(id)arg1 ;
-(void)setProbes:(NSMutableSet *)arg1 ;
-(NSMutableSet *)probes;
@end
