//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSError, NSMutableArray, PKFamilyMember;

@interface PKAppleCashSharingRecipientCapabilitiesFetchStatus : NSObject
{
    NSMutableArray *_fetchedCapabilities;
    _Bool _fetchInProgress;
    long long _maximumPossibleDevices;
    NSDate *_fetchStartDate;
    NSError *_fetchError;
    PKFamilyMember *_familyMember;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *fetchedCapabilities; // @synthesize fetchedCapabilities=_fetchedCapabilities;
@property(readonly, nonatomic) PKFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
@property(nonatomic) _Bool fetchInProgress; // @synthesize fetchInProgress=_fetchInProgress;
@property(copy, nonatomic) NSError *fetchError; // @synthesize fetchError=_fetchError;
@property(readonly, copy, nonatomic) NSDate *fetchStartDate; // @synthesize fetchStartDate=_fetchStartDate;
@property(nonatomic) long long maximumPossibleDevices; // @synthesize maximumPossibleDevices=_maximumPossibleDevices;
- (id)description;
- (long long)secondsPassedSinceFetchStart;
- (_Bool)allPossibleCapabilitiesFetched;
- (void)addAppleCashSharingRecipientCapabilities:(id)arg1;
- (id)initWithFamilyMember:(id)arg1 fetchStartDate:(id)arg2;

@end
