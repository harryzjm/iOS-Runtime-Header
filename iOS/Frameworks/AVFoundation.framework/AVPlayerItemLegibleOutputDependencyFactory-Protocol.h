//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFoundation/NSObject-Protocol.h>

@class AVPlayerItem;
@protocol AVPlayerItemOutputHost;

@protocol AVPlayerItemLegibleOutputDependencyFactory <NSObject>
- (id <AVPlayerItemOutputHost>)playerItemOutputHostForPlayerItem:(AVPlayerItem *)arg1;
@end
