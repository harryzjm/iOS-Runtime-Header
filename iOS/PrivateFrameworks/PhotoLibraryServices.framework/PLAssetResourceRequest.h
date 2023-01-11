//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSError, NSManagedObjectID, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface PLAssetResourceRequest : NSOperation
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _progressHandler;
    NSString *_assetUUID;
    int _requestID;
    NSManagedObjectID *_objectID;
    unsigned long long _cloudResourceType;
    NSString *_cplTaskIdentifier;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSString *cplTaskIdentifier; // @synthesize cplTaskIdentifier=_cplTaskIdentifier;
@property(readonly, nonatomic) unsigned long long cloudResourceType; // @synthesize cloudResourceType=_cloudResourceType;
@property(readonly, nonatomic) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property(readonly, nonatomic) int requestID; // @synthesize requestID=_requestID;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (id)initWithRequestID:(int)arg1 queue:(id)arg2 cloudResourceType:(unsigned long long)arg3 managedObjectID:(id)arg4 progressHandler:(CDUnknownBlockType)arg5;
- (void)_onQueueAsync:(CDUnknownBlockType)arg1;

@end
