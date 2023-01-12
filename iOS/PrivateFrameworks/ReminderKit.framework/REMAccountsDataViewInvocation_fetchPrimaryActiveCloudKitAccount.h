//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ReminderKit/NSSecureCoding-Protocol.h>

@interface REMAccountsDataViewInvocation_fetchPrimaryActiveCloudKitAccount <NSSecureCoding>
{
    _Bool _fetchREMObjectIDOnly;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool fetchREMObjectIDOnly; // @synthesize fetchREMObjectIDOnly=_fetchREMObjectIDOnly;
- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFetchREMObjectIDOnly:(_Bool)arg1;

@end
