//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTCallForwardingValue;

@interface TPSCallForwardingResponse
{
    CTCallForwardingValue *_value;
}

+ (id)unarchivedObjectFromData:(id)arg1 error:(id *)arg2;
+ (id)unarchivedObjectClasses;
@property(readonly, nonatomic) CTCallForwardingValue *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)archivedDataWithError:(id *)arg1;
- (_Bool)isEqualToResponse:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSubscriptionContext:(id)arg1 error:(id)arg2 value:(id)arg3;
- (id)initWithSubscriptionContext:(id)arg1 error:(id)arg2;

@end

