//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PFBase64Codec : NSObject
{
}

+ (id)decodeUuid:(id)arg1;
+ (id)decodeString:(id)arg1;
+ (id)encodeUuid:(id)arg1;
+ (id)encodeData:(id)arg1;
+ (_Bool)decodeString:(id)arg1 with:(CDUnknownBlockType)arg2;
+ (id)encodeBytes:(const void *)arg1 withLength:(unsigned long long)arg2;
+ (_Bool)checkTerminators:(long long)arg1 expected:(long long)arg2;
+ (_Bool)appendPadding;
+ (unsigned long long)encodedUuidLength;
+ (const char *)decoder;
+ (const char *)alphabet;
- (id)init;

@end

