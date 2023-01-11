//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FBSDisplayConfiguration, FBSSceneClientSettings, FBSSceneSettings, FBSSceneSpecification;

@interface FBSMutableSceneParameters
{
    FBSDisplayConfiguration *_displayConfiguration;
}

- (void).cxx_destruct;
- (void)setDisplay:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)applyParameters:(id)arg1;
- (void)updateClientSettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateSettingsWithBlock:(CDUnknownBlockType)arg1;
@property(copy, nonatomic, setter=_setSpecification:) FBSSceneSpecification *specification; // @dynamic specification;
@property(copy, nonatomic) FBSSceneSettings *settings; // @dynamic settings;

// Remaining properties
@property(copy, nonatomic) FBSSceneClientSettings *clientSettings; // @dynamic clientSettings;

@end
