//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, PXSectionedDataSource;
@protocol PXGSublayoutProvider;

@protocol PXGDataSourceDrivenLayout <NSObject>
- (void)applySectionedChangedDetailsForSingleSection:(NSArray *)arg1 dataSourceAfterChanges:(PXSectionedDataSource *)arg2 changeMediaVersionHandler:(_Bool (^)(struct PXSimpleIndexPath, struct PXSimpleIndexPath))arg3;
- (void)applySectionedChangeDetails:(NSArray *)arg1 dataSourceAfterChanges:(PXSectionedDataSource *)arg2 sublayoutProvider:(id <PXGSublayoutProvider>)arg3 outChangedSections:(id *)arg4 outSectionsWithItemChanges:(id *)arg5 changeMediaVersionHandler:(_Bool (^)(struct PXSimpleIndexPath, struct PXSimpleIndexPath))arg6;
@end
