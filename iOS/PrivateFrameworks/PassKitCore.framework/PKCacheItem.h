//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, PKPeerPaymentRecipient;

@interface PKCacheItem : NSObject <NSSecureCoding>
{
    NSDate *_insertDate;
    PKPeerPaymentRecipient *_item;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) PKPeerPaymentRecipient *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isNewerThan:(id)arg1;
- (_Bool)hasExpired;
- (id)initWithItem:(id)arg1;

@end

