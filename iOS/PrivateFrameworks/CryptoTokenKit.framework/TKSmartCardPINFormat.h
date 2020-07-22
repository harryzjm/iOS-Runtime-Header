//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/NSCopying-Protocol.h>
#import <CryptoTokenKit/NSSecureCoding-Protocol.h>

@interface TKSmartCardPINFormat : NSObject <NSSecureCoding, NSCopying>
{
    long long _charset;
    long long _encoding;
    long long _minPINLength;
    long long _maxPINLength;
    long long _PINBlockByteLength;
    long long _PINJustification;
    long long _PINBitOffset;
    long long _PINLengthBitOffset;
    long long _PINLengthBitSize;
}

+ (void)_writeNumber:(unsigned long long)arg1 into:(id)arg2 bitOffset:(long long)arg3 bitLength:(long long)arg4;
+ (_Bool)supportsSecureCoding;
@property long long PINLengthBitSize; // @synthesize PINLengthBitSize=_PINLengthBitSize;
@property long long PINLengthBitOffset; // @synthesize PINLengthBitOffset=_PINLengthBitOffset;
@property long long PINBitOffset; // @synthesize PINBitOffset=_PINBitOffset;
@property long long PINJustification; // @synthesize PINJustification=_PINJustification;
@property long long PINBlockByteLength; // @synthesize PINBlockByteLength=_PINBlockByteLength;
@property long long maxPINLength; // @synthesize maxPINLength=_maxPINLength;
@property long long minPINLength; // @synthesize minPINLength=_minPINLength;
@property long long encoding; // @synthesize encoding=_encoding;
@property long long charset; // @synthesize charset=_charset;
- (_Bool)fillPIN:(id)arg1 intoAPDUTemplate:(id)arg2 PINByteOffset:(long long)arg3 error:(id *)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

