//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, SXDataTableBlueprint;
@protocol SXDataTableDataSource, SXDataTableViewDataSource;

@interface SXDataTableView
{
    id <SXDataTableViewDataSource> _viewDataSource;
    id <SXDataTableDataSource> _dataSource;
    SXDataTableBlueprint *_blueprint;
    NSMutableDictionary *_rowViews;
    NSMutableDictionary *_columnViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *columnViews; // @synthesize columnViews=_columnViews;
@property(retain, nonatomic) NSMutableDictionary *rowViews; // @synthesize rowViews=_rowViews;
@property(retain, nonatomic) SXDataTableBlueprint *blueprint; // @synthesize blueprint=_blueprint;
@property(nonatomic) __weak id <SXDataTableDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) __weak id <SXDataTableViewDataSource> viewDataSource; // @synthesize viewDataSource=_viewDataSource;
- (id)viewForColumnAtIndex:(unsigned long long)arg1;
- (id)viewForRowAtIndex:(unsigned long long)arg1;
- (struct CGPoint)originOffset;
- (void)draw:(CDUnknownBlockType)arg1 forIndexPath:(CDStruct_2fea82da)arg2;
- (void)prepareDrawingForBlueprint:(id)arg1;
- (CDStruct_2fea82da)indexPathForPoint:(struct CGPoint)arg1;
- (void)layoutCellsForBlueprint:(id)arg1;
- (void)reset;
- (id)initWithDataSource:(id)arg1;

@end
