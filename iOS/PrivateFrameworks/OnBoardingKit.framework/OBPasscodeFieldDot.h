//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface OBPasscodeFieldDot : UIView
{
    _Bool _filled;
}

@property(nonatomic, getter=isFilled) _Bool filled; // @synthesize filled=_filled;
- (void)_updateView;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)init;

@end
