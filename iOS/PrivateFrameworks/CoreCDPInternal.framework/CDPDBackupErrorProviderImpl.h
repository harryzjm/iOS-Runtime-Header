//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPDBackupRecoveryErrorProvider-Protocol.h>

@class CDPContext, NSString;
@protocol CDPStateUIProviderInternal;

@interface CDPDBackupErrorProviderImpl : NSObject <CDPDBackupRecoveryErrorProvider>
{
    CDPContext *_context;
    id <CDPStateUIProviderInternal> _uiProvider;
    unsigned long long _prevailingSecret;
}

- (void).cxx_destruct;
- (void)handleSoftLimitError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleHardLimitError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)recordNotFoundErrorWithUnderlyingError:(id)arg1;
- (id)verficationFailedErrorwithUnderlyingError:(id)arg1;
- (id)hardLimitErrorForRecord:(id)arg1;
- (id)globalHardLimitErrorWithRecord:(id)arg1;
- (id)globalHardLimitError;
- (id)cooldownErrorWithUnderlyingError:(id)arg1;
- (void)setPrevailingSecret:(unsigned long long)arg1;
- (_Bool)supportsErrorPresentation;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

