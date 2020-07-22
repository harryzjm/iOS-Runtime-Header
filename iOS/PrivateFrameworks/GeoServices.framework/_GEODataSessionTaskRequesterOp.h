//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOProtobufSessionTaskDelegate-Protocol.h>

@class GEOApplicationAuditToken, GEOMapServiceTraits, GEOProtobufSessionTask, NSString, PBRequest;
@protocol GEOServiceRequestConfiguring;

__attribute__((visibility("hidden")))
@interface _GEODataSessionTaskRequesterOp : NSObject <GEOProtobufSessionTaskDelegate>
{
    GEOProtobufSessionTask *_task;
    _Bool _canceled;
    PBRequest *_request;
    NSString *_debugRequestName;
    CDUnknownBlockType _completionHandler;
    id <GEOServiceRequestConfiguring> _config;
    NSString *_appIdentifier;
    GEOApplicationAuditToken *_auditToken;
    int _dataRequestKind;
    GEOMapServiceTraits *_traits;
}

- (void).cxx_destruct;
- (id)_userInfoForTask:(id)arg1;
- (void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_fullURL;
- (void)cancel;
- (void)_cleanup;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 auditToken:(id)arg2 config:(id)arg3 timeout:(double)arg4 dataRequestKind:(int)arg5 traits:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

