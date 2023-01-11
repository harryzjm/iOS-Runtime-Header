//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PUImportItemViewModel, PUImportOneUpCell;

@protocol PUImportOneUpCellDisplayDelegate
- (void)importOneUpCell:(PUImportOneUpCell *)arg1 didRequestCancellationOfThumbnailRequestWithID:(long long)arg2;
- (long long)importOneUpCell:(PUImportOneUpCell *)arg1 requestedThumbnailForImportItem:(PUImportItemViewModel *)arg2 completion:(void (^)(UIImage *, _Bool))arg3;
- (void)importOneUpCell:(PUImportOneUpCell *)arg1 requestedBadgeUpdateForImportItem:(PUImportItemViewModel *)arg2;
@end
