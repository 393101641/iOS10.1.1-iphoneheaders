/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSCHSupportsRendering <NSObject>
@required
-(double)viewScale;
-(id)chartLayout;
-(BOOL)renderGrid;
-(BOOL)forceRenderBlankBackground;
-(BOOL)renderElementsShadowOnly;
-(BOOL)renderElementsWithoutShadows;
-(id)renderSeriesIndexSet;
-(id)renderValueIndexSetForSeries:(unsigned long long)arg1;
-(BOOL)renderElements;
-(BOOL)renderLabels;
-(BOOL)requireSeparateLabelLayer;
-(BOOL)isDrawingIntoPDF;
-(BOOL)renderReferenceLines;
-(BOOL)is2DRepFor3DChartRep;
-(BOOL)renderTrendLinesForSeriesIndex:(unsigned long long)arg1;
-(BOOL)shadowsEnabled;
-(id)geometry;
-(void)drawInContext:(CGContextRef)arg1;

@end

