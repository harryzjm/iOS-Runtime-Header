//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@protocol MKPlaceAttributionCellButtonDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceAttributionCellButton : UIButton
{
    _Bool _highlighted;
    id <MKPlaceAttributionCellButtonDelegate> _buttonDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MKPlaceAttributionCellButtonDelegate> buttonDelegate; // @synthesize buttonDelegate=_buttonDelegate;
- (_Bool)isHighlighted;
- (void)setHighlighted:(_Bool)arg1;

@end
