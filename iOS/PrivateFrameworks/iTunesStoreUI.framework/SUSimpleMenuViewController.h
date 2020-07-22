//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface SUSimpleMenuViewController
{
    NSString *_cancelButtonTitle;
    NSArray *_titles;
}

@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
- (void)_cancelAction:(id)arg1;
- (void)reloadContentSizeForViewInPopover;
- (id)titleOfMenuItemAtIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (_Bool)isMenuItemEnabledAtIndex:(long long)arg1;
- (void)dealloc;
- (id)initWithTitles:(id)arg1;

@end

