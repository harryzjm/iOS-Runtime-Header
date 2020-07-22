//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CKModifySubscriptionsOperationInfo <NSSecureCoding>
{
    NSArray *_subscriptionsToSave;
    NSArray *_subscriptionIDsToDelete;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *subscriptionIDsToDelete; // @synthesize subscriptionIDsToDelete=_subscriptionIDsToDelete;
@property(retain, nonatomic) NSArray *subscriptionsToSave; // @synthesize subscriptionsToSave=_subscriptionsToSave;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

