//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <webrtc/WK_RTCVideoDecoder-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WK_RTCVideoDecoderH264 : NSObject <WK_RTCVideoDecoder>
{
    struct opaqueCMFormatDescription *_videoFormat;
    struct OpaqueVTDecompressionSession *_decompressionSession;
    CDUnknownBlockType _callback;
    int _error;
}

- (void).cxx_destruct;
- (id)implementationName;
- (void)setVideoFormat:(struct opaqueCMFormatDescription *)arg1;
- (void)destroyDecompressionSession;
- (void)configureDecompressionSession;
- (int)resetDecompressionSession;
- (long long)releaseDecoder;
- (void)setError:(int)arg1;
- (void)setCallback:(CDUnknownBlockType)arg1;
- (long long)decode:(id)arg1 missingFrames:(_Bool)arg2 fragmentationHeader:(id)arg3 codecSpecificInfo:(id)arg4 renderTimeMs:(long long)arg5;
- (long long)startDecodeWithSettings:(id)arg1 numberOfCores:(int)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

