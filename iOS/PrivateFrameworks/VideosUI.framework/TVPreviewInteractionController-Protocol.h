//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class IKViewElement, NSIndexPath, UICollectionView;

@protocol TVPreviewInteractionController <NSObject>
- (void)dismissInteractionView;
- (void)updatePresentingElement:(IKViewElement *)arg1;
- (_Bool)collectionView:(UICollectionView *)arg1 shouldHandleLongPressForItemAtIndexPath:(NSIndexPath *)arg2;
@end
