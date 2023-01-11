//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITapGestureRecognizer.h>

@class RTTUIAbbreviationView;

@interface RTTAbbreviationTapGestureRecognizer : UITapGestureRecognizer
{
    RTTUIAbbreviationView *_abbrevationView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak RTTUIAbbreviationView *abbrevationView; // @synthesize abbrevationView=_abbrevationView;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)ignoreTouch:(id)arg1 forEvent:(id)arg2;

@end
