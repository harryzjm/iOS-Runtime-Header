//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CallHistory/NSSecureCoding-Protocol.h>

@class NSData;

@interface Transaction : NSObject <NSSecureCoding>
{
    unsigned long long _transactionType;
    NSData *_record;
}

+ (_Bool)supportsSecureCoding;
+ (id)toString:(unsigned long long)arg1;
@property(retain) NSData *record; // @synthesize record=_record;
@property unsigned long long transactionType; // @synthesize transactionType=_transactionType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 andRecord:(id)arg2;
- (id)initWithType:(unsigned long long)arg1 andRecord:(id)arg2;

@end

