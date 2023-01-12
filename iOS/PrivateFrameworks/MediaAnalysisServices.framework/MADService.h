//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaAnalysisServices/MADServiceProtocol-Protocol.h>
#import <MediaAnalysisServices/VCPMediaAnalysisClientProtocol-Protocol.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MADService : NSObject <MADServiceProtocol, VCPMediaAnalysisClientProtocol>
{
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSXPCConnection *_connection;
    struct atomic<int> _requestID;
}

+ (void)configureServerInterface:(id)arg1;
+ (id)service;
+ (_Bool)isEntitled;
+ (id)allowedClasses;
+ (id)serverProtocol;
+ (id)serviceName;
- (void).cxx_destruct;
- (void)reportProgress:(double)arg1 forRequest:(int)arg2;
- (unsigned long long)currentOutstandingTasks;
- (void)cancelAllRequests;
- (void)cancelRequestID:(int)arg1;
- (int)performRequests:(id)arg1 onImageURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (int)performRequests:(id)arg1 onImageURL:(id)arg2 withIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)sandboxExtensionForURL:(id)arg1 error:(id *)arg2;
- (int)performRequests:(id)arg1 onPixelBuffer:(struct __CVBuffer *)arg2 withOrientation:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (int)performRequests:(id)arg1 onCIImage:(id)arg2 withOrientation:(unsigned int)arg3 andIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (int)performRequests:(id)arg1 onCGImage:(struct CGImage *)arg2 withOrientation:(unsigned int)arg3 andIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (int)renderCGImage:(struct CGImage *)arg1 toCVPixelBuffer:(struct __CVBuffer **)arg2;
- (int)performRequests:(id)arg1 onPixelBuffer:(struct __CVBuffer *)arg2 withOrientation:(unsigned int)arg3 andIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)connection;
- (void)dealloc;
- (id)initInternal;
- (id)init;
- (int)performRequests:(id)arg1 onAssetWithCloudIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (int)performRequests:(id)arg1 onCGImage:(struct CGImage *)arg2 withOrientation:(unsigned int)arg3 assetLocalIdentifier:(id)arg4 photoLibraryURL:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (int)performRequests:(id)arg1 onPixelBuffer:(struct __CVBuffer *)arg2 withOrientation:(unsigned int)arg3 assetLocalIdentifier:(id)arg4 photoLibraryURL:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (int)_performRequests:(id)arg1 onIOSurface:(id)arg2 withOrientation:(unsigned int)arg3 assetLocalIdentifier:(id)arg4 photoLibraryURL:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (int)performRequests:(id)arg1 onAssetWithLocalIdentifier:(id)arg2 fromPhotoLibraryWithURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)resetPerformanceMeasurements;
- (id)queryPerformanceMeasurements;
- (void)endEntryPoint;
- (void)startEntryPointWithQueryID:(unsigned long long)arg1;

@end
