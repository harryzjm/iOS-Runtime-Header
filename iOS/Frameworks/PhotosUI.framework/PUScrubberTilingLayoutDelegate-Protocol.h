//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSIndexPath, PUScrubberTilingLayout;

@protocol PUScrubberTilingLayoutDelegate <NSObject>

@optional
- (_Bool)layout:(PUScrubberTilingLayout *)arg1 shouldShowTimeIndicatorForExpandedItemAtIndexPath:(NSIndexPath *)arg2;
- (float)layout:(PUScrubberTilingLayout *)arg1 aspectRatioForItemAtIndexPath:(NSIndexPath *)arg2;
@end

