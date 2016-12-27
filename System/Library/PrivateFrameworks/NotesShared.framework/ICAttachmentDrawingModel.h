/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/ICAttachmentModel.h>

@class ICDrawingVersionedDocument, ICDrawing, UIImage;

@interface ICAttachmentDrawingModel : ICAttachmentModel {

	ICDrawingVersionedDocument* _drawingDocument;

}

@property (nonatomic,readonly) ICDrawing * drawing; 
@property (nonatomic,readonly) UIImage * imageForActivityItem; 
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithAttachment:(id)arg1 ;
-(id)previewItemURL;
-(id)previewItemTitle;
-(id)activityItems;
-(BOOL)needToGeneratePreviews;
-(BOOL)hasPreviews;
-(BOOL)showThumbnailInNoteList;
-(/*^block*/id)genericListThumbnailCreator;
-(/*^block*/id)genericBrickThumbnailCreator;
-(void)generatePreviewsInOperation:(id)arg1 ;
-(id)previewImageURL;
-(CGAffineTransform)previewImageOrientationTransform;
-(long long)previewImageOrientation;
-(ICDrawing *)drawing;
-(void)mergeWithMergeableData:(id)arg1 ;
-(void)writeMergeableData;
-(BOOL)generatePreviewsDuringCloudActivity;
-(id)activityItem;
-(id)drawingDocument;
-(id)sharedDrawingController;
-(UIImage *)imageForActivityItem;
-(void)drawingPreviewIsUpToDate;
-(void)saveDrawing:(id)arg1 withImage:(UIImage*)arg2 forImageDrawing:(id)arg3 ;
@end
