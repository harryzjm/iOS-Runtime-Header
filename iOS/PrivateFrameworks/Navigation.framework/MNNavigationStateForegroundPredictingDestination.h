//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MNNavigationStateForegroundPredictingDestination
{
}

- (void)commuteSessionDidArrive:(id)arg1;
- (void)commuteSession:(id)arg1 didUpdateDestinations:(id)arg2;
- (void)enterState;
- (void)stopPredictingDestinations;
- (void)updateMapsActive:(_Bool)arg1;
- (unsigned long long)desiredCommuteSessionState;
- (unsigned long long)desiredResourcePolicy;
- (unsigned long long)desiredLocationProviderType;
- (unsigned long long)type;
- (_Bool)requiresHighMemoryThreshold;

@end
