//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HapticServerConfig : NSObject
{
    NSString *_currentLocality;
    _Bool _usingInternalHaptics;
    _Bool _supportsAudioPlayback;
    _Bool _supportsHapticPlayback;
    _Bool _supportsAdvancedPatternPlayers;
    float _hapticContinuousTimeLimit;
    float _defaultHapticTransientEventSharpness;
    float _defaultHapticContinuousEventSharpness;
    float _defaultHapticTransientEventIntensity;
    float _defaultHapticContinuousEventIntensity;
    vector_2056c7c2 _hapticTransientIDs;
    vector_2056c7c2 _hapticContinuousSustainedIDs;
    vector_2056c7c2 _hapticContinuousNonsustainedIDs;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) vector_2056c7c2 hapticContinuousNonsustainedIDs; // @synthesize hapticContinuousNonsustainedIDs=_hapticContinuousNonsustainedIDs;
@property(readonly) vector_2056c7c2 hapticContinuousSustainedIDs; // @synthesize hapticContinuousSustainedIDs=_hapticContinuousSustainedIDs;
@property(readonly) vector_2056c7c2 hapticTransientIDs; // @synthesize hapticTransientIDs=_hapticTransientIDs;
@property(readonly) float defaultHapticContinuousEventIntensity; // @synthesize defaultHapticContinuousEventIntensity=_defaultHapticContinuousEventIntensity;
@property(readonly) float defaultHapticTransientEventIntensity; // @synthesize defaultHapticTransientEventIntensity=_defaultHapticTransientEventIntensity;
@property(readonly) float defaultHapticContinuousEventSharpness; // @synthesize defaultHapticContinuousEventSharpness=_defaultHapticContinuousEventSharpness;
@property(readonly) float defaultHapticTransientEventSharpness; // @synthesize defaultHapticTransientEventSharpness=_defaultHapticTransientEventSharpness;
@property(readonly) NSString *currentLocality; // @synthesize currentLocality=_currentLocality;
@property(readonly) float hapticContinuousTimeLimit; // @synthesize hapticContinuousTimeLimit=_hapticContinuousTimeLimit;
@property(readonly) _Bool supportsAdvancedPatternPlayers; // @synthesize supportsAdvancedPatternPlayers=_supportsAdvancedPatternPlayers;
@property(readonly) _Bool supportsHapticPlayback; // @synthesize supportsHapticPlayback=_supportsHapticPlayback;
@property(readonly) _Bool supportsAudioPlayback; // @synthesize supportsAudioPlayback=_supportsAudioPlayback;
@property(readonly) _Bool usingInternalHaptics; // @synthesize usingInternalHaptics=_usingInternalHaptics;
- (id)initWithHapticPlayer:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;

@end

