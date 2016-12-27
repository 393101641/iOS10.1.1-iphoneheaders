/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBFolderController.h>

@interface SBStarkFolderController : SBFolderController {

	unsigned long long _interactionAffordances;
	BOOL _supportsKnobEvents;
	BOOL _supportsTouchEvents;

}

@property (assign,nonatomic) unsigned long long interactionAffordances; 
-(unsigned long long)interactionAffordances;
-(void)setInteractionAffordances:(unsigned long long)arg1 ;
-(void)_configureForInnerFolderController:(id)arg1 ;
-(id)_iconPageIndicatorImageSetCache;
-(Class)_contentViewClass;
@end
