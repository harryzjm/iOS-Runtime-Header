//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDecimalNumber, NSString;

@interface PKSuicaPassProperties
{
    _Bool _balanceAllowedForCommute;
    _Bool _lowBalanceGateNotificationEnabled;
    _Bool _greenCarTicketUsed;
}

+ (Class)equalityClass;
+ (id)passPropertiesForPass:(id)arg1;
@property(readonly, nonatomic, getter=isGreenCarTicketUsed) _Bool greenCarTicketUsed; // @synthesize greenCarTicketUsed=_greenCarTicketUsed;
@property(readonly, nonatomic, getter=isLowBalanceGateNotificationEnabled) _Bool lowBalanceGateNotificationEnabled; // @synthesize lowBalanceGateNotificationEnabled=_lowBalanceGateNotificationEnabled;
@property(readonly, nonatomic, getter=isBalanceAllowedForCommute) _Bool balanceAllowedForCommute; // @synthesize balanceAllowedForCommute=_balanceAllowedForCommute;
@property(readonly, nonatomic, getter=isInStation) _Bool inStation; // @dynamic inStation;
@property(readonly, nonatomic, getter=isInShinkansenStation) _Bool inShinkansenStation; // @dynamic inShinkansenStation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_initWithProperties:(id)arg1;

// Remaining properties
@property(readonly, nonatomic, getter=isBlacklisted) _Bool blacklisted; // @dynamic blacklisted;
@property(readonly, copy, nonatomic) NSDecimalNumber *transitBalance; // @dynamic transitBalance;
@property(readonly, copy, nonatomic) NSString *transitBalanceCurrencyCode; // @dynamic transitBalanceCurrencyCode;

@end
