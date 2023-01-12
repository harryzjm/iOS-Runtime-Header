//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOBatchTileRequester, GEORequestCounter, GEOResourceManifestManager, GEOTileDB, NSString;
@protocol GEOOpportunisticDataSourceDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOBatchTileRequesterOpportunisticAdapter : NSObject
{
    NSString *_sessionIdentifier;
    GEOBatchTileRequester *_requester;
    GEOResourceManifestManager *_manifestManager;
    GEOTileDB *_diskCache;
    GEORequestCounter *_requestCounter;
    unsigned char _requestCounterPolicy;
    struct GEOOnce_s _started;
    id <GEOOpportunisticDataSourceDelegate> _delegate;
}

+ (unsigned long long)policy;
- (void).cxx_destruct;
@property(nonatomic) __weak id <GEOOpportunisticDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)batchTileRequesterDidFinish:(id)arg1;
- (void)batchTileRequester:(id)arg1 failedToLoadKey:(struct _GEOTileKey)arg2 error:(id)arg3;
- (void)batchTileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned int)arg3 tileSet:(CDUnion_20bcf645)arg4 etag:(id)arg5 forKey:(struct _GEOTileKey)arg6 userInfo:(id)arg7;
@property(readonly, nonatomic) unsigned long long bytesDownloaded;
- (void)cancel;
- (void)pause;
- (void)resume;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
- (id)initWithSessionIdentifier:(id)arg1 batchTileRequester:(id)arg2 manifestManager:(id)arg3 diskCache:(id)arg4 requestCounter:(id)arg5 requestCounterPolicy:(unsigned char)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

