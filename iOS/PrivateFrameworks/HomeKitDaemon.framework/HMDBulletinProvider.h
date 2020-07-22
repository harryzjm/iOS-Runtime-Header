//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/BBRemoteDataProvider-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class BBDataProviderProxy, HMDHomeManager, NSMutableDictionary, NSString;

@interface HMDBulletinProvider : HMFObject <NSSecureCoding, BBRemoteDataProvider>
{
    BBDataProviderProxy *_proxy;
    NSMutableDictionary *_bulletins;
    HMDHomeManager *_homeManager;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) NSMutableDictionary *bulletins; // @synthesize bulletins=_bulletins;
@property(retain, nonatomic) BBDataProviderProxy *proxy; // @synthesize proxy=_proxy;
- (void).cxx_destruct;
- (id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2;
- (void)handleBulletinActionResponse:(id)arg1;
- (_Bool)syncsBulletinDismissal;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (id)defaultSectionInfo;
- (id)sectionParameters;
- (id)sectionIcon;
- (id)sectionDisplayName;
- (id)sectionIdentifier;
- (id)sortDescriptors;
- (id)sortedBulletinsByDate;
- (void)removeBulletinWithRecordID:(id)arg1;
- (void)removeBulletin:(id)arg1;
- (void)cullBulletinsToCount:(unsigned long long)arg1;
- (void)updateBulletin:(id)arg1;
- (id)insertBulletinWithTitle:(id)arg1 snapshotData:(id)arg2 message:(id)arg3 recordID:(id)arg4 bulletinType:(unsigned long long)arg5 actionURL:(id)arg6 bulletinContext:(struct NSDictionary *)arg7 actionContext:(struct NSDictionary *)arg8;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)reloadDefaultSectionInfo;
- (void)configureHomeManager:(id)arg1;
- (void)configure:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
