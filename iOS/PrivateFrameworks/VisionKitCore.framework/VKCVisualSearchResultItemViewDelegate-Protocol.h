//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VisionKitCore/NSObject-Protocol.h>

@class NSArray, VKCVisualSearchResultItemView;

@protocol VKCVisualSearchResultItemViewDelegate <NSObject>
- (void)triggerTapToRadar;
- (struct CGRect)contentsRect;
- (_Bool)visualSearchItemView:(VKCVisualSearchResultItemView *)arg1 shouldBeginAtPoint:(struct CGPoint)arg2;
- (void)generateVisualSearchResultForItems:(NSArray *)arg1 queryID:(unsigned long long)arg2 completionHandler:(void (^)(_Bool, VKCVisualSearchResult *, NSError *))arg3;
- (void)visualSearchItemViewDidDismissController:(VKCVisualSearchResultItemView *)arg1;
- (void)visualSearchItemView:(VKCVisualSearchResultItemView *)arg1 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect)arg2;

@optional
- (void)visualSearchItemView:(VKCVisualSearchResultItemView *)arg1 didProcessResultsWithDuration:(double)arg2;
@end
