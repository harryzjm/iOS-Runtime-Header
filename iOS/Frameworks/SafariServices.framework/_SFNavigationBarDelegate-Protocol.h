//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/_SFNavigationBarDelegateCommon-Protocol.h>

@class NSItemProvider, NSURL, NSUUID, UIToolbar, _SFNavigationBar, _SFNavigationIntent;

@protocol _SFNavigationBarDelegate <_SFNavigationBarDelegateCommon>
- (NSURL *)navigationBarURLForSharing:(_SFNavigationBar *)arg1;
- (void)navigationBarCancelButtonWasTapped:(_SFNavigationBar *)arg1;

@optional
- (void)navigationBarDidLayoutSubviews:(_SFNavigationBar *)arg1;
- (void)navigationBar:(_SFNavigationBar *)arg1 didCreateLeadingToolbar:(UIToolbar *)arg2 trailingToolbar:(UIToolbar *)arg3;
- (NSUUID *)currentContentUUIDForNavigationBar:(_SFNavigationBar *)arg1;
- (long long)dataOwnerForNavigationBar:(_SFNavigationBar *)arg1;
- (NSItemProvider *)itemProviderForNavigationBar:(_SFNavigationBar *)arg1;
- (void)navigationBar:(_SFNavigationBar *)arg1 didProduceNavigationIntent:(_SFNavigationIntent *)arg2;
- (void)navigationBarDoneButtonWasTapped:(_SFNavigationBar *)arg1;
@end

