/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLDetectedFace;

@interface PLKeyFacePicker : NSObject {

	int _largestNonManualFaceSizeWithSmileAndNoBlinkAboveThreshold;
	int _largestNonManualFaceSizeWithNoBlinkAboveThreshold;
	int _largestManualFaceSizeAboveThreshold;
	int _largestFaceSize;
	PLDetectedFace* _largestNonManualFaceWithSmileAndNoBlinkAboveThreshold;
	PLDetectedFace* _largestNonManualFaceWithNoBlinkAboveThreshold;
	PLDetectedFace* _largestManualFaceAboveThreshold;
	PLDetectedFace* _largestFace;

}

@property (assign,nonatomic) int largestNonManualFaceSizeWithSmileAndNoBlinkAboveThreshold;                       //@synthesize largestNonManualFaceSizeWithSmileAndNoBlinkAboveThreshold=_largestNonManualFaceSizeWithSmileAndNoBlinkAboveThreshold - In the implementation block
@property (nonatomic,retain) PLDetectedFace * largestNonManualFaceWithSmileAndNoBlinkAboveThreshold;              //@synthesize largestNonManualFaceWithSmileAndNoBlinkAboveThreshold=_largestNonManualFaceWithSmileAndNoBlinkAboveThreshold - In the implementation block
@property (assign,nonatomic) int largestNonManualFaceSizeWithNoBlinkAboveThreshold;                               //@synthesize largestNonManualFaceSizeWithNoBlinkAboveThreshold=_largestNonManualFaceSizeWithNoBlinkAboveThreshold - In the implementation block
@property (nonatomic,retain) PLDetectedFace * largestNonManualFaceWithNoBlinkAboveThreshold;                      //@synthesize largestNonManualFaceWithNoBlinkAboveThreshold=_largestNonManualFaceWithNoBlinkAboveThreshold - In the implementation block
@property (assign,nonatomic) int largestManualFaceSizeAboveThreshold;                                             //@synthesize largestManualFaceSizeAboveThreshold=_largestManualFaceSizeAboveThreshold - In the implementation block
@property (nonatomic,retain) PLDetectedFace * largestManualFaceAboveThreshold;                                    //@synthesize largestManualFaceAboveThreshold=_largestManualFaceAboveThreshold - In the implementation block
@property (assign,nonatomic) int largestFaceSize;                                                                 //@synthesize largestFaceSize=_largestFaceSize - In the implementation block
@property (nonatomic,retain) PLDetectedFace * largestFace;                                                        //@synthesize largestFace=_largestFace - In the implementation block
+(id)keyFaceFromFaces:(id)arg1 ;
-(void)dealloc;
-(id)keyFaceFromFaces:(id)arg1 ;
-(int)largestFaceSize;
-(void)setLargestFace:(PLDetectedFace *)arg1 ;
-(void)setLargestFaceSize:(int)arg1 ;
-(int)largestNonManualFaceSizeWithSmileAndNoBlinkAboveThreshold;
-(void)setLargestNonManualFaceWithSmileAndNoBlinkAboveThreshold:(PLDetectedFace *)arg1 ;
-(void)setLargestNonManualFaceSizeWithSmileAndNoBlinkAboveThreshold:(int)arg1 ;
-(int)largestNonManualFaceSizeWithNoBlinkAboveThreshold;
-(void)setLargestNonManualFaceWithNoBlinkAboveThreshold:(PLDetectedFace *)arg1 ;
-(void)setLargestNonManualFaceSizeWithNoBlinkAboveThreshold:(int)arg1 ;
-(int)largestManualFaceSizeAboveThreshold;
-(void)setLargestManualFaceAboveThreshold:(PLDetectedFace *)arg1 ;
-(void)setLargestManualFaceSizeAboveThreshold:(int)arg1 ;
-(PLDetectedFace *)largestNonManualFaceWithSmileAndNoBlinkAboveThreshold;
-(PLDetectedFace *)largestNonManualFaceWithNoBlinkAboveThreshold;
-(PLDetectedFace *)largestManualFaceAboveThreshold;
-(PLDetectedFace *)largestFace;
@end
