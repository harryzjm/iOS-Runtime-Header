//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface MTLPixelFormatQuery : NSObject
{
    id <MTLDevice> _device;
    long long _iFeatureSet;
}

@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
- (_Bool)isDepth24Stencil8PixelFormatSupported;
- (_Bool)isASTCPixelFormatsSupported;
- (_Bool)supportsFeatureSet:(unsigned long long)arg1;
- (id)initWithFeatureSet:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1;

@end
