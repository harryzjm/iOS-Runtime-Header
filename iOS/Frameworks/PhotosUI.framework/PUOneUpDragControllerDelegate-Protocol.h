//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUOneUpDragController, PUOverOneUpPresentationSession, PUTileViewController, PUTilingView, UIView;

@protocol PUOneUpDragControllerDelegate <NSObject>
- (PUOverOneUpPresentationSession *)overOneUpPresentationSessionForDragController:(PUOneUpDragController *)arg1;
- (UIView *)hitTestViewForOneUpDragController:(PUOneUpDragController *)arg1;
- (PUTilingView *)tilingViewForOneUpDragController:(PUOneUpDragController *)arg1;
- (PUTileViewController *)tileViewForOneUpDragController:(PUOneUpDragController *)arg1;
@end

