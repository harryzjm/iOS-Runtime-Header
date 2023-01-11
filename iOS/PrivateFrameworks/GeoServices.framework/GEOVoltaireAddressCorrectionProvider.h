//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOProtobufSessionTaskDelegate-Protocol.h>

@class GEOProtobufSession, GEOProtobufSessionTask, NSString;

@interface GEOVoltaireAddressCorrectionProvider : NSObject <GEOProtobufSessionTaskDelegate>
{
    GEOProtobufSession *_protobufSession;
    GEOProtobufSessionTask *_initializationTask;
    GEOProtobufSessionTask *_updateTask;
    CDUnknownBlockType _initErrorHandler;
    CDUnknownBlockType _initFinishedHandler;
    CDUnknownBlockType _updateFinishedHandler;
    CDUnknownBlockType _updateErrorHandler;
}

+ (_Bool)acUpdateNeedsProxy;
+ (id)acUpdateURL;
+ (_Bool)acInitNeedsProxy;
+ (id)acInitURL;
@property(copy, nonatomic) CDUnknownBlockType updateErrorHandler; // @synthesize updateErrorHandler=_updateErrorHandler;
@property(copy, nonatomic) CDUnknownBlockType updateFinishedHandler; // @synthesize updateFinishedHandler=_updateFinishedHandler;
@property(copy, nonatomic) CDUnknownBlockType initErrorHandler; // @synthesize initErrorHandler=_initErrorHandler;
@property(copy, nonatomic) CDUnknownBlockType initFinishedHandler; // @synthesize initFinishedHandler=_initFinishedHandler;
@property(retain, nonatomic) GEOProtobufSessionTask *updateTask; // @synthesize updateTask=_updateTask;
@property(retain, nonatomic) GEOProtobufSessionTask *initializationTask; // @synthesize initializationTask=_initializationTask;
@property(readonly, nonatomic) GEOProtobufSession *protobufSession; // @synthesize protobufSession=_protobufSession;
- (void).cxx_destruct;
- (void)cancelRequest;
- (void)startUpdateRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)startInitRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (id)init;
- (id)cancelError;
- (void)didCompleteUpdateTask;
- (void)didCompleteInitTask;
- (void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

