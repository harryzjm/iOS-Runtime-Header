//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDSiriEndpointProfileFields : HMFObject
{
    NSString *_needsOnboardingField;
    NSString *_supportsOnboardingField;
    NSString *_isSiriEnableField;
    NSString *_isSiriListeningField;
    NSString *_siriTouchToUseField;
    NSString *_siriLightOnUseField;
    NSString *_siriSoundOnUseField;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *siriSoundOnUseField; // @synthesize siriSoundOnUseField=_siriSoundOnUseField;
@property(readonly, copy) NSString *siriLightOnUseField; // @synthesize siriLightOnUseField=_siriLightOnUseField;
@property(readonly, copy) NSString *siriTouchToUseField; // @synthesize siriTouchToUseField=_siriTouchToUseField;
@property(readonly, copy) NSString *isSiriListeningField; // @synthesize isSiriListeningField=_isSiriListeningField;
@property(readonly, copy) NSString *isSiriEnableField; // @synthesize isSiriEnableField=_isSiriEnableField;
@property(readonly, copy) NSString *supportsOnboardingField; // @synthesize supportsOnboardingField=_supportsOnboardingField;
@property(readonly, copy) NSString *needsOnboardingField; // @synthesize needsOnboardingField=_needsOnboardingField;
- (id)attributeDescriptions;
- (id)serializeFields;
- (id)initWithNeedsOnboardingField:(id)arg1 supportsOnboardingField:(id)arg2 siriEnableField:(id)arg3 siriListeningField:(id)arg4 siriTouchToUseField:(id)arg5 siriLightOnUseField:(id)arg6 siriSoundOnUseField:(id)arg7;

@end

