/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPCNNBlock.h>

@class VCPCNNData, MPSCNNConvolution;

@interface VCPCNNConvBlock : VCPCNNBlock {

	int _filterSize;
	int _filterNum;
	VCPCNNData* _filter;
	VCPCNNData* _bias;
	int _chunk;
	BOOL _disableReLU;
	MPSCNNConvolution* _mpsConv;
	/*function pointer*/void* CalculateDotProductOfChunk;

}
-(int)constructBlock:(id)arg1 context:(id)arg2 ;
-(int)readFromDisk:(_sFILE*)arg1 quantFactor:(short)arg2 ;
-(BOOL)supportGPU;
-(BOOL)isFilterSizeSupported:(int)arg1 ;
-(int)gpuForward;
-(int)straightForward;
-(int)straightForwardForChunkFour;
-(int)chunkFourForward;
-(int)fillConvWeightsGPU;
-(void)inplaceReLUNeon:( *)arg1 count:(int)arg2 ;
-(id)initWithParameters:(int)arg1 filterNum:(int)arg2 chunk:(int)arg3 disableReLU:(BOOL)arg4 ;
-(int)forward;
-(BOOL)useGPU;
@end
