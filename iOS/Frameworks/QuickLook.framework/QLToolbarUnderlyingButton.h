//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface QLToolbarUnderlyingButton : UIButton
{
    NSString *_identifier;
    struct CGRect _selectedIndicatorBounds;
}

@property struct CGRect selectedIndicatorBounds; // @synthesize selectedIndicatorBounds=_selectedIndicatorBounds;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (struct CGRect)_selectedIndicatorBounds;

@end
