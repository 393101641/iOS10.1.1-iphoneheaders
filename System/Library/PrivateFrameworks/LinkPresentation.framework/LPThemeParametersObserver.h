/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface LPThemeParametersObserver : NSObject {

	NSHashTable* _clients;

}
+(id)shared;
-(id)init;
-(void)dealloc;
-(void)addClient:(id)arg1 ;
-(void)didChangeContentSizeCategory:(id)arg1 ;
-(void)didChangeDarkenColorsStatus:(id)arg1 ;
-(void)didChangeThemeParameters;
@end
