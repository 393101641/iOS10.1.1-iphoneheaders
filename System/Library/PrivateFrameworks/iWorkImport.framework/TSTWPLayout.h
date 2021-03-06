/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPLayout.h>

@class TSTCellStyle, TSWPParagraphStyle, TSWPPadding;

@interface TSTWPLayout : TSWPLayout {

	BOOL _cachedCellWraps;
	BOOL _cacheIsValid;
	TSUCellCoord _cachedCellID;
	int _cachedVerticalAlignment;
	int _cachedParagraphAlignment;
	unsigned _cachedAutoSizeFlags;
	TSTCellStyle* _cachedCellStyle;
	TSWPParagraphStyle* _cachedTextStyle;
	TSUCellRect _cachedMergeRange;
	TSUCellRect _cachedMaskSpillRange;
	TSWPPadding* _cachedPadding;
	CGRect _cachedMaskRect;
	CGRect _cachedAutosizedFrame;

}

@property (assign,nonatomic) BOOL cacheIsValid;                                 //@synthesize cacheIsValid=_cacheIsValid - In the implementation block
@property (assign,nonatomic) TSUCellCoord cachedCellID;                         //@synthesize cachedCellID=_cachedCellID - In the implementation block
@property (nonatomic,retain) TSTCellStyle * cachedCellStyle;                    //@synthesize cachedCellStyle=_cachedCellStyle - In the implementation block
@property (nonatomic,retain) TSWPParagraphStyle * cachedTextStyle;              //@synthesize cachedTextStyle=_cachedTextStyle - In the implementation block
@property (assign,nonatomic) BOOL cachedCellWraps;                              //@synthesize cachedCellWraps=_cachedCellWraps - In the implementation block
@property (assign,nonatomic) int cachedVerticalAlignment;                       //@synthesize cachedVerticalAlignment=_cachedVerticalAlignment - In the implementation block
@property (assign,nonatomic) int cachedParagraphAlignment;                      //@synthesize cachedParagraphAlignment=_cachedParagraphAlignment - In the implementation block
@property (assign,nonatomic) TSUCellRect cachedMergeRange;                      //@synthesize cachedMergeRange=_cachedMergeRange - In the implementation block
@property (assign,nonatomic) unsigned cachedAutoSizeFlags;                      //@synthesize cachedAutoSizeFlags=_cachedAutoSizeFlags - In the implementation block
@property (assign,nonatomic) CGRect cachedMaskRect;                             //@synthesize cachedMaskRect=_cachedMaskRect - In the implementation block
@property (assign,nonatomic) TSUCellRect cachedMaskSpillRange;                  //@synthesize cachedMaskSpillRange=_cachedMaskSpillRange - In the implementation block
@property (nonatomic,retain) TSWPPadding * cachedPadding;                       //@synthesize cachedPadding=_cachedPadding - In the implementation block
@property (assign,nonatomic) CGRect cachedAutosizedFrame;                       //@synthesize cachedAutosizedFrame=_cachedAutosizedFrame - In the implementation block
-(TSUCellCoord)cachedCellID;
-(TSUCellRect)cachedMergeRange;
-(BOOL)cachedCellWraps;
-(int)cachedParagraphAlignment;
-(CGRect)cachedAutosizedFrame;
-(TSTCellStyle *)cachedCellStyle;
-(TSWPParagraphStyle *)cachedTextStyle;
-(id)initWithStorage:(id)arg1 parentLayout:(id)arg2 cellID:(TSUCellCoord)arg3 frame:(CGRect)arg4 ;
-(TSWPPadding *)cachedPadding;
-(unsigned)cachedAutoSizeFlags;
-(int)cachedVerticalAlignment;
-(void)setCachedAutosizedFrame:(CGRect)arg1 ;
-(CGRect)cachedMaskRect;
-(void)setCachedMaskRect:(CGRect)arg1 ;
-(void)setCachedMaskSpillRange:(TSUCellRect)arg1 ;
-(void)setCacheIsValid:(BOOL)arg1 ;
-(BOOL)cacheIsValid;
-(void)setCachedCellWraps:(BOOL)arg1 ;
-(void)setCachedVerticalAlignment:(int)arg1 ;
-(void)setCachedParagraphAlignment:(int)arg1 ;
-(void)setCachedMergeRange:(TSUCellRect)arg1 ;
-(void)setCachedAutoSizeFlags:(unsigned)arg1 ;
-(void)setCachedCellStyle:(TSTCellStyle *)arg1 ;
-(void)setCachedTextStyle:(TSWPParagraphStyle *)arg1 ;
-(void)setCachedPadding:(TSWPPadding *)arg1 ;
-(void)setCachedCellID:(TSUCellCoord)arg1 ;
-(TSUCellRect)cachedMaskSpillRange;
-(void)dealloc;
-(void)invalidate;
-(void)validate;
@end

