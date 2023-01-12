//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface SKAPresenceEncryptionKey : NSObject
{
    NSData *_keyData;
}

+ (id)logger;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *keyData; // @synthesize keyData=_keyData;
- (id)_randomBytesWithLength:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)_initializeNewKeyMaterial;
@property(readonly, nonatomic) NSData *keyMaterial;
- (id)decryptPayload:(id)arg1;
- (id)encryptPayload:(id)arg1;
- (id)initWithKeyMaterial:(id)arg1;
- (id)initWithNewKeyMaterial;

@end

