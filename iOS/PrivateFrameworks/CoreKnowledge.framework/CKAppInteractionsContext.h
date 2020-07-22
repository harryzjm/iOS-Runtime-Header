//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/NSCopying-Protocol.h>
#import <CoreKnowledge/NSSecureCoding-Protocol.h>

@class MISSING_TYPE, NSDictionary;

@interface CKAppInteractionsContext : NSObject <NSCopying, NSSecureCoding>
{
    MISSING_TYPE *_outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId;
    MISSING_TYPE *numberOfDiscardedDonationsByIntentTypeAndBundleId;
}

+ (_Bool)supportsSecureCoding;
- (CDUnknownBlockType).cxx_destruct;
- (void)updateDiscardedDonations:(double)arg1 forIntentType:(id)arg2 andBundleId:(id)arg3;
- (void)incrementNumberOfOutOfAppLaunchBoundaryDonationsForBundleId:(id)arg1 intent:(id)arg2;
- (id)copyWithZone:(void *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init:(id)arg1;
- (id)init;
@property(nonatomic, copy) NSDictionary *numberOfDiscardedDonationsByIntentTypeAndBundleId; // @synthesize numberOfDiscardedDonationsByIntentTypeAndBundleId;
@property(nonatomic, readonly) NSDictionary *outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId;
@property(nonatomic, copy) NSDictionary *_outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId; // @synthesize _outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId;

@end

