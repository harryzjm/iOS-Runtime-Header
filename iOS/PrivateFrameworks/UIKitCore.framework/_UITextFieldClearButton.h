//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol _UITextFieldClearButtonImageProviding;

__attribute__((visibility("hidden")))
@interface _UITextFieldClearButton
{
    _Bool _hasCustomImage;
    id <_UITextFieldClearButtonImageProviding> _imageProvider;
}

+ (_Bool)_cursorInteractionEnabled;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasCustomImage; // @synthesize hasCustomImage=_hasCustomImage;
@property(nonatomic) __weak id <_UITextFieldClearButtonImageProviding> imageProvider; // @synthesize imageProvider=_imageProvider;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;
- (id)cursorInteraction:(id)arg1 regionForLocation:(struct CGPoint)arg2 defaultRegion:(id)arg3;
- (id)_defaultImageForState:(unsigned long long)arg1 withConfiguration:(id)arg2;
- (_Bool)_shouldDefaultToTemplatesForImageViewBackground:(_Bool)arg1;
- (_Bool)_isModernButton;

@end
