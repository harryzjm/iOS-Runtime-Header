//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIMenuLeaf-Protocol.h>

@class NSArray, NSAttributedString, NSString, UIImage, _UIMenuLeafValidation;
@protocol UIPopoverPresentationControllerSourceItem, _UIMenuLeaf, _UIMenuLeafAlternate;

@protocol _UIMenuLeaf <UIMenuLeaf>
@property(readonly, nonatomic) id <UIPopoverPresentationControllerSourceItem> presentationSourceItem;
@property(copy, nonatomic) UIImage *selectedImage;
@property(readonly, nonatomic) _Bool keepsMenuPresented;
@property(readonly, nonatomic) _Bool requiresAuthenticatedInput;
@property(copy, nonatomic) NSAttributedString *attributedTitle;
- (id <_UIMenuLeaf>)_validatedLeafWithAlternate:(id <_UIMenuLeafAlternate>)arg1 target:(id)arg2 validation:(_UIMenuLeafValidation *)arg3;
- (id)_resolvedTargetFromFirstTarget:(id)arg1 sender:(id)arg2;
- (_Bool)_isDefaultCommand;
- (long long)_leafKeyModifierFlags;
- (NSString *)_leafKeyInput;
- (NSArray *)_leafAlternates;
@end

