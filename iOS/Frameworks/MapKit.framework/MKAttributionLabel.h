//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface MKAttributionLabel : UIView
{
    NSAttributedString *_strokeText;
    NSAttributedString *_innerText;
    unsigned long long _mapType;
    _Bool _useDarkText;
    long long _displayStyle;
}

- (void).cxx_destruct;
@property(nonatomic) long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
- (void)drawRect:(struct CGRect)arg1;
- (void)sizeToFit;
- (void)traitEnvironment:(id)arg1 didChangeTraitCollection:(id)arg2;
- (void)_updateTextColor;
- (id)_labelTitle;
- (void)_prepareLabel;
- (id)_attributesWithStroke:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

