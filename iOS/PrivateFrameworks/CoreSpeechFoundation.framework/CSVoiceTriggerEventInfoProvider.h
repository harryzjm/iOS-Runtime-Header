//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CSVoiceTriggerEventInfoProvider : NSObject
{
    NSDictionary *_voiceTriggerInfo;
    NSDictionary *_rtsTriggerInfo;
    unsigned long long _triggerNotifiedMachTime;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long triggerNotifiedMachTime; // @synthesize triggerNotifiedMachTime=_triggerNotifiedMachTime;
@property(copy, nonatomic) NSDictionary *rtsTriggerInfo; // @synthesize rtsTriggerInfo=_rtsTriggerInfo;
@property(copy, nonatomic) NSDictionary *voiceTriggerInfo; // @synthesize voiceTriggerInfo=_voiceTriggerInfo;

@end
