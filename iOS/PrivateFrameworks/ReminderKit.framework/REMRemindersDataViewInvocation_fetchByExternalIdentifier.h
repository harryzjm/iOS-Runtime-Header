//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSArray, REMObjectID;

@interface REMRemindersDataViewInvocation_fetchByExternalIdentifier <NSSecureCoding>
{
    NSArray *_externalIdentifiers;
    REMObjectID *_listObjectID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) REMObjectID *listObjectID; // @synthesize listObjectID=_listObjectID;
@property(readonly, nonatomic) NSArray *externalIdentifiers; // @synthesize externalIdentifiers=_externalIdentifiers;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalIdentifiers:(id)arg1 listObjectID:(id)arg2;

@end
