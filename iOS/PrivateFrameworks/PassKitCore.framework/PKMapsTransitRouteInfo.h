//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSSet, PKCurrencyAmount;

@interface PKMapsTransitRouteInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSSet *_transitNetworkIdentifiers;
    PKCurrencyAmount *_cost;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) PKCurrencyAmount *cost; // @synthesize cost=_cost;
@property(readonly, nonatomic) NSSet *transitNetworkIdentifiers; // @synthesize transitNetworkIdentifiers=_transitNetworkIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTransitNetworkIdentifiers:(id)arg1 cost:(id)arg2;

@end
