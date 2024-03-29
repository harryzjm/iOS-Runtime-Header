//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkPresentation/NSObject-Protocol.h>

@class LPAudio, LPComponentView, NSArray, UIView;
@protocol LPAudioPlayer;

@protocol LPComponentViewHost <NSObject>
- (long long)blurEffectStyleBehindComponentView:(UIView *)arg1;
- (_Bool)allowsVibrancyForComponentView:(UIView *)arg1;
- (id <LPAudioPlayer>)componentView:(LPComponentView *)arg1 playerForAudio:(LPAudio *)arg2;
- (long long)sharedObjectDownloadStateForComponentView:(UIView *)arg1;
- (_Bool)showingDisclosureViewForComponentView:(UIView *)arg1;
- (_Bool)allowsBadgingIconEdgeForComponentView:(UIView *)arg1;
- (long long)rendererStyleForComponentView:(UIView *)arg1;
- (NSArray *)layoutExclusionsForView:(UIView *)arg1;
- (long long)componentView:(LPComponentView *)arg1 allowedImageFilterForFilter:(long long)arg2;
- (void)componentViewDidTapCaptionButton:(UIView *)arg1 buttonType:(long long)arg2;
- (void)componentViewDidChangeMediaState:(LPComponentView *)arg1;
- (void)componentViewDidChangeIntrinsicContentSize:(LPComponentView *)arg1;
- (_Bool)linkHasMediaForComponentView:(LPComponentView *)arg1;
@end

