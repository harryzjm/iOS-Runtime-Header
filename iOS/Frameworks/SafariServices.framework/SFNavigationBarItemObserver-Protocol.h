//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class SFNavigationBarItem;

@protocol SFNavigationBarItemObserver <NSObject>

@optional
- (void)navigationBarItemDidUpdateSecurityAnnotation:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateExtensionButtonConfiguration:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateNeedsExtensionBadge:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateShowsExtensionsAvailability:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateShowsVoiceSearchButton:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateShowsTranslationButton:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateShowsTranslationIcon:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateCustomPlaceholderText:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateMediaStateIcon:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateShowsReaderButton:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateShowsPageFormatButton:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateOverrideBarStyleForSecurityWarning:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateFormatButtonSelected:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateStopReloadButtonShowsStop:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateShowsStopReloadButtons:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateShowsSearchIndicator:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateShowsLockIcon:(SFNavigationBarItem *)arg1;
- (void)navigationBarItemDidUpdateText:(SFNavigationBarItem *)arg1;
@end

