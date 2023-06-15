//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class CKDropZoneCircleView, CKPinnedConversationView, UILabel;

__attribute__((visibility("hidden")))
@interface CKPinnedConversationDropTargetCollectionViewCell : UICollectionViewCell
{
    _Bool _shouldHideLabel;
    _Bool _shouldAnimateCircle;
    long long _layoutStyle;
    CKDropZoneCircleView *_dropZoneCircleView;
    UILabel *_instructionLabel;
    CKPinnedConversationView *_prototypeConversationView;
}

+ (id)reuseIdentifier;
+ (id)uniqueIdentifierForDropTargetAtItemIndex:(long long)arg1;
+ (id)uniqueIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) CKPinnedConversationView *prototypeConversationView; // @synthesize prototypeConversationView=_prototypeConversationView;
@property(retain, nonatomic) UILabel *instructionLabel; // @synthesize instructionLabel=_instructionLabel;
@property(retain, nonatomic) CKDropZoneCircleView *dropZoneCircleView; // @synthesize dropZoneCircleView=_dropZoneCircleView;
@property(nonatomic) _Bool shouldAnimateCircle; // @synthesize shouldAnimateCircle=_shouldAnimateCircle;
@property(nonatomic) _Bool shouldHideLabel; // @synthesize shouldHideLabel=_shouldHideLabel;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (void)_updateInstructionLabelColor;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateFont;
- (id)initWithFrame:(struct CGRect)arg1;

@end

