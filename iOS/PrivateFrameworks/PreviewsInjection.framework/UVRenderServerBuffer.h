//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PreviewsInjection/UVRenderServerRenderable-Protocol.h>

@interface UVRenderServerBuffer : NSObject <UVRenderServerRenderable>
{
    struct CARenderServerBuffer *_buffer;
}

@property(readonly, nonatomic) const void *buffer;
@property(readonly, nonatomic) char *data;
@property(readonly, nonatomic) long long rowBytes;
@property(readonly, nonatomic) long long dataSize;
@property(readonly, nonatomic) long long height;
@property(readonly, nonatomic) long long width;
- (void)destroy;
- (id)initWithWidth:(long long)arg1 height:(long long)arg2;

@end
