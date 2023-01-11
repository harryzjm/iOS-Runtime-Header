//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/VNImageBufferProviding-Protocol.h>

@class NSMapTable, VNImageBuffer, VNObservationsCache, VNRequestForensics, VNRequestPerformer, VNSession;

__attribute__((visibility("hidden")))
@interface VNRequestPerformingContext : NSObject <VNImageBufferProviding>
{
    VNSession *_session;
    unsigned int _qosClass;
    VNRequestPerformer *_requestPerformer_DO_NOT_DIRECTLY_ACCESS;
    VNImageBuffer *_imageBuffer_DO_NOT_DIRECTLY_ACCESS;
    NSMapTable *_requestToObservationsCacheKeyMap;
    VNObservationsCache *_observationsCache;
    VNRequestForensics *_requestForensics;
}

- (void).cxx_destruct;
- (id)previousSequencedObservationsForRequest:(id)arg1;
- (void)recordSequencedObservationsForRequest:(id)arg1;
- (id)cachedObservationsForRequest:(id)arg1;
- (_Bool)cacheObservationsForRequest:(id)arg1;
- (id)imageBufferAndReturnError:(id *)arg1;
- (unsigned int)qosClass;
- (id)requestForensics;
- (_Bool)performDependentRequests:(id)arg1 onBehalfOfRequest:(id)arg2 error:(id *)arg3;
- (id)requestPerformerAndReturnError:(id *)arg1;
@property(readonly) VNSession *session;
- (id)_observationsCacheKeyForRequest:(id)arg1;
- (id)initWithSession:(id)arg1 requestPerformer:(id)arg2 imageBuffer:(id)arg3 forensics:(id)arg4 observationsCache:(id)arg5 qosClass:(unsigned int)arg6;
- (id)initWithSession:(id)arg1 requestPerformer:(id)arg2 imageBuffer:(id)arg3 forensics:(id)arg4 observationsCache:(id)arg5;
- (id)modelRequestHandlerAndReturnError:(id *)arg1;
- (void)setModelRequestHandler:(id)arg1;

@end
