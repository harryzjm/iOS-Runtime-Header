//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _UIStatusBarRegionStackingLayout
{
    _Bool _hugging;
    long long _horizontalAlignment;
    double _interspace;
}

@property(nonatomic) _Bool hugging; // @synthesize hugging=_hugging;
@property(nonatomic) double interspace; // @synthesize interspace=_interspace;
@property(nonatomic) long long horizontalAlignment; // @synthesize horizontalAlignment=_horizontalAlignment;
- (_Bool)fitsAllItems;
- (id)_horizontalConstraintsForViews:(id)arg1 layoutGuides:(id)arg2;

@end

