//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVContentKeySpecifier;

@interface AVContentKey : NSObject
{
    struct OpaqueFigCPECryptor *_cryptor;
    AVContentKeySpecifier *contentKeySpecifier;
}

+ (id)contentKeyWithSpecifier:(id)arg1 andCryptor:(struct OpaqueFigCPECryptor *)arg2;
@property(readonly) AVContentKeySpecifier *contentKeySpecifier; // @synthesize contentKeySpecifier;
- (struct OpaqueFigCPECryptor *)getCryptor;
- (void)dealloc;
- (id)initWithSpecifier:(id)arg1 andCryptor:(struct OpaqueFigCPECryptor *)arg2;

@end
