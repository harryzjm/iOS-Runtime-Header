//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface SUSimpleTableDataSource
{
    Class _cellConfigurationClass;
    NSArray *_objects;
}

@property(retain, nonatomic) NSArray *objects; // @synthesize objects=_objects;
@property(retain, nonatomic) Class cellConfigurationClass; // @synthesize cellConfigurationClass=_cellConfigurationClass;
- (void)reloadCellContexts;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (double)cellHeightForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (id)objectForIndexPath:(id)arg1;
- (void)dealloc;

@end

