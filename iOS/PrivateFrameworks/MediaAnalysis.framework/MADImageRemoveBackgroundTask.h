//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface MADImageRemoveBackgroundTask : NSObject
{
    struct atomic<bool> _canceled;
    NSString *_signpostPayload;
    id <MTLDevice> _preferredMetalDevice;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <MTLDevice> preferredMetalDevice; // @synthesize preferredMetalDevice=_preferredMetalDevice;
@property(readonly, nonatomic) NSString *signpostPayload; // @synthesize signpostPayload=_signpostPayload;
- (id)generateMaskWithRequestHandler:(id)arg1 regionOfInterest:(struct CGRect)arg2 error:(id *)arg3;
- (_Bool)computeRegionOfInterest:(struct CGRect *)arg1 pixelBuffer:(struct __CVBuffer *)arg2 orientation:(unsigned int)arg3 error:(id *)arg4;
- (id)computeSensitivityOfPixelBuffer:(struct __CVBuffer *)arg1;
- (float)resourceRequirement;
- (void)cancel;
@property(readonly, nonatomic) _Bool canceled;
- (_Bool)autoCancellable;
- (id)initWithSignpostPayload:(id)arg1;

@end

