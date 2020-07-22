//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class NSArray, NSString;
@protocol MCUIInfoListDelegate;

@interface MCUIInfoListController : PSListController
{
    id <MCUIInfoListDelegate> _delegate;
    NSArray *_info;
    NSString *_navTitle;
    NSString *_continueButtonTitle;
}

@property(retain, nonatomic) NSString *continueButtonTitle; // @synthesize continueButtonTitle=_continueButtonTitle;
@property(nonatomic) __weak id <MCUIInfoListDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
@property(copy, nonatomic) NSArray *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_setupNavBar:(_Bool)arg1;
- (void)_cancelButtonClicked;
- (void)_installButtonClicked;
- (void)_tellDelegateWeWantToContinue:(_Bool)arg1;

@end
