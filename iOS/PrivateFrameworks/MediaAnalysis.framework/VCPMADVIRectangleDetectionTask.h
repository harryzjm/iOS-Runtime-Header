//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MADVIRectangleDetectionRequest, NSString, VCPMADServiceImageAsset, VNImageBasedRequest;
@protocol MTLDevice, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCPMADVIRectangleDetectionTask : NSObject
{
    MADVIRectangleDetectionRequest *_request;
    VCPMADServiceImageAsset *_imageAsset;
    id <MTLDevice> _preferredMetalDevice;
    NSString *_signpostPayload;
    NSObject<OS_dispatch_queue> *_cancelQueue;
    struct atomic<bool> _canceled;
    VNImageBasedRequest *_weakRequest;
}

+ (id)dependencies;
+ (id)taskWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;
- (void).cxx_destruct;
- (int)run;
- (void)cancel;
- (_Bool)autoCancellable;
- (float)resourceRequirement;
- (void)setPreferredMetalDevice:(id)arg1;
- (id)initWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;

@end

