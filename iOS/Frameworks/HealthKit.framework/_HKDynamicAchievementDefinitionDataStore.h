//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/_HKDynamicAchievementDefinitionLoading-Protocol.h>

@class HKExtendedHealthStore;

__attribute__((visibility("hidden")))
@interface _HKDynamicAchievementDefinitionDataStore : NSObject <_HKDynamicAchievementDefinitionLoading>
{
    HKExtendedHealthStore *_store;
}

- (void).cxx_destruct;
- (void)fetchDynamicDefinitionsWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end
