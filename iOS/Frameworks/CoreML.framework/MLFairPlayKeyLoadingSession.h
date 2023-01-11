//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MLFairPlayKeyLoadingSession : NSObject
{
    unsigned int _sessionID;
    NSString *_keyIdentifier;
    CDStruct_c101b2aa *_sessionContext;
}

- (void).cxx_destruct;
@property CDStruct_c101b2aa *sessionContext; // @synthesize sessionContext=_sessionContext;
@property unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(copy) NSString *keyIdentifier; // @synthesize keyIdentifier=_keyIdentifier;
- (id)generatePersistentKeyBlobFromKeyResponse:(id)arg1 error:(id *)arg2;
- (id)generateKeyRequestForKeyIdentifier:(id)arg1 error:(id *)arg2;
- (id)transformKeyIdentifier:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;

@end
