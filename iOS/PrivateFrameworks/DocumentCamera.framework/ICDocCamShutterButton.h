//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

__attribute__((visibility("hidden")))
@interface ICDocCamShutterButton : UIButton
{
    _Bool _pseudoDisabled;
}

@property(nonatomic, getter=isPseudoDisabled) _Bool pseudoDisabled; // @synthesize pseudoDisabled=_pseudoDisabled;
- (id)innerCircle;
- (id)outerRingImage;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

