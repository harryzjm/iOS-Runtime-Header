//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SecKeyP256Public : NSObject
{
    struct __SecKey *_publicKeyRef;
    NSData *_serializedKey;
}

- (void).cxx_destruct;
@property(retain) NSData *serializedKey; // @synthesize serializedKey=_serializedKey;
@property struct __SecKey *publicKeyRef; // @synthesize publicKeyRef=_publicKeyRef;
- (void)dealloc;
- (_Bool)verifySignature:(id)arg1 data:(id)arg2;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)dataRepresentation;
- (id)initWithSecKeyRef:(struct __SecKey *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

