//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXPhotosDetailsBarsContentView-Protocol.h>

@class NSArray, NSString, UIColor, UIFont, UILabel;

@interface PXNavigationTitleView : UIView <PXPhotosDetailsBarsContentView>
{
    _Bool _isPerformingChanges;
    _Bool _isPerformingUpdates;
    struct {
        _Bool texts;
        _Bool fonts;
        _Bool constraints;
        _Bool size;
    } _needsUpdateFlags;
    _Bool __subtitleVisible;
    long long _verticalSizeClass;
    NSString *_title;
    NSString *_subtitle;
    UIColor *_titleTextColor;
    UIColor *_subtitleTextColor;
    UIFont *_titleFont;
    UIFont *_subtitleFont;
    long long _textAlignment;
    double _subviewsAlpha;
    UILabel *__titleLabel;
    UILabel *__subtitleLabel;
    NSArray *__constraints;
    struct UIEdgeInsets _margins;
}

@property(retain, nonatomic, setter=_setConstraints:) NSArray *_constraints; // @synthesize _constraints=__constraints;
@property(nonatomic, getter=_isSubtitleVisible, setter=_setSubtitleVisible:) _Bool _subtitleVisible; // @synthesize _subtitleVisible=__subtitleVisible;
@property(readonly, nonatomic) UILabel *_subtitleLabel; // @synthesize _subtitleLabel=__subtitleLabel;
@property(readonly, nonatomic) UILabel *_titleLabel; // @synthesize _titleLabel=__titleLabel;
@property(nonatomic) double subviewsAlpha; // @synthesize subviewsAlpha=_subviewsAlpha;
@property(nonatomic, setter=setMargins:) struct UIEdgeInsets margins; // @synthesize margins=_margins;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *subtitleTextColor; // @synthesize subtitleTextColor=_subtitleTextColor;
@property(retain, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long verticalSizeClass; // @synthesize verticalSizeClass=_verticalSizeClass;
- (void).cxx_destruct;
- (void)_updateSizeIfNeeded;
- (void)_invalidateSize;
- (void)_updateConstraintsIfNeeded;
- (void)_invalidateConstraints;
- (void)_updateFontsIfNeeded;
- (void)_invalidateFonts;
- (void)_updateTextsIfNeeded;
- (void)_invalidateTexts;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (_Bool)_needsUpdate;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

