//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface HKFeatureOnboardingRecordInaccessibilityCache : NSObject
{
    NSUserDefaults *_cachingDefaults;
}

- (void).cxx_destruct;
- (void)updateForRetrievedOnboardingRecord:(id)arg1 featureIdentifier:(id)arg2;
- (id)_cachedOnboardingRecordForFeatureIdentifier:(id)arg1;
- (id)fallbackOnboardingRecordForError:(id)arg1 featureIdentifier:(id)arg2;
- (id)initWithCachingDefaults:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

