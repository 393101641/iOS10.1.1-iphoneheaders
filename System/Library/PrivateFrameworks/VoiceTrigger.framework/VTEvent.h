/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSDictionary;

@interface VTEvent : NSObject {

	NSURL* _jsonFileUrl;
	NSDictionary* _voiceTriggerEventInfo;

}

@property (nonatomic,readonly) NSURL * jsonFileUrl;                               //@synthesize jsonFileUrl=_jsonFileUrl - In the implementation block
@property (nonatomic,readonly) NSDictionary * voiceTriggerEventInfo;              //@synthesize voiceTriggerEventInfo=_voiceTriggerEventInfo - In the implementation block
+(id)eventFromURL:(id)arg1 ;
+(long long)eventTypeFromURL:(id)arg1 ;
-(NSDictionary *)voiceTriggerEventInfo;
-(id)_packNumberFomVTEventInfo:(id)arg1 key:(id)arg2 format:(id)arg3 ;
-(id)_buildTitle;
-(id)_buildContent;
-(id)_buildDetail;
-(id)_buildTriggerContent;
-(id)_packAudioURLFromVTEventInfo:(id)arg1 key:(id)arg2 ;
-(id)_packStringContent:(id)arg1 value:(id)arg2 ;
-(id)_buildTriggerDetail;
-(id)eventTrackerDictionary;
-(id)initWithEventLogURL:(id)arg1 ;
-(void)_readJsonFile:(id)arg1 ;
-(id)jsonFileName;
-(id)_packStringFromVTEventInfo:(id)arg1 key:(id)arg2 ;
-(id)_packAudioContent:(id)arg1 filepath:(id)arg2 ;
-(id)_packBooleanFromVTEventInfo:(id)arg1 key:(id)arg2 ;
-(NSURL *)jsonFileUrl;
-(id)timestampString;
@end

