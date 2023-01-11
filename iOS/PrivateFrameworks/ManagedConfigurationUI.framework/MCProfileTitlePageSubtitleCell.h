//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <ManagedConfigurationUI/MCUIScrollAnimationResponder-Protocol.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface MCProfileTitlePageSubtitleCell : UITableViewCell <MCUIScrollAnimationResponder>
{
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateProgressWithTranslationDistance:(double)arg1 referenceDistance:(double)arg2 isScrolling:(_Bool)arg3;
- (void)_updateConstraintsWithLabel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
