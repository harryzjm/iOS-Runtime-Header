//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGSingleViewLayoutDelegate-Protocol.h>
#import <PhotosUICore/PXPhotosSectionHeaderLayoutProvider-Protocol.h>
#import <PhotosUICore/_PXImportSectionHeaderLayoutInteractionDelegate-Protocol.h>

@class NSString, PLDateRangeFormatter, PXImportHistorySectionHeaderView, PXPhotosViewModel, UIImage;
@protocol PXPhotosSectionHeaderLayoutViewProvider;

@interface PXImportSectionHeaderLayoutProvider : NSObject <PXGSingleViewLayoutDelegate, _PXImportSectionHeaderLayoutInteractionDelegate, PXPhotosSectionHeaderLayoutProvider>
{
    PXPhotosViewModel *_viewModel;
    id <PXPhotosSectionHeaderLayoutViewProvider> _viewProvider;
    PXImportHistorySectionHeaderView *_referenceHeaderView;
    PLDateRangeFormatter *_dateRangeFormatter;
    UIImage *_gradientImage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *gradientImage; // @synthesize gradientImage=_gradientImage;
@property(readonly, nonatomic) PLDateRangeFormatter *dateRangeFormatter; // @synthesize dateRangeFormatter=_dateRangeFormatter;
@property(readonly, nonatomic) PXImportHistorySectionHeaderView *referenceHeaderView; // @synthesize referenceHeaderView=_referenceHeaderView;
@property(readonly, nonatomic) __weak id <PXPhotosSectionHeaderLayoutViewProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(readonly, nonatomic) PXPhotosViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)sectionHeader:(id)arg1 didToggleSelectedState:(_Bool)arg2;
- (id)configurationForSingleViewLayout:(id)arg1;
- (struct CGSize)singleViewLayout:(id)arg1 desiredSizeForReferenceSize:(struct CGSize)arg2;
- (void)sectionedLayout:(id)arg1 headerLayout:(id)arg2 didChangeDataSource:(id)arg3 sectionIndexPath:(struct PXSimpleIndexPath)arg4 hasSectionChanges:(_Bool)arg5;
- (id)createSectionHeaderLayoutForSectionedLayout:(id)arg1 dataSource:(id)arg2 sectionIndexPath:(struct PXSimpleIndexPath)arg3 spec:(id)arg4 outShouldFloat:(_Bool *)arg5;
- (id)init;
- (id)initWithViewModel:(id)arg1 viewProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
