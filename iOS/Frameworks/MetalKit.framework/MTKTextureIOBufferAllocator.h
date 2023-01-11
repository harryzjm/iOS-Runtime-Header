//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetalKit/TXRBufferAllocator-Protocol.h>

@class NSString;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface MTKTextureIOBufferAllocator : NSObject <TXRBufferAllocator>
{
    id <MTLDevice> _device;
}

- (void).cxx_destruct;
- (id)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 deallocNotification:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (id)newBufferWithLength:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

