/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKAppDocumentDelegate <NSObject>
@optional
-(void)document:(id)arg1 runTestWithName:(id)arg2 options:(id)arg3;
-(void)documentScrollToTop:(id)arg1;
-(id)impressionableViewElementsForDocument:(id)arg1;
-(BOOL)document:(id)arg1 evaluateStyleMediaQuery:(id)arg2;

@required
-(void)documentDidUpdate:(id)arg1;
-(void)documentNeedsUpdate:(id)arg1;

@end
