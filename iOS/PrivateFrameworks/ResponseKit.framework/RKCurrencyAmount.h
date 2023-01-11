//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ResponseKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface RKCurrencyAmount : NSObject <NSSecureCoding>
{
    NSString *_string;
    NSString *_currency;
    double _value;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) double value; // @synthesize value=_value;
@property(readonly) NSString *currency; // @synthesize currency=_currency;
@property(readonly) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 currency:(id)arg2 value:(double)arg3;

@end

