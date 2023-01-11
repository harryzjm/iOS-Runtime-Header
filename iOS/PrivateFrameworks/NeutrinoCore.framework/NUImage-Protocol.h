//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NSObject-Protocol.h>
#import <NeutrinoCore/NUImageCopying-Protocol.h>

@class NUColorSpace, NUImageLayout, NUPixelFormat, NURegion;

@protocol NUImage <NSObject, NUImageCopying>
@property(readonly, copy) NURegion *validRegion;
@property(readonly) CDStruct_912cb5d2 size;
@property(readonly) NUColorSpace *colorSpace;
@property(readonly) NUPixelFormat *format;
@property(readonly) NUImageLayout *layout;
@end
