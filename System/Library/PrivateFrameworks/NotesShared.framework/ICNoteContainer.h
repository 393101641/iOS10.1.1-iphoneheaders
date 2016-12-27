/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/ICCloudSyncingObject.h>
#import <libobjc.A.dylib/ICNoteContainer.h>

@class ICAccount, NSString;

@interface ICNoteContainer : ICCloudSyncingObject <ICNoteContainer>

@property (nonatomic,retain) ICAccount * owner; 
@property (nonatomic,retain) NSString * accountNameForAccountListSorting; 
@property (assign,nonatomic) BOOL isAllNotesContainer; 
@property (assign,nonatomic) BOOL isHiddenNoteContainer; 
@property (nonatomic,retain) NSString * nestedTitleForSorting; 
@property (assign,nonatomic) int sortOrder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingCloudAccount;
-(id)accountName;
-(id)predicateForSearchableAttachments;
-(id)predicateForVisibleNotes;
-(id)predicateForSearchableNotes;
-(id)titleForNavigationBar;
-(BOOL)noteIsVisible:(id)arg1 ;
-(id)visibleNotes;
-(unsigned long long)visibleNotesCount;
-(id)titleForTableViewCell;
-(BOOL)supportsEditingNotes;
-(id)noteContainerAccount;
-(id)noteVisibilityTestingForSearchingAccount;
-(BOOL)supportsVisibilityTestingType:(long long)arg1 ;
-(id)cloudAccount;
@end
