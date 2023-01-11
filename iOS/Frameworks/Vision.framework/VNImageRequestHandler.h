//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, VNImageSpecifier, VNObservationsCache, VNRequestPerformer;

@interface VNImageRequestHandler : NSObject
{
    NSDictionary *_options;
    VNImageSpecifier *_imageSpecifier;
    VNRequestPerformer *_requestPerformer;
    VNObservationsCache *_observationsCache;
}

+ (id)asyncProcessingDispatchQueue;
+ (void)forcedCleanupWithOptions:(id)arg1;
+ (void)requestForcedCleanupWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestForcedCleanupWithOptions:(id)arg1;
+ (void)forcedCleanup;
+ (void)requestForcedCleanup;
- (void).cxx_destruct;
- (void)cancelAllRequests;
- (_Bool)performRequests:(id)arg1 gatheredForensics:(id *)arg2 error:(id *)arg3;
- (_Bool)performRequests:(id)arg1 error:(id *)arg2;
- (id)imageBufferAndReturnError:(id *)arg1;
- (_Bool)prepareForPerformingRequests:(id)arg1 error:(id *)arg2;
- (_Bool)prepareForPerformingRequestsOfClass:(id)arg1 error:(id *)arg2;
- (id)initWithData:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)initWithCIImage:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithCIImage:(id)arg1 options:(id)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithCGImage:(struct CGImage *)arg1 options:(id)arg2;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;
- (id)initWithImageSpecifier:(id)arg1;

@end

