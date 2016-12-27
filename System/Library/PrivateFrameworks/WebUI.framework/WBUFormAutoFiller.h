/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBUFormAutoFiller <NSObject>
@required
-(void)autoFillFormSynchronouslyInFrame:(id)arg1 withValues:(id)arg2;
-(void)annotateForm:(id)arg1 inFrame:(id)arg2 withValues:(id)arg3;
-(void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(BOOL)arg3 selectFieldAfterFilling:(id)arg4;
-(void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(BOOL)arg3 focusFieldAfterFilling:(BOOL)arg4 fieldToFocus:(id)arg5;
-(void)autoFillForm:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
-(void)fillTextField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
-(void)setFormControls:(id)arg1 areAutoFilled:(BOOL)arg2 andClearField:(id)arg3 inFrame:(id)arg4;
-(void)collectURLsForPrefillingAtURL:(id)arg1;
-(void)collectFormMetadataForPrefillingAtURL:(id)arg1;
-(void)collectMetadataForTextField:(id)arg1 inFrame:(id)arg2 atURL:(id)arg3 replyIdentifier:(id)arg4;
-(void)clearAutoFillMetadata;
-(void)resumeLoadingAfterSavingFormData;

@end
