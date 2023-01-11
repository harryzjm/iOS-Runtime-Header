//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NUBufferImage-Protocol.h>
#import <NeutrinoCore/NUMutableBufferImage-Protocol.h>
#import <NeutrinoCore/NUMutablePurgeableBufferImage-Protocol.h>
#import <NeutrinoCore/NUPurgeableBufferImage-Protocol.h>

@class NSString, NUColorSpace, NUImageLayout, NUPixelFormat, NURegion;

@interface _NUBufferImage <NUBufferImage, NUMutableBufferImage, NUPurgeableBufferImage, NUMutablePurgeableBufferImage>
{
}

- (_Bool)copyBufferStorage:(id)arg1 fromRect:(CDStruct_996ac03c)arg2 toPoint:(CDStruct_912cb5d2)arg3;
- (_Bool)copySurfaceStorage:(id)arg1 fromRect:(CDStruct_996ac03c)arg2 toPoint:(CDStruct_912cb5d2)arg3 device:(id)arg4;
- (void)writeBufferRegion:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)readBufferRegion:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)debugQuickLookObject;

// Remaining properties
@property(readonly) NUColorSpace *colorSpace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NUPixelFormat *format;
@property(readonly) unsigned long long hash;
@property(readonly) NUImageLayout *layout;
@property(readonly) CDStruct_912cb5d2 size;
@property(readonly) Class superclass;
@property(readonly, copy) NURegion *validRegion;

@end

