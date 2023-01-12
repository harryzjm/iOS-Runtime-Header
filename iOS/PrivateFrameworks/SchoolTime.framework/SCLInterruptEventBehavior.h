//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SchoolTime/NSCopying-Protocol.h>
#import <SchoolTime/NSSecureCoding-Protocol.h>

@class SCLInterruptEvent;

@interface SCLInterruptEventBehavior : NSObject <NSCopying, NSSecureCoding>
{
    SCLInterruptEvent *_event;
    unsigned long long _eligibility;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long eligibility; // @synthesize eligibility=_eligibility;
@property(readonly, nonatomic) SCLInterruptEvent *event; // @synthesize event=_event;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithEvent:(id)arg1 interruptEligibility:(unsigned long long)arg2;

@end
