/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DFramebufferCopyPipeline.h>

@interface TSCH3DFramebufferOnepassBlurPipeline : TSCH3DFramebufferCopyPipeline {

	tvec2<float> mPixelSize;

}

@property (nonatomic,readonly) tvec2<float> pixelSize; 
+(id)pipelineWithProcessor:(id)arg1 session:(id)arg2 pixelSize:(const tvec2<float>*)arg3 ;
-(void)updateShaderEffectsStates;
-(id)initWithProcessor:(id)arg1 session:(id)arg2 pixelSize:(const tvec2<float>*)arg3 ;
-(void)dealloc;
-(tvec2<float>)pixelSize;
@end

