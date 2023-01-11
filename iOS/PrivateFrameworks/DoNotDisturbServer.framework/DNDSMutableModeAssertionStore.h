//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface DNDSMutableModeAssertionStore
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSArray *invalidationRequests; // @dynamic invalidationRequests;
@property(copy, nonatomic) NSArray *invalidations; // @dynamic invalidations;
@property(copy, nonatomic) NSArray *assertions; // @dynamic assertions;
- (void)resolveSourcesForSyncFromPairedDevice:(id)arg1;
- (void)unresolveSourcesForSyncToPairedDevice:(id)arg1;
- (void)filterForSyncToPairedDevice:(id)arg1 clientDetailsProvider:(id)arg2;
- (void)sanitizeDatesForThreshold:(id)arg1;

@end
