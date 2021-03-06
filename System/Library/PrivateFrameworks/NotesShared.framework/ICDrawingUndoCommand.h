/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString, ICDrawingUndoCheckPoint;

@interface ICDrawingUndoCommand : NSObject {

	BOOL _hide;
	NSArray* _commands;
	NSString* _actionName;
	ICDrawingUndoCheckPoint* _checkPoint;

}

@property (nonatomic,retain) NSArray * commands;                                //@synthesize commands=_commands - In the implementation block
@property (nonatomic,retain) NSString * actionName;                             //@synthesize actionName=_actionName - In the implementation block
@property (nonatomic,readonly) NSArray * visibleCommands; 
@property (assign,nonatomic) BOOL hide;                                         //@synthesize hide=_hide - In the implementation block
@property (nonatomic,retain) ICDrawingUndoCheckPoint * checkPoint;              //@synthesize checkPoint=_checkPoint - In the implementation block
-(BOOL)hide;
-(void)setActionName:(NSString *)arg1 ;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(NSString *)actionName;
-(void)setHide:(BOOL)arg1 ;
-(ICDrawingUndoCheckPoint *)checkPoint;
-(void)setCheckPoint:(ICDrawingUndoCheckPoint *)arg1 ;
-(double)renderCost;
-(NSArray *)visibleCommands;
-(id)undoCommandHidden:(BOOL)arg1 ;
@end

