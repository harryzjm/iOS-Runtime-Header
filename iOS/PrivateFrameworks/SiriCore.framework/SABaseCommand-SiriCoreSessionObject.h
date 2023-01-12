//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SABaseCommand.h>

@class NSString;

@interface SABaseCommand (SiriCoreSessionObject)
- (_Bool)siriCore_supportedByRemoteLimitedSession;
- (_Bool)siriCore_supportedByLocalSession;
- (void)siriCore_setSessionRequestId:(id)arg1;
- (id)siriCore_requestId;
- (void)siriCore_logDiagnostics;
- (_Bool)siriCore_isProvisional;
- (_Bool)siriCore_isRestartable;
- (_Bool)siriCore_isRetryable;
- (_Bool)siriCore_bufferingAllowedDuringActiveSession;
- (id)siriCore_serializedAceDataError:(id *)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId;
@property(readonly) Class superclass;
@end

