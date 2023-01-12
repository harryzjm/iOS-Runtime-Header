//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PaperKit/NSObject-Protocol.h>

@class NSUndoManager, PKToolPicker, UIColor, UIView;

@protocol PKToolPickerPrivateDelegate <NSObject>

@optional
- (void)_toggleLassoToolEditingViewColorPickerForToolPicker:(PKToolPicker *)arg1;
- (UIColor *)_toolPickerCurrentSelectionColor:(PKToolPicker *)arg1;
- (_Bool)_toolPicker:(PKToolPicker *)arg1 shouldChangeSelectedToolColor:(UIColor *)arg2;
- (NSUndoManager *)_toolPickerUndoManager:(PKToolPicker *)arg1;
- (void)_toolPicker:(PKToolPicker *)arg1 shouldSetVisible:(_Bool)arg2;
- (UIView *)_colorPickerPopoverPresentationSourceView:(PKToolPicker *)arg1;
- (struct CGRect)_colorPickerPopoverPresentationSourceRect:(PKToolPicker *)arg1;
@end

