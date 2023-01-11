//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEODataSession-Protocol.h>
#import <GeoServices/GEODataSessionRulesProvider-Protocol.h>

@class GEODataURLSession, NSString;
@protocol GEODataSession, OS_dispatch_queue;

@interface GEODataSession : NSObject <GEODataSessionRulesProvider, GEODataSession>
{
    NSObject<OS_dispatch_queue> *_sessionIsolation;
    id <GEODataSession> _urlSession;
    id <GEODataSession> _xpcSession;
}

+ (id)sharedDataSession;
@property(readonly, nonatomic) id <GEODataSession> xpcSession; // @synthesize xpcSession=_xpcSession;
@property(readonly, nonatomic) GEODataURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionIsolation; // @synthesize sessionIsolation=_sessionIsolation;
- (void).cxx_destruct;
- (id)taskWithRequest:(id)arg1 rules:(id)arg2 priority:(float)arg3 delegate:(id)arg4 delegateQueue:(id)arg5;
- (id)taskWithRequest:(id)arg1 rules:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (id)manifestManager;
- (id)initWithXPCSession:(id)arg1 urlSession:(id)arg2;
- (id)init;
- (id)preferedRulesForRequest:(id)arg1;
- (_Bool)_rules_isOnlineAllowedForRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

