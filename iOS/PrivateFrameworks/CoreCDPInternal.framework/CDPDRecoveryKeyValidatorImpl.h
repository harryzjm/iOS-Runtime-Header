//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPRecoveryKeyValidatorInternal-Protocol.h>

@class CDPContext, NSString;
@protocol CDPDRecoveryKeyValidatorInternalDelegate;

@interface CDPDRecoveryKeyValidatorImpl : NSObject <CDPRecoveryKeyValidatorInternal>
{
    CDPContext *_context;
    id <CDPDRecoveryKeyValidatorInternalDelegate> _delegate;
    _Bool _recoveryKeyVerified;
    NSString *_recoveryKey;
}

@property(copy, nonatomic) NSString *recoveryKey; // @synthesize recoveryKey=_recoveryKey;
@property(nonatomic) _Bool recoveryKeyVerified; // @synthesize recoveryKeyVerified=_recoveryKeyVerified;
- (void).cxx_destruct;
- (void)generateRecoveryKey:(CDUnknownBlockType)arg1;
- (void)confirmRecoveryKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

