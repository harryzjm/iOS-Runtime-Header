//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface AMSBAAKeychainItems : NSObject
{
    NSData *_BAACert;
    struct __SecKey *_BIKKeyRef;
    NSData *_IntermediateRootCert;
}

- (void).cxx_destruct;
@property(copy) NSData *IntermediateRootCert; // @synthesize IntermediateRootCert=_IntermediateRootCert;
@property struct __SecKey *BIKKeyRef; // @synthesize BIKKeyRef=_BIKKeyRef;
@property(copy) NSData *BAACert; // @synthesize BAACert=_BAACert;

@end

