//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVVideoComposition;

@interface ISPlaybackSettings : NSObject
{
    float _audioVolume;
    AVVideoComposition *_videoComposition;
}

@property(nonatomic) float audioVolume; // @synthesize audioVolume=_audioVolume;
@property(retain, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
- (void).cxx_destruct;
- (id)init;

@end
