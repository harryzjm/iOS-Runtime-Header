//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSTCellSpec;

__attribute__((visibility("hidden")))
@interface TSTTableDataCellSpec
{
    TSTCellSpec *_cellSpec;
}

@property(readonly, nonatomic) TSTCellSpec *cellSpec; // @synthesize cellSpec=_cellSpec;
- (void).cxx_destruct;
- (void)setCellSpec:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initObjectWithCellSpec:(id)arg1 refCount:(unsigned int)arg2;

@end

