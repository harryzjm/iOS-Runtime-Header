//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContact, CNGroup;

@interface CNChangeHistoryAddMemberToGroupEvent
{
    CNContact *_member;
    CNGroup *_group;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) CNGroup *group; // @synthesize group=_group;
@property(readonly, nonatomic) CNContact *member; // @synthesize member=_member;
- (void).cxx_destruct;
- (void)acceptEventVisitor:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMember:(id)arg1 group:(id)arg2;
- (id)init;

@end
