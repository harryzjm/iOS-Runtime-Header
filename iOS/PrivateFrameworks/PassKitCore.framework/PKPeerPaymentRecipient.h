//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSDecimalNumber, NSString;

@interface PKPeerPaymentRecipient : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _allowsFormalPaymentRequests;
    NSString *_identifier;
    unsigned long long _status;
    unsigned long long _statusReason;
    unsigned long long _receiveMethod;
    NSString *_receiveCurrency;
    NSDecimalNumber *_minimumReceiveAmount;
    NSDecimalNumber *_maximumReceiveAmount;
    NSDate *_cacheUntil;
    NSString *_phoneOrEmail;
    NSString *_displayName;
}

+ (_Bool)supportsSecureCoding;
+ (id)recipientWithDictionary:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *phoneOrEmail; // @synthesize phoneOrEmail=_phoneOrEmail;
@property(copy, nonatomic) NSDate *cacheUntil; // @synthesize cacheUntil=_cacheUntil;
@property(nonatomic) _Bool allowsFormalPaymentRequests; // @synthesize allowsFormalPaymentRequests=_allowsFormalPaymentRequests;
@property(copy, nonatomic) NSDecimalNumber *maximumReceiveAmount; // @synthesize maximumReceiveAmount=_maximumReceiveAmount;
@property(copy, nonatomic) NSDecimalNumber *minimumReceiveAmount; // @synthesize minimumReceiveAmount=_minimumReceiveAmount;
@property(copy, nonatomic) NSString *receiveCurrency; // @synthesize receiveCurrency=_receiveCurrency;
@property(nonatomic) unsigned long long receiveMethod; // @synthesize receiveMethod=_receiveMethod;
@property(nonatomic) unsigned long long statusReason; // @synthesize statusReason=_statusReason;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)cacheableCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;

@end
