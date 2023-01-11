//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSCopying-Protocol.h>
#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSString, REMObjectID;

@interface REMReplicaIDSource : NSObject <NSSecureCoding, NSCopying>
{
    REMObjectID *_accountID;
    NSString *_crdtID;
}

+ (_Bool)supportsSecureCoding;
+ (id)crdtIDWithObjectID:(id)arg1 property:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *crdtID; // @synthesize crdtID=_crdtID;
@property(readonly, nonatomic) REMObjectID *accountID; // @synthesize accountID=_accountID;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccountID:(id)arg1 crdtID:(id)arg2;
- (id)initWithAccountID:(id)arg1 objectID:(id)arg2 property:(id)arg3;

@end
