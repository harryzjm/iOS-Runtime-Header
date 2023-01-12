//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSSet, NSTextContainer, UIColor, UIView, _UITextLayoutController;

@protocol _UITextCanvasContext <NSObject>
@property(readonly, nonatomic) struct CGRect _clipRectForFadedEdges;
@property(readonly, nonatomic) struct CGPoint drawingScale;
@property(readonly, nonatomic, getter=isEditable) _Bool editable;
@property(readonly, nonatomic) UIColor *textColor;
@property(readonly, nonatomic) struct CGPoint textContainerOrigin;
@property(readonly, nonatomic) NSTextContainer *textContainer;
@property(readonly, nonatomic) _UITextLayoutController *textLayoutController;
- (_Bool)drawTextInRectIfNeeded:(struct CGRect)arg1;
- (void)didLayoutTextAttachmentView:(UIView *)arg1 inFragmentRect:(struct CGRect)arg2;
- (void)didRemoveTextAttachmentViews:(NSSet *)arg1;
- (void)didAddTextAttachmentViews:(NSSet *)arg1;
- (void)textContainerUsageDidChangeToBounds:(struct CGRect)arg1;
@end
