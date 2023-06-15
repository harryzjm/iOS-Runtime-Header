//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSCountedSet, NSString;

__attribute__((visibility("hidden")))
@interface HMDCoreDataCloudStoreTransactionLogEvent : HMMLogEvent
{
    NSString *_transactionAuthor;
    NSCountedSet *_reasons;
}

+ (id)eventForUpdates:(id)arg1 inserts:(id)arg2 deletes:(id)arg3 transactionAuthor:(id)arg4;
+ (void)countMKFCKEntitiesInChangeSet:(id)arg1 entitiesCount:(id)arg2;
+ (void)trimChangeSetForUnchangedValues:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSCountedSet *reasons; // @synthesize reasons=_reasons;
@property(readonly, nonatomic) NSString *transactionAuthor; // @synthesize transactionAuthor=_transactionAuthor;
- (id)initWithChangeSet:(id)arg1 transactionAuthor:(id)arg2;

@end

