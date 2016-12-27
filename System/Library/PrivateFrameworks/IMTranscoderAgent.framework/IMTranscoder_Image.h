/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IMTranscoderAgent.framework/IMTranscoderAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMTranscoderAgent/IMTranscoderAgent-Structs.h>
#import <IMTranscoderAgent/IMTranscoder.h>

@interface IMTranscoder_Image : IMTranscoder
+(id)supportedUTIs;
-(long long)shouldTranscodeTransfer:(id)arg1 transcoderUserInfo:(id)arg2 target:(long long)arg3 utiType:(id)arg4 allowUnfilteredUTIs:(id)arg5 fileSizeLimit:(unsigned long long)arg6 ;
-(void)transcodeFileTransfer:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 maxDimension:(unsigned long long)arg6 transcoderUserInfo:(id)arg7 representations:(long long)arg8 completionBlock:(/*^block*/id)arg9 ;
-(BOOL)_isWideGamutImage:(CGImageSourceRef)arg1 ;
-(id)_writeImageData:(id)arg1 inFormat:(CFStringRef)arg2 sourceURL:(id)arg3 ;
-(id)_generateImage:(CGImageSourceRef)arg1 target:(long long)arg2 hardwareEncoder:(id)arg3 inFormat:(CFStringRef)arg4 fromFormat:(CFStringRef)arg5 withMaxLength:(unsigned long long)arg6 withMaxCount:(unsigned long long)arg7 enforceMaxes:(BOOL)arg8 subsampling:(int)arg9 ;
-(id)_writeImage:(CGImageSourceRef)arg1 sourceURL:(id)arg2 target:(long long)arg3 hardwareEncoder:(id)arg4 inFormat:(CFStringRef)arg5 fromFormat:(CFStringRef)arg6 withMaxByteSize:(unsigned long long)arg7 maxDimension:(unsigned long long)arg8 actualSize:(unsigned long long*)arg9 startingLengthIndex:(int)arg10 usedLengthIndex:(int*)arg11 ;
-(unsigned long long)_getImageWidth:(CGImageSourceRef)arg1 ;
-(id)_writeRepresentationsForImage:(CGImageSourceRef)arg1 target:(long long)arg2 sourceURL:(id)arg3 sizes:(id)arg4 maxDimension:(unsigned long long)arg5 srcUTI:(CFStringRef)arg6 inFormat:(CFStringRef)arg7 ;
-(id)_getScaleFactorArray:(id)arg1 transferURL:(id)arg2 outputURLs:(id)arg3 ;
@end
