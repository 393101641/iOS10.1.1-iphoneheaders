/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEGeneratorDefaultBase.h>

@interface PAECheckerboard : PAEGeneratorDefaultBase
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(void)updateShapeParameter:(unsigned)arg1 atTime:(/*function pointer*/void**)arg2 ;
-(id)multiplyMatrix:(id)arg1 byMatrix:(id)arg2 ;
-(void)filteredEdges:(BOOL*)arg1 withInfo:(SCD_Struct_PA46*)arg2 ;
-(void)getTransformMatrix:(double*)arg1 forCenterX:(double)arg2 centerY:(double)arg3 angle:(double)arg4 andOutputImage:(id)arg5 ;
-(BOOL)canThrowRenderOutput:(id)arg1 withInfo:(SCD_Struct_PA46*)arg2 ;
-(BOOL)frameSetup:(SCD_Struct_PA46*)arg1 hardware:(BOOL*)arg2 software:(BOOL*)arg3 ;
-(BOOL)addParameters;
-(BOOL)variesOverTime;
-(BOOL)parameterChanged:(unsigned)arg1 ;
@end
