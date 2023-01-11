//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

#import <HomeUI/UITextViewDelegate-Protocol.h>

@class HUGridLayoutOptions, NSArray, NSString, UILabel, UITextView;
@protocol HFStringGenerator;

@interface HUStatusDetailsTitleDescriptionCell : UICollectionViewCell <UITextViewDelegate>
{
    HUGridLayoutOptions *_layoutOptions;
    UITextView *_descriptionTextView;
    UILabel *_titleLabel;
    NSArray *_labelConstraints;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *labelConstraints; // @synthesize labelConstraints=_labelConstraints;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UITextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) HUGridLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
- (void)layoutSubviews;
- (void)_layoutContentApplyingFrames:(_Bool)arg1 forTargetSize:(struct CGSize)arg2 desiredSize:(out struct CGSize *)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(copy, nonatomic) id <HFStringGenerator> descriptionText;
@property(copy, nonatomic) id <HFStringGenerator> titleText;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
