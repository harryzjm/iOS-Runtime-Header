//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SplashBoard/XBApplicationController.h>

@interface SBSplashBoardController : XBApplicationController
{
    _Bool _isObservingAppLanguageChanges;
}

- (void)_observeLocaleChanges;
- (id)_splashBoardApplicationForBundleID:(id)arg1;
- (void)_handleLocaleDidChangeNotification;
- (void)_checkForChangedLocale;
- (void)configureForLocaleChanges;
- (void)dealloc;

@end
