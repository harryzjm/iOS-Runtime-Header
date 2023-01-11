//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSString;

@interface PFUuidData : NSData
{
    unsigned char _uuid[16];
}

+ (id)hostUuid;
+ (id)generateUuidAsMercuryString;
+ (id)generateUuidAsCanonicalString;
+ (_Bool)isSupportedUuidString:(id)arg1;
+ (_Bool)isMercuryUuidString:(id)arg1;
+ (_Bool)isCanonicalUuidString:(id)arg1;
+ (id)nullUuid;
+ (id)uuidWithString:(id)arg1;
+ (id)uuidWithData:(id)arg1;
+ (id)uuidWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)randomUuid;
+ (_Bool)isMercuryBase64String:(id)arg1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isNull;
@property(readonly, nonatomic) NSData *dataValue;
@property(readonly, nonatomic) NSString *mercuryStringValue;
@property(readonly, nonatomic) NSString *canonicalStringValue;
- (_Bool)isEqualToData:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (const void *)bytes;
- (unsigned long long)length;
- (id)initWithData:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)initNull;
- (id)initRandom;
- (id)init;
- (id)initWithMercuryBase64String:(id)arg1;

@end

