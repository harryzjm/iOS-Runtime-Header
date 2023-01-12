//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UsageTracking/NSSecureCoding-Protocol.h>

@class NSDateComponents, NSSet;

@interface USDeviceActivityEvent : NSObject <NSSecureCoding>
{
    NSSet *_applicationTokens;
    NSSet *_categoryTokens;
    NSSet *_webDomainTokens;
    NSDateComponents *_threshold;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy) NSDateComponents *threshold; // @synthesize threshold=_threshold;
@property(readonly, copy) NSSet *webDomainTokens; // @synthesize webDomainTokens=_webDomainTokens;
@property(readonly, copy) NSSet *categoryTokens; // @synthesize categoryTokens=_categoryTokens;
@property(readonly, copy) NSSet *applicationTokens; // @synthesize applicationTokens=_applicationTokens;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly) _Bool includesAllActivity;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithApplicationTokens:(id)arg1 categoryTokens:(id)arg2 webDomainTokens:(id)arg3 threshold:(id)arg4;

@end
