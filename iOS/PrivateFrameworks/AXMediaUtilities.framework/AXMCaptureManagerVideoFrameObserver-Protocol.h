//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AXMediaUtilities/NSObject-Protocol.h>

@class AXMCaptureManager;

@protocol AXMCaptureManagerVideoFrameObserver <NSObject>
- (void)captureManager:(AXMCaptureManager *)arg1 didOutputPixelBuffer:(struct __CVBuffer *)arg2;
@end
