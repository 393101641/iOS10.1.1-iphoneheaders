/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASFetchAttachmentTaskProtocol <DATask>
@required
-(id)attachmentName;
-(id)initForMessageServerID:(id)arg1 andAttachmentName:(id)arg2;
-(id)initForMessageUUID:(id)arg1;
-(id)attachmentUUID;
-(void)setAttachmentUUID:(id)arg1;
-(void)setAttachmentName:(id)arg1;
-(id)localFileName;
-(void)setLocalFileName:(id)arg1;
-(id)attachmentContentType;
-(void)setAttachmentContentType:(id)arg1;
-(unsigned long long)localFileLength;
-(void)setLocalFileLength:(unsigned long long)arg1;
-(id)localFileHandle;
-(void)setLocalFileHandle:(id)arg1;
-(id)messageID;
-(void)setMessageID:(id)arg1;

@end

