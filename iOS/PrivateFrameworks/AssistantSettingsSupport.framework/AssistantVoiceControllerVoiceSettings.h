//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFVoiceInfo;

@interface AssistantVoiceControllerVoiceSettings : NSObject
{
    AFVoiceInfo *_inProgressVoice;
    AFVoiceInfo *_currentVoice;
}

+ (id)settingsWithInProgressVoice:(id)arg1 currentVoice:(id)arg2;
@property(retain, nonatomic) AFVoiceInfo *currentVoice; // @synthesize currentVoice=_currentVoice;
@property(retain, nonatomic) AFVoiceInfo *inProgressVoice; // @synthesize inProgressVoice=_inProgressVoice;
- (void).cxx_destruct;

@end
