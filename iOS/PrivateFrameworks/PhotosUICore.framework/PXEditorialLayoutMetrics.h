//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXEditorialLayoutMetrics
{
    _Bool _useSaliency;
    unsigned long long _numberOfColumns;
    double _interTileSpacing;
    double _headerHeight;
    unsigned long long _lowerItemCountThreshold;
    struct UIEdgeInsets _padding;
}

@property(nonatomic) _Bool useSaliency; // @synthesize useSaliency=_useSaliency;
@property(nonatomic) unsigned long long lowerItemCountThreshold; // @synthesize lowerItemCountThreshold=_lowerItemCountThreshold;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) double interTileSpacing; // @synthesize interTileSpacing=_interTileSpacing;
@property(nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

