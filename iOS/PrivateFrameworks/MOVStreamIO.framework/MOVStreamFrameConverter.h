//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MOVStreamFrameConverter : NSObject
{
    struct __CVPixelBufferPool *_pool;
    struct OpaqueVTPixelTransferSession *_transferSession;
    _Bool _transferSessionUsageDisabled;
}

@property _Bool transferSessionUsageDisabled; // @synthesize transferSessionUsageDisabled=_transferSessionUsageDisabled;
- (struct __CVBuffer *)convertPixelBuffer:(struct __CVBuffer *)arg1;
- (void)dealloc;
- (id)initWithTargetWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 bytesPerRow:(unsigned long long)arg4;
- (id)initWithTargetWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 extendedPixelsPerRow:(unsigned long long)arg4;
- (id)init;

@end
