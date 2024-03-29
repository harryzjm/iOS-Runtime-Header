//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CTCapability : NSObject
{
    _Bool _capabilityFetched;
    _Bool _enabledFetched;
    NSString *_capabilityName;
    NSMutableDictionary *_capability;
    NSMutableDictionary *_capabilityInfo;
    NSMutableDictionary *_enabledDict;
}

- (void).cxx_destruct;
@property(retain) NSMutableDictionary *enabledDict; // @synthesize enabledDict=_enabledDict;
@property(retain) NSMutableDictionary *capabilityInfo; // @synthesize capabilityInfo=_capabilityInfo;
@property(retain) NSMutableDictionary *capability; // @synthesize capability=_capability;
@property _Bool enabledFetched; // @synthesize enabledFetched=_enabledFetched;
@property _Bool capabilityFetched; // @synthesize capabilityFetched=_capabilityFetched;
@property(retain, nonatomic) NSString *capabilityName; // @synthesize capabilityName=_capabilityName;
- (void)reset;
- (id)slotNum:(long long)arg1;
- (_Bool)getEnabledForSlotID:(long long)arg1;
- (void)setEnabled:(_Bool)arg1 forSlotID:(long long)arg2;
- (_Bool)getCapabilityInfo:(id)arg1 forSlotID:(long long)arg2;
- (void)setCapabilityInfo:(id)arg1 forSlotID:(long long)arg2;
- (_Bool)getCapabilityForSlotID:(long long)arg1;
- (void)setCapable:(_Bool)arg1 forSlotID:(long long)arg2;
- (id)initWithCapabilityName:(id)arg1;

@end

