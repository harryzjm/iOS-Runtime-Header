//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPDSecureBackupProxy-Protocol.h>

@class CDPContext, NSString;

@interface CDPDSecureBackupProxyImpl : NSObject <CDPDSecureBackupProxy>
{
    CDPContext *_cdpContext;
}

@property(retain, nonatomic) CDPContext *cdpContext; // @synthesize cdpContext=_cdpContext;
- (void).cxx_destruct;
- (void)uncacheAllSecrets;
- (void)cacheRecoveryKey:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)disableWithInfo:(id)arg1 error:(id *)arg2;
- (void)disableWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)recoverWithInfo:(id)arg1 error:(id *)arg2;
- (void)recoverWithInfo:(id)arg1 completionBlockWithResults:(CDUnknownBlockType)arg2;
- (_Bool)enableWithInfo:(id)arg1 error:(id *)arg2;
- (void)enableWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)accountInfoWithInfo:(id)arg1 error:(id *)arg2;
- (void)getAccountInfoWithInfo:(id)arg1 completionBlockWithResults:(CDUnknownBlockType)arg2;
- (id)_secureBackup;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

