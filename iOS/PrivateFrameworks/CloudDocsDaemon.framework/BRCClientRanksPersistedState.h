//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface BRCClientRanksPersistedState
{
    unsigned long long _nextItemRowID;
    unsigned long long _nextNotifRank;
    unsigned long long _nextPackageItemRank;
}

+ (_Bool)supportsSecureCoding;
+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)description;
@property(nonatomic) unsigned long long nextPackageItemRank;
- (unsigned long long)allocatePackageItemRank;
@property(nonatomic) unsigned long long nextNotifRank;
- (unsigned long long)allocateNotifRank;
- (unsigned long long)allocateItemRowID;
@property(readonly, nonatomic) unsigned long long nextItemRowID;

@end

