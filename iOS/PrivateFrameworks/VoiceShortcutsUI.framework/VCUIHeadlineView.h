//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface VCUIHeadlineView : UIView
{
    UILabel *_supertitleLabel;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *supertitleLabel; // @synthesize supertitleLabel=_supertitleLabel;
- (void).cxx_destruct;
- (void)clear;
- (void)updateTitleWithHeadline:(id)arg1 subheadline:(id)arg2 superheadline:(id)arg3 isUtterance:(_Bool)arg4;
- (id)initWithHeadline:(id)arg1 subheadline:(id)arg2 superheadline:(id)arg3 isUtterance:(_Bool)arg4;
- (id)init;

@end

