//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TemplateKit/NUIContainerViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, NUIContainerStackView;

@interface TLKImagesView <NUIContainerViewDelegate>
{
    _Bool _paddingDisabled;
    NSArray *_images;
    NSMutableArray *_imageViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(nonatomic, getter=isPaddingDisabled) _Bool paddingDisabled; // @synthesize paddingDisabled=_paddingDisabled;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (void)updateWithImages:(id)arg1;
- (void)updateForPaddingDisabled:(_Bool)arg1;
- (void)observedPropertiesChanged;
- (_Bool)usesDefaultLayoutMargins;
- (id)setupContentView;

// Remaining properties
@property(retain, nonatomic) NUIContainerStackView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
