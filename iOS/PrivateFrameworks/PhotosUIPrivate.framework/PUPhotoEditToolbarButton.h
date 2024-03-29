//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXUIButton.h>

@class NSString, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface PUPhotoEditToolbarButton : PXUIButton
{
    _Bool _isTopToolbarButton;
    _Bool _selectedGlyphHasHighlightColor;
    _Bool _usesHierarchicalColor;
    CDUnknownBlockType _actionBlock;
    UILabel *_toolLabel;
    NSString *_title;
    NSString *_unselectedGlyphName;
    NSString *_selectedGlyphName;
    UIImageView *_selectionIndicator;
    long long _selectionIndicatorType;
}

+ (id)constraintsForSelectionIndicatorType:(long long)arg1 buttonImageView:(id)arg2 selectionIndicator:(id)arg3;
+ (id)selectionIndicatorImageForType:(long long)arg1;
+ (id)buttonWithImageNamed:(id)arg1 selectedImageNamed:(id)arg2 accessibilityLabel:(id)arg3;
+ (id)buttonForTool:(id)arg1 showingLabel:(_Bool)arg2 selectionIndicatorType:(long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) long long selectionIndicatorType; // @synthesize selectionIndicatorType=_selectionIndicatorType;
@property(nonatomic) _Bool usesHierarchicalColor; // @synthesize usesHierarchicalColor=_usesHierarchicalColor;
@property(retain, nonatomic) UIImageView *selectionIndicator; // @synthesize selectionIndicator=_selectionIndicator;
@property(retain, nonatomic) NSString *selectedGlyphName; // @synthesize selectedGlyphName=_selectedGlyphName;
@property(retain, nonatomic) NSString *unselectedGlyphName; // @synthesize unselectedGlyphName=_unselectedGlyphName;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool selectedGlyphHasHighlightColor; // @synthesize selectedGlyphHasHighlightColor=_selectedGlyphHasHighlightColor;
@property(nonatomic) _Bool isTopToolbarButton; // @synthesize isTopToolbarButton=_isTopToolbarButton;
@property(retain, nonatomic) UILabel *toolLabel; // @synthesize toolLabel=_toolLabel;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (id)largeContentImage;
- (id)largeContentTitle;
- (struct CGRect)accessibilityFrame;
- (id)imageForState:(unsigned long long)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)buttonTouchUpAction:(id)arg1;
- (void)updateConfiguration;
- (id)unselectedConfiguration;
- (id)selectedConfiguration;
- (id)imageConfigurationForSelectedState:(_Bool)arg1;
- (id)baseConfiguration;

@end

