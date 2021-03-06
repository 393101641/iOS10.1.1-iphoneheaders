/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAMailMessage.h>

@class ASEmailItem;

@interface ASMailMessage : DAMailMessage {

	ASEmailItem* _ASEmailItem;

}
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)date;
-(id)sender;
-(id)body;
-(id)attachments;
-(id)subject;
-(id)from;
-(id)to;
-(id)cc;
-(BOOL)flagged;
-(id)remoteID;
-(int)bodySize;
-(id)meetingRequestUUID;
-(id)longID;
-(BOOL)readIsSet;
-(BOOL)flaggedIsSet;
-(BOOL)verbIsSet;
-(int)lastVerb;
-(int)smimeType;
-(id)meetingRequestMetaData;
-(BOOL)meetingRequestIsActionable;
-(id)conversationId;
-(id)rfc822Data;
-(id)replyTo;
-(int)importance;
-(int)bodyTruncated;
-(id)initWithASEmailItem:(id)arg1 ;
-(id)displayTo;
-(id)threadTopic;
-(id)conversationIndex;
-(id)preview;
-(id)folderID;
-(id)messageClass;
-(BOOL)read;
-(BOOL)isDraft;
@end

