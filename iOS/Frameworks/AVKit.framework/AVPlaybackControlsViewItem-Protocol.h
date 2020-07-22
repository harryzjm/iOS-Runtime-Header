//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/NSObject-Protocol.h>

@protocol AVPlaybackControlsViewItem <NSObject>
@property(nonatomic) _Bool hasFullScreenAppearance;
@property(nonatomic) _Bool hasAlternateAppearance;
@property(readonly, nonatomic, getter=isCollapsedOrExcluded) _Bool collapsedOrExcluded;
@property(nonatomic, getter=isIncluded) _Bool included;
@property(nonatomic, getter=isCollapsed) _Bool collapsed;
@property(nonatomic) struct CGSize extrinsicContentSize;
@end
