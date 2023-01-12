//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, PUParallaxLayerStackViewModel;

__attribute__((visibility("hidden")))
@interface PUParallaxLayerStackView : UIView
{
    PUParallaxLayerStackViewModel *_viewModel;
    struct CGPoint _motionVector;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint motionVector; // @synthesize motionVector=_motionVector;
@property(retain, nonatomic) PUParallaxLayerStackViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)updateLayerViewContents;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateContainerFrame;
- (void)setFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

