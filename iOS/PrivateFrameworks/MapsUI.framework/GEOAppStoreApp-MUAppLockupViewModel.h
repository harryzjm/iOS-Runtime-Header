//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOAppStoreApp.h>

#import <MapsUI/MUAppLockupViewModel-Protocol.h>

@class NSString;

@interface GEOAppStoreApp (MUAppLockupViewModel) <MUAppLockupViewModel>
- (void)loadAppArtworkWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *actionButtonText;
@property(readonly, nonatomic) NSString *subtitleText;
@property(readonly, nonatomic) NSString *titleText;
@property(readonly, nonatomic) _Bool isInstalled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
