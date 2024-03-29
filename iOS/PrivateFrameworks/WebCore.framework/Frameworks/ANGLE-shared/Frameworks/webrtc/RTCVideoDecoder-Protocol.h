//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <webrtc/NSObject-Protocol.h>

@class NSString, WK_RTCEncodedImage;
@protocol RTCCodecSpecificInfo;

@protocol RTCVideoDecoder <NSObject>
- (NSString *)implementationName;
- (long long)decode:(WK_RTCEncodedImage *)arg1 missingFrames:(_Bool)arg2 codecSpecificInfo:(id <RTCCodecSpecificInfo>)arg3 renderTimeMs:(long long)arg4;
- (long long)releaseDecoder;
- (long long)startDecodeWithNumberOfCores:(int)arg1;
- (void)setCallback:(void (^)(WK_RTCVideoFrame *))arg1;
@end

