//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface CKDatabaseSubscription <NSSecureCoding, NSCopying>
{
}

+ (id)new;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSubscriptionID:(id)arg1;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSString *recordType; // @dynamic recordType;

@end

