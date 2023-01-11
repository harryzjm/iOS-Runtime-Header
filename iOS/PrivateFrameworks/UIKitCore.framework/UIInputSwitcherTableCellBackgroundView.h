//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIInputSwitcherTableCellBackgroundView
{
    _Bool _selected;
    _Bool _drawsOpaque;
    _Bool _drawsBorder;
    _Bool _usesDarkTheme;
    int _roundedCorners;
}

@property(nonatomic) int roundedCorners; // @synthesize roundedCorners=_roundedCorners;
@property(nonatomic) _Bool usesDarkTheme; // @synthesize usesDarkTheme=_usesDarkTheme;
@property(nonatomic) _Bool drawsBorder; // @synthesize drawsBorder=_drawsBorder;
@property(nonatomic) _Bool drawsOpaque; // @synthesize drawsOpaque=_drawsOpaque;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (void)drawRect:(struct CGRect)arg1;

@end
