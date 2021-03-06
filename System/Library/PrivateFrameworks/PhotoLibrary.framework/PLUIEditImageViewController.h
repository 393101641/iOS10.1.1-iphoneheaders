/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PLUIImageViewController.h>

@interface PLUIEditImageViewController : PLUIImageViewController {

	id _delegate;
	int _saveOptions;
	int _mode;

}

@property (assign,nonatomic) id delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int mode;                 //@synthesize mode=_mode - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(int)imageFormat;
-(int)cropOverlayMode;
-(unsigned long long)_contentAutoresizingMask;
-(unsigned long long)_tileAutoresizingMask;
-(id)imageTile;
-(void)setImageSavingOptions:(int)arg1 ;
-(int)saveOptions;
-(id)photo;
-(id)initWithPhoto:(id)arg1 ;
-(void)cropOverlayWasOKed:(id)arg1 ;
-(void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2 ;
-(void)cropOverlayWasCancelled:(id)arg1 ;
@end

