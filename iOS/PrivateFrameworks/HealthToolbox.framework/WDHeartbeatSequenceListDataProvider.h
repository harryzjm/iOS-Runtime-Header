//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WDSampleListDataProvider.h"

__attribute__((visibility("hidden")))
@interface WDHeartbeatSequenceListDataProvider : WDSampleListDataProvider
{
}

- (id)viewControllerForItemAtIndexPath:(id)arg1;
- (id)secondaryTextForObject:(id)arg1;
- (id)textForObject:(id)arg1;
- (id)predicateForType:(id)arg1;
- (id)sampleTypes;
- (id)createQueryForSampleType:(id)arg1 predicate:(id)arg2 limit:(long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(CDUnknownBlockType)arg5;

@end

