//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray;
@protocol UITextSelectionHandleView;

__attribute__((visibility("hidden")))
@interface _UITextSelectionRangeAdjustmentContainerView : UIView
{
    _Bool _selectionGrabbersAreConcreteImpl;
    _Bool _vertical;
    _Bool _portalsLollipopDotsToContainerWindow;
    _Bool _selectionGrabbersHidden;
    double _shapeScale;
    NSArray *_selectionGrabbers;
    struct CGRect _startEdge;
    struct CGRect _endEdge;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *selectionGrabbers; // @synthesize selectionGrabbers=_selectionGrabbers;
@property(nonatomic, getter=areSelectionGrabbersHidden) _Bool selectionGrabbersHidden; // @synthesize selectionGrabbersHidden=_selectionGrabbersHidden;
@property(nonatomic) _Bool portalsLollipopDotsToContainerWindow; // @synthesize portalsLollipopDotsToContainerWindow=_portalsLollipopDotsToContainerWindow;
@property(nonatomic) double shapeScale; // @synthesize shapeScale=_shapeScale;
@property(nonatomic, getter=isVertical) _Bool vertical; // @synthesize vertical=_vertical;
@property(nonatomic) struct CGRect endEdge; // @synthesize endEdge=_endEdge;
@property(nonatomic) struct CGRect startEdge; // @synthesize startEdge=_startEdge;
- (void)layoutSubviews;
- (void)_setPortalsLollipopDotsToContainerWindow:(_Bool)arg1;
- (void)setHidden:(_Bool)arg1;
- (id)textInputView;
@property(readonly, nonatomic, getter=areSelectionGrabbersConcreteImpl) _Bool selectionGrabbersAreConcreteImpl;
@property(readonly, nonatomic) UIView<UITextSelectionHandleView> *trailingLollipopView;
@property(readonly, nonatomic) UIView<UITextSelectionHandleView> *leadingLollipopView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

