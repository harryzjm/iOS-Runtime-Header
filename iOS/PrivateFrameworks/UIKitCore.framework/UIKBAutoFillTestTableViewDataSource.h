//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestTableViewDataSource : NSObject
{
    NSMutableDictionary *_rowCountMap;
    NSMutableDictionary *_visibleCellDataMap;
    NSMutableDictionary *_headerDataMap;
    NSMutableDictionary *_footerDataMap;
}

- (void).cxx_destruct;
- (id)viewForFooterInSection:(long long)arg1;
- (id)viewForHeaderInSection:(long long)arg1;
- (double)heightForFooterInSection:(long long)arg1;
- (double)heightForHeaderInSection:(long long)arg1;
- (id)titleForFooterInSection:(long long)arg1;
- (id)titleForHeaderInSection:(long long)arg1;
- (double)heightForRowAtIndexPath:(id)arg1;
- (id)cellForRowAtIndexPath:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
@property(readonly, nonatomic) long long numberOfSections;
- (void)setFooterData:(id)arg1 forSection:(long long)arg2;
- (void)setHeaderData:(id)arg1 forSection:(long long)arg2;
- (void)setCellData:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)setNumberOfRows:(long long)arg1 forSection:(long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

