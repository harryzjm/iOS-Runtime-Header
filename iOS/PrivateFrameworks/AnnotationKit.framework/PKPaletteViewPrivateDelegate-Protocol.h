//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AnnotationKit/PKPaletteViewDelegate-Protocol.h>

@class PKPaletteView, UIColor, UIView;

@protocol PKPaletteViewPrivateDelegate <PKPaletteViewDelegate>

@optional
- (UIView *)paletteViewColorPickerPopoverPresentationSourceView:(PKPaletteView *)arg1;
- (struct CGRect)paletteViewColorPickerPopoverPresentationSourceRect:(PKPaletteView *)arg1;
- (void)paletteView:(PKPaletteView *)arg1 didChangeColor:(UIColor *)arg2;
- (_Bool)paletteView:(PKPaletteView *)arg1 shouldSetSelectedToolColor:(UIColor *)arg2;
@end
