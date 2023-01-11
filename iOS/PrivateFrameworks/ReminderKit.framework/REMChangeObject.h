//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSCopying-Protocol.h>
#import <ReminderKit/NSSecureCoding-Protocol.h>
#import <ReminderKit/REMChangeCoalesceable-Protocol.h>

@class NSSet, REMChangeTombstone, REMChangeTransaction, REMObjectID;

@interface REMChangeObject : NSObject <NSCopying, NSSecureCoding, REMChangeCoalesceable>
{
    REMChangeTransaction *_transaction;
    long long _changeID;
    REMObjectID *_changedObjectID;
    long long _changeType;
    REMChangeTombstone *_tombstone;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) REMChangeTombstone *tombstone; // @synthesize tombstone=_tombstone;
@property(readonly, nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) REMObjectID *changedObjectID; // @synthesize changedObjectID=_changedObjectID;
@property(readonly, nonatomic) long long changeID; // @synthesize changeID=_changeID;
@property(readonly, nonatomic) __weak REMChangeTransaction *transaction; // @synthesize transaction=_transaction;
@property(readonly, nonatomic) NSSet *updatedProperties;
- (id)copyForCoalescing;
- (id)coalescedChanges;
- (_Bool)isCoalesced;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
