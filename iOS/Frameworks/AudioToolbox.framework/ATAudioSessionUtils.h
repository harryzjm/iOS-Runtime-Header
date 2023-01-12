//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ATAudioSessionUtils : NSObject
{
}

+ (id)getPort:(id)arg1 forInput:(_Bool)arg2;
+ (id)getPorts:(id)arg1 forInput:(_Bool)arg2;
+ (id)getRouteStringFromAVASRouteDescription:(id)arg1;
+ (id)getRouteDescriptionFromAVASRouteDescription:(id)arg1;
+ (id)outputPortTypes;
+ (id)inputPortTypes;
+ (id)modes;
+ (id)categories;
+ (id)KVOProperties;
+ (id)getMappedObjectOf:(id)arg1 inside:(id)arg2 ofType:(int)arg3;
+ (struct __CFString *)getAudioSessionPortType:(id)arg1 forInput:(_Bool)arg2;
+ (unsigned int)getAudioSessionMode:(id)arg1;
+ (id)getAVASMode:(unsigned int)arg1;
+ (unsigned int)getAudioSessionCategory:(id)arg1;
+ (id)getAVASCategory:(unsigned int)arg1;
+ (unsigned int)getAudioSessionProperty:(id)arg1;
+ (id)getAVASProperty:(unsigned int)arg1;
+ (unsigned long long)getCategoryOptionFromPropertyID:(unsigned int)arg1;

@end

