//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SecExperimentConfig;

__attribute__((visibility("hidden")))
@interface SecExperiment : NSObject
{
    _Bool _samplingDisabled;
    NSString *_name;
    SecExperimentConfig *_cachedConfig;
}

- (void).cxx_destruct;
@property(retain) SecExperimentConfig *cachedConfig; // @synthesize cachedConfig=_cachedConfig;
@property(nonatomic) _Bool samplingDisabled; // @synthesize samplingDisabled=_samplingDisabled;
@property(retain) NSString *name; // @synthesize name=_name;
@property(readonly) NSString *identifier;
- (id)copyExperimentConfiguration;
- (id)copyRandomExperimentConfigurationFromAsset:(id)arg1;
- (id)copyRemoteExperimentAsset;
- (id)copyExperimentConfigurationFromUserDefaults;
- (_Bool)isSamplingDisabled;
- (_Bool)isSamplingDisabledWithDefault:(_Bool)arg1;
- (_Bool)experimentIsAllowedForProcess;
- (id)initWithName:(const char *)arg1;

@end

