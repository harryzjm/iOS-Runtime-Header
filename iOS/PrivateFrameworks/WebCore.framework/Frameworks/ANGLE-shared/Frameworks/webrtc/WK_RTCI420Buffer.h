//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WK_RTCI420Buffer : NSObject
{
    scoped_refptr_b674d2a6 _i420Buffer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)close;
- (scoped_refptr_b674d2a6)nativeI420Buffer;
- (id)toI420;
@property(readonly, nonatomic) const char *dataV;
@property(readonly, nonatomic) const char *dataU;
@property(readonly, nonatomic) const char *dataY;
@property(readonly, nonatomic) int chromaHeight;
@property(readonly, nonatomic) int chromaWidth;
@property(readonly, nonatomic) int strideV;
@property(readonly, nonatomic) int strideU;
@property(readonly, nonatomic) int strideY;
@property(readonly, nonatomic) int height;
@property(readonly, nonatomic) int width;
- (id)initWithFrameBuffer:(scoped_refptr_b674d2a6)arg1;
- (id)initWithWidth:(int)arg1 height:(int)arg2 strideY:(int)arg3 strideU:(int)arg4 strideV:(int)arg5;
- (id)initWithWidth:(int)arg1 height:(int)arg2 dataY:(const char *)arg3 dataU:(const char *)arg4 dataV:(const char *)arg5;
- (id)initWithWidth:(int)arg1 height:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

