/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceEvent.h>

@class NSString;

@interface FBSWorkspaceSceneEvent : FBSWorkspaceEvent {

	NSString* _sceneID;

}

@property (nonatomic,copy) NSString * sceneID;              //@synthesize sceneID=_sceneID - In the implementation block
-(void)dealloc;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(NSString *)sceneID;
-(void)setSceneID:(NSString *)arg1 ;
@end

