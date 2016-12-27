/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADEffect.h>

@class OADFill;

@interface OADFillOverlayEffect : OADEffect {

	int mBlendMode;
	OADFill* mFill;

}
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)fill;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(void)setFill:(id)arg1 ;
@end
