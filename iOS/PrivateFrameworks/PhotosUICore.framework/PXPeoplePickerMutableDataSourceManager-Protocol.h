//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXMutableSectionedDataSourceManager-Protocol.h>

@class NSArray, PHFetchResult, PHPhotoLibrary;

@protocol PXPeoplePickerMutableDataSourceManager <PXMutableSectionedDataSourceManager>
- (void)deselectAllLocalIdentifiers;
- (void)setLocalIdentifiers:(NSArray *)arg1 selected:(_Bool)arg2;
- (void)setDisabledLocalIdentifiers:(NSArray *)arg1;
- (void)setSuggestedLocalIdentifiers:(NSArray *)arg1 withPhotoLibrary:(PHPhotoLibrary *)arg2;
- (void)setPeople:(PHFetchResult *)arg1;
@end

