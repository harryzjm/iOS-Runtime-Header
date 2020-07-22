//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMActionSet.h>

@protocol HFIconDescriptor;

@interface HMActionSet (HFAdditions)
+ (id)hf_standardIconDescriptorForActionSetType:(id)arg1;
- (id)hf_updateIconDescriptor:(id)arg1;
@property(readonly, nonatomic) id <HFIconDescriptor> hf_iconDescriptor;
@property(readonly, nonatomic) _Bool hf_requiresDeviceUnlock;
- (_Bool)hf_isAnonymous;
- (_Bool)hf_affectsServiceWithIdentifier:(id)arg1;
- (id)hf_affectedServices;
- (id)hf_affectedCharacteristics;
@end

