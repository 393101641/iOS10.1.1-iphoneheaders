/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface CertInfoDescriptionCellContentView : UIView {

	NSArray* _labelsAndValues;
	double _idealHeight;
	int _sizesCount;
	CGSize* _sizes;

}
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(double)rowHeight;
-(id)_labelFont;
-(void)setLabelsAndValues:(id)arg1 ;
-(void)_recalculateIdealHeight;
-(id)_valueFont;
@end
