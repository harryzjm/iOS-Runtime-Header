//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GCSProfile, NSArray, NSString;
@protocol NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface _GCControllerInputComponent
{
    NSArray *_templateElementParameters;
    GCSProfile *_appliedSettingsProfile;
    NSArray *_eventRemappingActions;
}

- (void).cxx_destruct;
- (void)setSettingsProfile:(id)arg1;
- (void)handleGamepadEvent:(id)arg1;
- (void)setController:(id)arg1;
- (id)initWithIdentifier:(id)arg1 templateFacadeParameters:(id)arg2 templateElementParameters:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier;
@property(readonly) Class superclass;

@end

