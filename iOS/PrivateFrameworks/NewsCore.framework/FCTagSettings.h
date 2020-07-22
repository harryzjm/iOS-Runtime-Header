//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCKeyValueStore, NSMutableDictionary;
@protocol FCTagSettingsDelegate;

@interface FCTagSettings : NSObject
{
    NSMutableDictionary *_tagSettingsEntriesByTagID;
    FCKeyValueStore *_localStore;
    id <FCTagSettingsDelegate> _delegate;
}

+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
@property(nonatomic) __weak id <FCTagSettingsDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FCKeyValueStore *localStore; // @synthesize localStore=_localStore;
@property(retain, nonatomic) NSMutableDictionary *tagSettingsEntriesByTagID; // @synthesize tagSettingsEntriesByTagID=_tagSettingsEntriesByTagID;
- (void).cxx_destruct;
- (id)allTagSettingsRecords;
- (void)handleSyncWithTagSettingsRecord:(id)arg1;
- (id)webAccessOptedInTagIDs;
- (void)setWebAccessOptInForTagID:(id)arg1 webAccessOptIn:(_Bool)arg2;
- (id)authenticatedAccessTokensByTagID;
- (id)accessTokenForTagID:(id)arg1;
- (void)setAccessTokenForTagID:(id)arg1 accessToken:(id)arg2 userInitiated:(_Bool)arg3;
- (id)fontSizeForTagID:(id)arg1;
- (void)setFontSizeForTagID:(id)arg1 fontSize:(id)arg2;
- (void)syncFontSizeForTagID:(id)arg1;
- (id)_entryIDForTagID:(id)arg1;
- (void)loadLocalCachesFromStore;
- (id)initWithStore:(id)arg1 tagSettingsDelegate:(id)arg2;

@end

