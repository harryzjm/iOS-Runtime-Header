//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface PKBarcode : NSObject <NSSecureCoding>
{
    NSData *_messageData;
    NSDictionary *_options;
    long long _format;
    NSString *_altText;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *altText; // @synthesize altText=_altText;
@property(nonatomic) long long format; // @synthesize format=_format;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) NSData *messageData; // @synthesize messageData=_messageData;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool isTall;
- (id)initWithPassDictionary:(id)arg1 bundle:(id)arg2;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

