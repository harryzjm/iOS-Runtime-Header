//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INBalanceAmount, INSpeakableString, NSString;

@interface INPaymentAccount : NSObject <NSCopying, NSSecureCoding>
{
    INSpeakableString *_nickname;
    NSString *_accountNumber;
    long long _accountType;
    INSpeakableString *_organizationName;
    INBalanceAmount *_balance;
    INBalanceAmount *_secondaryBalance;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) INBalanceAmount *secondaryBalance; // @synthesize secondaryBalance=_secondaryBalance;
@property(readonly, copy, nonatomic) INBalanceAmount *balance; // @synthesize balance=_balance;
@property(readonly, copy, nonatomic) INSpeakableString *organizationName; // @synthesize organizationName=_organizationName;
@property(readonly, nonatomic) long long accountType; // @synthesize accountType=_accountType;
@property(readonly, copy, nonatomic) NSString *accountNumber; // @synthesize accountNumber=_accountNumber;
@property(readonly, copy, nonatomic) INSpeakableString *nickname; // @synthesize nickname=_nickname;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithNickname:(id)arg1 number:(id)arg2 accountType:(long long)arg3 organizationName:(id)arg4;
- (id)initWithNickname:(id)arg1 number:(id)arg2 accountType:(long long)arg3 organizationName:(id)arg4 balance:(id)arg5 secondaryBalance:(id)arg6;

@end

