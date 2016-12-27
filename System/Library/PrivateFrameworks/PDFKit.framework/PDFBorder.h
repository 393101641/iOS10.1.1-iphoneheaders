/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class PDFBorderPrivateVars, NSArray;

@interface PDFBorder : NSObject <NSCopying, NSCoding> {

	PDFBorderPrivateVars* _private;

}

@property (assign,nonatomic) long long style; 
@property (assign,nonatomic) double lineWidth; 
@property (nonatomic,retain) NSArray * dashPattern; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(long long)style;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(void)drawInRect:(CGRect)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(BOOL)isRectangular;
-(NSArray *)dashPattern;
-(id)initWithAnnotationDictionary:(CGPDFDictionaryRef)arg1 forPage:(id)arg2 ;
-(id)createDictionaryRef;
-(const double*)dashPatternRaw;
-(void)setDashPattern:(NSArray *)arg1 ;
-(void)setDashPatternRaw;
-(void)setStyleFromDictionary:(CGPDFDictionaryRef)arg1 ;
-(double)horizontalCornerRadius;
-(double)verticalCornerRadius;
-(void)setDashFromArray:(CGPDFArrayRef)arg1 ;
-(unsigned)dashCountRaw;
-(void)updateCornerBorderStyle;
-(void)setHorizontalCornerRadius:(double)arg1 ;
-(void)setVerticalCornerRadius:(double)arg1 ;
-(void)drawInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
@end
