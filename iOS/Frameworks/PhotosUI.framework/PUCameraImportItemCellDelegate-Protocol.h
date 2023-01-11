//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUCameraImportItemCell, PXImportItemViewModel;

@protocol PUCameraImportItemCellDelegate <NSObject>
- (void)handleTouchEvent:(long long)arg1 forCell:(PUCameraImportItemCell *)arg2;
- (void)importCell:(PUCameraImportItemCell *)arg1 didRequestCancellationOfThumbnailRequestWithID:(long long)arg2;
- (long long)contentFillModeForImportCell:(PUCameraImportItemCell *)arg1;
- (long long)importCell:(PUCameraImportItemCell *)arg1 requestImageForImportItem:(PXImportItemViewModel *)arg2 ofSize:(unsigned long long)arg3 completion:(void (^)(UIImage *, unsigned long long, _Bool))arg4;
@end
