//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKSync3PolicyCommonMethods-Protocol.h>

@class NSDictionary, NSString;

@interface _DKSync3TransportPolicy : NSObject <_DKSync3PolicyCommonMethods>
{
    _Bool _isSyncDisabled;
    NSDictionary *_properties;
    NSString *_name;
    NSString *_transport;
    unsigned long long _maximumSyncsPerDay;
    unsigned long long _syncBatchSizeInEvents;
    unsigned long long _maximumBatchesPerSync;
    unsigned long long _minimumSyncWindowInSeconds;
    unsigned long long _minimumTimeBetweenSyncsInSeconds;
    unsigned long long _singleDevicePeriodicSyncCadenceInDays;
    unsigned long long _additionsBucketCountTriggeringSync;
    unsigned long long _deletionsBucketCountTriggeringSync;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
- (id)description;
- (id)init;

@end
