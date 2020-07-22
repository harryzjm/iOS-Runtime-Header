//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableDictionary;

@interface PXFileBackedAssetsDataSourceManager
{
    NSMutableDictionary *_fileURLsBySection;
}

@property(readonly, nonatomic) NSDictionary *fileURLsBySection; // @synthesize fileURLsBySection=_fileURLsBySection;
- (void).cxx_destruct;
- (void)insertFileURL:(id)arg1 atIndex:(long long)arg2 inSection:(long long)arg3;
- (void)removeFileURLsAtIndexes:(id)arg1 inSection:(long long)arg2;
- (void)_createDataSource;
- (id)initWithFileURLsBySection:(id)arg1;

@end
