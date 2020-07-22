//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface ASDRepairApplicationRequestOptions
{
    NSString *_bundleID;
    NSNumber *_accountDSID;
    long long _claimStyle;
    unsigned long long _exitReason;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long exitReason; // @synthesize exitReason=_exitReason;
@property(readonly, nonatomic) long long claimStyle; // @synthesize claimStyle=_claimStyle;
@property(readonly, nonatomic) NSNumber *accountDSID; // @synthesize accountDSID=_accountDSID;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleID:(id)arg1 accountIdentifier:(id)arg2 claimStyle:(long long)arg3;
- (id)initWithBundleID:(id)arg1;

@end

