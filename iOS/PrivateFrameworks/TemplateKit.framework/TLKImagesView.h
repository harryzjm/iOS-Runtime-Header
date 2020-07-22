//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TemplateKit/NUIContainerStackViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, NUIContainerStackView;

@interface TLKImagesView <NUIContainerStackViewDelegate>
{
    NSArray *_images;
    NSMutableArray *_imageViews;
    NUIContainerStackView *_stackView;
}

@property(retain) NUIContainerStackView *stackView; // @synthesize stackView=_stackView;
@property(retain) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain) NSArray *images; // @synthesize images=_images;
- (void).cxx_destruct;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (void)updateWithImages:(id)arg1;
- (void)observedPropertiesChanged;
- (id)observableProperties;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

