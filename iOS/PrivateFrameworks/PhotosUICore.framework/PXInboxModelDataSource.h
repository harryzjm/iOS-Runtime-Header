//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXInboxModelDataSourceBase-Protocol.h>

@class NSArray, NSString;

@interface PXInboxModelDataSource <PXInboxModelDataSourceBase>
{
    NSArray *_models;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *models; // @synthesize models=_models;
- (struct PXSimpleIndexPath)indexPathForModel:(id)arg1;
- (id)modelAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)init;
- (id)initWithModels:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
