//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol VCHardwareSettingsMacProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsCameraMac
{
    unsigned int _encodeScore;
    unsigned int _decodeScore;
    id <VCHardwareSettingsMacProtocol> _hardwareSettings;
}

+ (id)sharedInstance;
- (void)resetEncodingRulesForCameraIsHD:(_Bool)arg1 isWVGA:(_Bool)arg2 is1080:(_Bool)arg3;
- (void)_resetJ92EncodingRulesForCameraIsHD:(_Bool)arg1 isWVGA:(_Bool)arg2 is1080:(_Bool)arg3;
- (void)_removeRulesGreaterThan720p;
- (void)_removeRulesGreaterThanVGA;
- (void)_addWVGAEncodingRules;
- (_Bool)useSoftFramerateSwitching;
- (_Bool)setupRules;
- (_Bool)setUp1080pRules:(int)arg1;
- (_Bool)setupH264Rules;
- (_Bool)setupH264WifiRules;
- (void)computeDecodingScore;
- (void)computeEncodingScore;
- (double)preferredAspectRatio;
- (void)initSupportedPayloads;
- (void)dealloc;
- (id)initWithHardwareSettings:(id)arg1;

@end
