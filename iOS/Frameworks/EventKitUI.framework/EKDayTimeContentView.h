//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class EKDayTimeView;

@interface EKDayTimeContentView : UIView
{
    EKDayTimeView *_owner;
    struct _NSRange _hourRange;
}

@property(nonatomic) struct _NSRange hourRange; // @synthesize hourRange=_hourRange;
@property(nonatomic) EKDayTimeView *owner; // @synthesize owner=_owner;
- (void)drawRect:(struct CGRect)arg1;

@end
