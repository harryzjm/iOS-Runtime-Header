//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;

@interface CAMLightingNameBadge
{
    _Bool _highlighted;
    long long _lightingType;
    UIView *__snapshotView;
}

@property(retain, nonatomic, setter=_setSnapshotView:) UIView *_snapshotView; // @synthesize _snapshotView=__snapshotView;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) long long lightingType; // @synthesize lightingType=_lightingType;
- (void).cxx_destruct;
- (void)_updateColorsAnimated:(_Bool)arg1;
- (void)_updateText;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
