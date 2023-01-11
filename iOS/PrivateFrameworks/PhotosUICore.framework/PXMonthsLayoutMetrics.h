//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXMonthsLayoutMetrics
{
    long long _sizeClass;
    long long _orientation;
    double _interitemSpacing;
    double _defaultSectionAspectRatio;
    double _chapterHeaderHeight;
    struct UIEdgeInsets _padding;
    struct UIEdgeInsets _chapterHeaderPadding;
}

@property(nonatomic) struct UIEdgeInsets chapterHeaderPadding; // @synthesize chapterHeaderPadding=_chapterHeaderPadding;
@property(nonatomic) double chapterHeaderHeight; // @synthesize chapterHeaderHeight=_chapterHeaderHeight;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) double defaultSectionAspectRatio; // @synthesize defaultSectionAspectRatio=_defaultSectionAspectRatio;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) long long sizeClass; // @synthesize sizeClass=_sizeClass;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
