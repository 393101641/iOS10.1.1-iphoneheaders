/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebContentAnalysis/WebContentAnalysis-Structs.h>
#import <WebContentAnalysis/WFLSMMap.h>

@interface WFLSMScoreNormalizedMap : WFLSMMap {

	float* maxScore;
	float* minScore;

}
-(void)dealloc;
-(id)initWithMap:(LSMMapRef)arg1 ;
-(id)evaluate:(id)arg1 ;
@end

