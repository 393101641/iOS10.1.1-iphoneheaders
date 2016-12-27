/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMFocusLockWithLensPositionCommand : CAMCaptureCommand {

	float __lensPosition;
	/*^block*/id __completionBlock;

}

@property (assign,setter=_setLensPosition:,nonatomic) float _lensPosition;               //@synthesize _lensPosition=__lensPosition - In the implementation block
@property (setter=_setCompletionBlock:,nonatomic,copy) id _completionBlock;              //@synthesize _completionBlock=__completionBlock - In the implementation block
+(float)currentLensPositionSentinel;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_completionBlock;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setCompletionBlock:(/*^block*/id)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(void)_setLensPosition:(float)arg1 ;
-(float)_lensPosition;
-(id)initWithLensPosition:(float)arg1 completionBlock:(/*^block*/id)arg2 ;
@end
