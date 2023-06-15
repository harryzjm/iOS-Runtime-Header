//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSArray, UIImage, VUIScoreboardLayout;
@protocol VUIScorecardViewDelegate;

__attribute__((visibility("hidden")))
@interface VUIScorecardView : UIView
{
    _Bool _didCalculatedSize;
    _Bool _delegateRespondsToBackgroundImageForScorecardViewMaterial;
    _Bool _delegateRespondsToBackgroundBlendModeForScoreValueInRowAtIndex;
    id <VUIScorecardViewDelegate> _delegate;
    VUIScoreboardLayout *_scoreboardLayout;
    double _interitemSpacing;
    NSArray *_rowScoreValueSizes;
    NSArray *_columnWidths;
    NSArray *_rowHeights;
    UIImage *_darkMaterialImage;
    struct CGSize _scorecardSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool delegateRespondsToBackgroundBlendModeForScoreValueInRowAtIndex; // @synthesize delegateRespondsToBackgroundBlendModeForScoreValueInRowAtIndex=_delegateRespondsToBackgroundBlendModeForScoreValueInRowAtIndex;
@property(nonatomic) _Bool delegateRespondsToBackgroundImageForScorecardViewMaterial; // @synthesize delegateRespondsToBackgroundImageForScorecardViewMaterial=_delegateRespondsToBackgroundImageForScorecardViewMaterial;
@property(retain, nonatomic) UIImage *darkMaterialImage; // @synthesize darkMaterialImage=_darkMaterialImage;
@property(retain, nonatomic) NSArray *rowHeights; // @synthesize rowHeights=_rowHeights;
@property(retain, nonatomic) NSArray *columnWidths; // @synthesize columnWidths=_columnWidths;
@property(retain, nonatomic) NSArray *rowScoreValueSizes; // @synthesize rowScoreValueSizes=_rowScoreValueSizes;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) struct CGSize scorecardSize; // @synthesize scorecardSize=_scorecardSize;
@property(nonatomic) _Bool didCalculatedSize; // @synthesize didCalculatedSize=_didCalculatedSize;
@property(retain, nonatomic) VUIScoreboardLayout *scoreboardLayout; // @synthesize scoreboardLayout=_scoreboardLayout;
@property(nonatomic) __weak id <VUIScorecardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)_calculateMetricsOfScorecard;
- (void)drawRect:(struct CGRect)arg1;
- (void)_calculateColumnSpacing;
- (_Bool)_useAbbreviationsUI;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)invalidateData;

@end

