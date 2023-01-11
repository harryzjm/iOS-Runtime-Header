//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>

@class NSString, PXSectionedDataSource, PXSectionedDataSourceManager, PXSectionedSelectionManager, PXSelectionSnapshot, PXUIMediaProvider;

@interface PXAssetsSession <PXSectionedDataSourceManagerObserver>
{
    PXSectionedDataSource *_dataSource;
    PXSelectionSnapshot *_selectionSnapshot;
    PXSectionedDataSourceManager *_dataSourceManager;
    PXUIMediaProvider *_mediaProvider;
    PXSectionedSelectionManager *_selectionManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PXSectionedSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
@property(readonly, nonatomic) PXUIMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) PXSectionedDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(retain, nonatomic) PXSelectionSnapshot *selectionSnapshot; // @synthesize selectionSnapshot=_selectionSnapshot;
@property(retain, nonatomic) PXSectionedDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateDataSourceDependentProperties;
- (id)mutableChangeObject;
- (id)init;
- (id)initWithDataSourceManager:(id)arg1 mediaProvider:(id)arg2 selectionManager:(id)arg3;
- (id)initWithDataSourceManager:(id)arg1 mediaProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
