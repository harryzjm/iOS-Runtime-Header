//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSUndoManager, PXPhotosViewLinkController, UIView;

@protocol PXPhotosViewLinkControllerDelegate <NSObject>
- (NSUndoManager *)undoManagerForPhotosViewLinkController:(PXPhotosViewLinkController *)arg1;
- (UIView *)interactionViewForPhotosViewLinkController:(PXPhotosViewLinkController *)arg1;
@end

