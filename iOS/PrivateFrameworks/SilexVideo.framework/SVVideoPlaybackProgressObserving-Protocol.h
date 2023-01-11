//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SilexVideo/NSObject-Protocol.h>

@protocol SVVideoPlaybackProgressObserving <NSObject>
@property(copy, nonatomic, setter=onReset:) CDUnknownBlockType resetBlock;
@property(copy, nonatomic, setter=onProgressChanged:) CDUnknownBlockType progressChangedBlock;
@property(readonly, nonatomic) double progress;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double time;
@end
