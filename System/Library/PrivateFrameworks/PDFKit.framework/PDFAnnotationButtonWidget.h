/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/PDFAnnotation.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFAnnotationButtonWidgetPrivateVars;

@interface PDFAnnotationButtonWidget : PDFAnnotation <NSCopying> {

	PDFAnnotationButtonWidgetPrivateVars* _private2;

}
-(BOOL)accessibilityIsIgnored;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)setView:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(id)font;
-(int)rotation;
-(void)commonInit;
-(id)fieldName;
-(void)setFieldName:(id)arg1 ;
-(id)caption;
-(void)setCaption:(id)arg1 ;
-(id)fontColor;
-(void)setFontColor:(id)arg1 ;
-(long long)controlType;
-(BOOL)allowsToggleToOff;
-(void)setAllowsToggleToOff:(BOOL)arg1 ;
-(id)initWithAnnotationDictionary:(CGPDFDictionaryRef)arg1 forPage:(id)arg2 ;
-(void)drawPushButton:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)drawRadioButton:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)drawCheckBox:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)addNormalAndDownAppearanceToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addNormalAndDownAppearanceWithStateToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addNormalAppearanceWithStateToDictionaryRef:(CFDictionaryRef)arg1 ;
-(id)onStateValue;
-(void)setControlType:(long long)arg1 ;
-(void)setOnStateValue:(id)arg1 ;
-(void)secondaryInit;
-(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 ;
-(id)appearanceCharacteristics;
-(CFDictionaryRef)commonCreateDictionaryRef;
@end

