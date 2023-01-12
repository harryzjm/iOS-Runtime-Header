//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXCollectionsDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXDataSectionManagerEnabling-Protocol.h>

@class NSString, PXDataSectionEnablementForwarder, PXSectionedDataSource, PXSectionedDataSourceManager;

@interface PXNavigationListDataSourceBasedDataSectionManager <PXCollectionsDataSourceManagerObserver, PXDataSectionManagerEnabling>
{
    _Bool _enabled;
    _Bool _hiddenWhenEmpty;
    PXDataSectionEnablementForwarder *_enablementForwarder;
    PXSectionedDataSourceManager *_dataSourceManager;
    PXSectionedDataSource *_dataSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PXSectionedDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic, getter=isHiddenWhenEmpty) _Bool hiddenWhenEmpty; // @synthesize hiddenWhenEmpty=_hiddenWhenEmpty;
@property(readonly, nonatomic) PXSectionedDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(retain, nonatomic) PXDataSectionEnablementForwarder *enablementForwarder; // @synthesize enablementForwarder=_enablementForwarder;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)dataSectionFromDataSource:(id)arg1;
- (id)createDataSection;
- (void)_handleDataSourceChange;
- (void)_updateVisibilityViaDataSectionIfNecessary;
@property(readonly, nonatomic, getter=isDataSectionVisible) _Bool dataSectionVisible;
@property(readonly, nonatomic, getter=isDataSourceEmpty) _Bool dataSourceEmpty;
- (_Bool)allowsEmptyDataSection;
- (id)initWithChildDataSectionManagers:(id)arg1;
- (id)initWithDataSourceManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
