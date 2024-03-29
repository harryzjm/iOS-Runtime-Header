//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SecExperiment;

__attribute__((visibility("hidden")))
@interface SecExpConcrete_sec_experiment : NSObject
{
    SecExperiment *innerExperiment;
    unsigned long long numRuns;
    unsigned long long successRuns;
}

- (void).cxx_destruct;
- (id)copyExperimentConfiguration;
- (_Bool)isSamplingDisabled;
- (_Bool)isSamplingDisabledWithDefault:(_Bool)arg1;
- (_Bool)experimentIsAllowedForProcess;
- (const char *)identifier;
- (const char *)name;
- (id)initWithInnerExperiment:(id)arg1;
- (id)initWithName:(const char *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

