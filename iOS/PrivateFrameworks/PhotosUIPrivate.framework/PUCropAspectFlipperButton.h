//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIButton.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface PUCropAspectFlipperButton : UIButton
{
    CALayer *_pageLayer;
    CALayer *_selectionCheckboxLayer;
    long long _orientation;
}

- (void).cxx_destruct;
@property long long orientation; // @synthesize orientation=_orientation;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;

@end

