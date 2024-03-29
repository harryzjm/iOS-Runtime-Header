//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MADImageCaptionRequest, NSString, NSURL, VCPMADServiceImageAsset;

__attribute__((visibility("hidden")))
@interface VCPMADImageCaptionTask : NSObject
{
    MADImageCaptionRequest *_request;
    VCPMADServiceImageAsset *_imageAsset;
    NSURL *_imageCaptionModel;
    struct atomic<bool> _canceled;
    NSString *_signpostPayload;
}

+ (id)dependencies;
+ (id)taskWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;
- (void).cxx_destruct;
- (int)run;
- (void)cancel;
- (_Bool)autoCancellable;
- (float)resourceRequirement;
- (id)initWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;

@end

