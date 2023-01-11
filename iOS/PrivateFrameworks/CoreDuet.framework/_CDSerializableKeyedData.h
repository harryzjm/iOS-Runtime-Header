//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface _CDSerializableKeyedData : NSObject
{
    NSData *_encodedKey;
    unsigned char _keyChecksum;
    unsigned char _dataChecksum;
    _Bool _dataChecksumNeedsUpdate;
    NSString *_key;
    NSData *_data;
}

+ (id)dataDeseralizedFrom:(void *)arg1 maxSize:(unsigned long long)arg2 checksum:(char *)arg3 bytesRead:(unsigned long long *)arg4;
+ (id)log;
+ (id)errorForInvalidKeyEncoding;
+ (unsigned char)byteChecksumOfData:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)serializeData:(id)arg1 withChecksum:(unsigned char)arg2 to:(void *)arg3;
- (_Bool)isEqual:(id)arg1;

@end
