//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol PXDisplayAssetDataSource;

@interface _PXBrowserDataSourceVisibleContentSnapshot
{
    NSArray *_indexPaths;
    id <PXDisplayAssetDataSource> _dataSource;
    unsigned long long _dateType;
}

@property(readonly, nonatomic) unsigned long long dateType; // @synthesize dateType=_dateType;
@property(readonly, nonatomic) id <PXDisplayAssetDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy, nonatomic) NSArray *indexPaths; // @synthesize indexPaths=_indexPaths;
- (void).cxx_destruct;
- (id)dateInterval;
- (id)initWithDateIntervalGranularity:(unsigned long long)arg1;
- (id)initWithIndexPaths:(id)arg1 dataSource:(id)arg2 dateIntervalGranularity:(unsigned long long)arg3 dateType:(unsigned long long)arg4;

@end
