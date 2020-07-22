//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerLayer;

@interface PLAVPlayerView : UIView
{
    long long _scaleMode;
}

+ (Class)layerClass;
@property(nonatomic) long long scaleMode; // @synthesize scaleMode=_scaleMode;
@property(readonly, nonatomic) struct CGRect videoRect;
- (void)setScaleMode:(long long)arg1 duration:(double)arg2;
@property(retain, nonatomic) AVPlayer *player;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, retain, nonatomic) AVPlayerLayer *layer; // @dynamic layer;

@end

