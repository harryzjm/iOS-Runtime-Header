//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreRE/NSObject-Protocol.h>

@class NSString;
@protocol MTLBuffer, MTLSamplerState, MTLTexture, VFXRERenderTargetInfo;

@protocol VFXREDrawCallContext <NSObject>
@property(readonly, nonatomic) id <VFXRERenderTargetInfo> renderTargetInfo;
- (void)viewports:(const void **)arg1:(long long *)arg2;
- (_Bool)constantOffsetAndSize:(int)arg1:(NSString *)arg2:(long long *)arg3:(long long *)arg4;
- (const char *)constantData:(int)arg1;
- (id <MTLSamplerState>)sampler:(int)arg1:(NSString *)arg2;
- (id <MTLBuffer>)buffer:(int)arg1:(NSString *)arg2:(long long *)arg3:(long long *)arg4;
- (id <MTLTexture>)texture:(int)arg1:(NSString *)arg2;
@end

