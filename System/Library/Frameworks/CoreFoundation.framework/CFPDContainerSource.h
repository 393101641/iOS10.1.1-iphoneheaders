/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPDSource.h>

@interface CFPDContainerSource : CFPDSource {

	CFStringRef _containerPath;

}
-(id)initWithDomain:(CFStringRef)arg1 userName:(CFStringRef)arg2 container:(CFStringRef)arg3 byHost:(BOOL)arg4 managed:(BOOL)arg5 shmemIndex:(short)arg6 daemon:(id)arg7 ;
-(CFStringRef)container;
@end

