//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileStoreUI/JSExport-Protocol.h>

@class IKDOMDocument, JSValue, NSArray, NSDictionary, NSNumber, NSString, SUUIJSAppleAccount, SUUIJSRestrictions;

@protocol SUUIJSITunesStore <JSExport>
@property(readonly, nonatomic) _Bool isAppPreview;
@property(readonly, copy, nonatomic) NSString *hostApp;
@property(readonly, nonatomic) SUUIJSRestrictions *restrictions;
@property(readonly, nonatomic) SUUIJSAppleAccount *primaryAppleAccount;
@property(nonatomic) long long applicationIconBadgeNumber;
- (void)fetchMSOProviderStatus:(JSValue *)arg1;
- (NSDictionary *)documentSizeForNavigationDocument:(id)arg1;
- (void)fetchTemplates:(NSArray *)arg1:(JSValue *)arg2;
- (void)loadRental:(NSNumber *)arg1:(JSValue *)arg2;
- (void)loadRentals:(JSValue *)arg1;
- (void)updateToggleStateForItem:(NSString *)arg1 toggled:(_Bool)arg2:(JSValue *)arg3;
- (void)restoreRemovedSystemApp:(NSString *)arg1:(JSValue *)arg2;
- (void)setPreviewOverlay:(IKDOMDocument *)arg1:(NSDictionary *)arg2;
- (_Bool)resourceExists:(NSString *)arg1;
- (void)resetStateForActiveDocument;
- (void)headsUp:(NSString *)arg1:(NSDictionary *)arg2;
- (void)log:(NSString *)arg1;
- (void)loadGratisContent:(JSValue *)arg1;
- (void)launchICloudFamilySettings;
- (void)isRemovedSystemApp:(NSString *)arg1:(JSValue *)arg2;
- (void)isInstalledApp:(NSNumber *)arg1:(JSValue *)arg2;
- (void)getProfilePermissions:(NSDictionary *)arg1:(JSValue *)arg2;
- (void)getBookSample:(NSDictionary *)arg1;
- (void)clearToggleStateItems;
- (void)findToggleStateForItem:(NSString *)arg1:(JSValue *)arg2;
- (void)findOwnedItems:(NSArray *)arg1:(JSValue *)arg2;
- (void)findLibraryItems:(NSArray *)arg1:(JSValue *)arg2:(NSDictionary *)arg3;
- (void)findApps:(NSArray *)arg1:(JSValue *)arg2:(NSDictionary *)arg3;
- (void)exit:(NSDictionary *)arg1;
- (void)downloadExistsFor:(NSNumber *)arg1:(JSValue *)arg2;
- (void)download:(NSDictionary *)arg1;
- (void)attemptLocalAskToBuyApproval:(NSNumber *)arg1;
- (_Bool)areVideosCloudPurchasesEnabled;
- (void)approveInPerson:(NSNumber *)arg1:(JSValue *)arg2;
- (void)getAdminStatus:(NSDictionary *)arg1:(JSValue *)arg2;
- (void)buy:(NSDictionary *)arg1;
@end

