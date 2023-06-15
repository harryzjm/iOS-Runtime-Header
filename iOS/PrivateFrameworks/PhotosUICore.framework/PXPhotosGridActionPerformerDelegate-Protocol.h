//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXActionPerformerDelegate-Protocol.h>

@class PXContentFilterState, PXLibraryFilterState, PXPhotosGridActionPerformer;

@protocol PXPhotosGridActionPerformerDelegate <PXActionPerformerDelegate>

@optional
- (void)photosGridActionPerformer:(PXPhotosGridActionPerformer *)arg1 contentFilterStateChanged:(PXContentFilterState *)arg2;
- (void)photosGridActionPerformer:(PXPhotosGridActionPerformer *)arg1 libraryFilterStateChanged:(PXLibraryFilterState *)arg2;
@end

