//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <webrtc/NSObject-Protocol.h>

@protocol WK_RTCI420Buffer;

@protocol WK_RTCVideoFrameBuffer <NSObject>
@property(readonly, nonatomic) int height;
@property(readonly, nonatomic) int width;
- (id <WK_RTCI420Buffer>)toI420;
@end

