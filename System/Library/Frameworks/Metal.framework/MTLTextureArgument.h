/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLArgumentInternal.h>

@interface MTLTextureArgument : MTLArgumentInternal {

	unsigned _textureType : 15;
	unsigned _isDepthTexture : 1;
	unsigned short _textureDataType;
	unsigned short _textureArrayLength;

}
-(id)describe;
-(id)initWithName:(id)arg1 access:(unsigned long long)arg2 isActive:(BOOL)arg3 locationIndex:(unsigned long long)arg4 arraySize:(unsigned long long)arg5 dataType:(unsigned long long)arg6 textureType:(unsigned long long)arg7 isDepthTexture:(BOOL)arg8 ;
-(BOOL)isDepthTexture;
-(unsigned long long)textureDataType;
-(unsigned long long)textureType;
-(unsigned long long)arrayLength;
@end

