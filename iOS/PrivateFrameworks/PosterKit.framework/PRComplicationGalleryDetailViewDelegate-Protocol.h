//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterKit/NSObject-Protocol.h>

@class PRComplicationGalleryDetailView;

@protocol PRComplicationGalleryDetailViewDelegate <NSObject>
- (void)complicationGalleryViewDidTapClose:(PRComplicationGalleryDetailView *)arg1;
- (void)complicationGalleryViewShouldUpdateParallax:(PRComplicationGalleryDetailView *)arg1;
- (void)complicationGalleryView:(PRComplicationGalleryDetailView *)arg1 didUpdateVisiblePagesWithAppearedBlock:(_Bool (^)(unsigned long long))arg2;
@end

