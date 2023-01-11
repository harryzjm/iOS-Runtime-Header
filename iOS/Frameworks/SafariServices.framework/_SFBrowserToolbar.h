//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/_SFBarRegistrationObserving-Protocol.h>

@class NSString;
@protocol _SFBarRegistrationToken, _SFBrowserToolbarDataSource;

__attribute__((visibility("hidden")))
@interface _SFBrowserToolbar <_SFBarRegistrationObserving>
{
    id <_SFBarRegistrationToken> _barRegistration;
    id <_SFBrowserToolbarDataSource> _dataSource;
}

@property(nonatomic) __weak id <_SFBrowserToolbarDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)didCompleteBarRegistrationWithToken:(id)arg1;
- (id)popoverSourceInfoForBarItem:(long long)arg1;
- (double)_contentMargin;
- (double)URLFieldHorizontalMargin;
@property(readonly, nonatomic) double differenceBetweenWidthsOfLeadingAndTrailingItems;
- (double)_totalWidthOfLeadingItems;
- (double)_totalWidthOfTrailingItems;
- (void)layoutSubviews;
- (_Bool)isMinibar;
- (id)_toolbarItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

