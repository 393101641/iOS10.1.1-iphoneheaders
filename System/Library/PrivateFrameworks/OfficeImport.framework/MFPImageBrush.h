/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/MFPBrush.h>

@class OITSUImage, OITSUColor;

@interface MFPImageBrush : MFPBrush {

	OITSUImage* mPhoneImage;
	OITSUColor* mPhonePatternColor;

}
-(void)dealloc;
-(id)color;
-(void)fillPath:(id)arg1 ;
-(id)initWithPhoneImage:(id)arg1 ;
@end

