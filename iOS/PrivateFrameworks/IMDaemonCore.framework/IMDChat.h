//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class IMDAccount, IMDService, IMDServiceSession, IMMessageItem, NSArray, NSData, NSDate, NSDictionary, NSMutableDictionary, NSRecursiveLock, NSString;

@interface IMDChat : NSObject
{
    NSRecursiveLock *_lock;
    NSString *_accountID;
    NSString *_serviceName;
    NSDictionary *_properties;
    NSString *_chatIdentifier;
    NSString *_guid;
    NSString *_groupID;
    NSString *_engramID;
    NSString *_roomName;
    NSString *_displayName;
    NSString *_lastAddressedLocalHandle;
    NSArray *_participants;
    IMMessageItem *_lastMessage;
    NSMutableDictionary *_chatInfo;
    long long _state;
    unsigned char _style;
    unsigned long long _unreadCount;
    long long _rowID;
    _Bool _isArchived;
    _Bool _isFiltered;
    _Bool _hasHadSuccessfulQuery;
    long long _cloudKitSyncState;
    NSString *_originalGroupID;
    NSString *_serverChangeToken;
    long long _lastReadMessageTimeStamp;
    _Bool _createEngramGroupOnMessageSend;
    _Bool _pendingENGroupParticipantUpdate;
    NSData *_CKRecordSystemPropertiesBlob;
    NSDate *_lastSentMessageDate;
    long long _lastMessageTimeStampOnLoad;
}

+ (id)_recordType;
@property _Bool pendingENGroupParticipantUpdate; // @synthesize pendingENGroupParticipantUpdate=_pendingENGroupParticipantUpdate;
@property _Bool createEngramGroupOnMessageSend; // @synthesize createEngramGroupOnMessageSend=_createEngramGroupOnMessageSend;
- (_Bool)isBusinessChat;
- (id)cloudKitDebugDescription;
- (id)_ckUniqueID;
- (id)cloudKitChatID;
@property(readonly, nonatomic) NSString *personCentricID;
- (id)_personIdentity;
- (void)updateHasHadSuccessfulQuery:(_Bool)arg1;
- (int)getNumberOfTimesRespondedToThread;
- (_Bool)isSMSSpam;
- (void)updateSMSSpamExtensionNameChatProperty:(id)arg1;
- (void)updateIsSMSSpamChatProperty:(_Bool)arg1;
- (void)updateNumberOfTimesRespondedToThread;
- (void)updateIsFiltered:(_Bool)arg1;
- (void)updateDisplayName:(id)arg1;
- (void)updateLastAddressedHandle:(id)arg1;
- (void)resetCKSyncState;
- (void)updateOriginalGroupID:(id)arg1;
- (void)updateCloudKitSyncState:(long long)arg1;
- (void)updateCKRecordSystemPropertiesBlob:(id)arg1;
- (void)updateServerChangeToken:(id)arg1;
- (void)updateLastReadMessageTimeStampIfNeeded:(long long)arg1;
- (void)updateEngroupCreationDate:(long long)arg1;
- (void)updateEngramID:(id)arg1;
- (void)updateGroupID:(id)arg1;
@property(readonly, nonatomic) _Bool isUnnamedChat;
- (id)generateNewGroupID;
- (void)storeAndBroadcastChatChanges;
- (void)updateProperties:(id)arg1;
- (void)_updateLastMessage:(id)arg1;
@property(readonly, retain) NSDictionary *dictionaryRepresentation;
- (id)copyDictionaryRepresentation:(_Bool)arg1;
- (id)dictionaryRepresentationIncludingLastMessage;
@property(readonly, retain) NSDictionary *chatProperties;
- (id)description;
- (long long)compareBySequenceNumberAndDateDescending:(id)arg1;
- (_Bool)isNewerThan:(id)arg1;
- (_Bool)isOlderThan:(id)arg1;
- (long long)engroupCreationDate;
@property(readonly, retain) IMDServiceSession *serviceSession;
@property(readonly, retain) IMDService *service;
@property(readonly, retain) IMDAccount *account;
@property(copy) NSString *accountID;
- (void)removeParticipant:(id)arg1;
- (void)removeParticipants:(id)arg1;
- (void)addParticipant:(id)arg1;
- (void)addParticipants:(id)arg1;
- (void)_updateCachedParticipants;
- (void)setLastMessageTimeStampOnLoad:(long long)arg1;
@property(readonly) long long lastMessageTimeStampOnLoad;
- (void)setLastSentMessageDate:(id)arg1;
@property(readonly, retain) NSDate *lastSentMessageDate;
@property _Bool hasHadSuccessfulQuery;
@property _Bool isFiltered;
@property(setter=_setRowID:) long long rowID;
@property(readonly) _Bool isArchived;
@property(setter=_setUnreadCount:) unsigned long long unreadCount;
@property long long state;
@property unsigned char style;
@property(retain) IMMessageItem *lastMessage;
@property(retain) NSDictionary *properties;
@property(copy) NSString *lastAddressedLocalHandle;
@property(nonatomic) long long lastReadMessageTimeStamp;
- (void)setOriginalGroupID:(id)arg1;
@property(readonly, copy) NSString *originalGroupID;
@property long long cloudKitSyncState;
@property(copy, nonatomic) NSData *CKRecordSystemPropertiesBlob;
@property(copy, nonatomic) NSString *serverChangeToken;
@property(copy, setter=setEngramID:) NSString *engramID;
@property(copy, setter=setGroupID:) NSString *groupID;
@property(copy) NSString *displayName;
@property(copy) NSString *roomName;
@property(copy) NSArray *participants;
@property(copy) NSString *serviceName;
@property(copy) NSString *chatIdentifier;
@property(copy) NSString *guid;
- (void)dealloc;
- (id)initWithAccountID:(id)arg1 service:(id)arg2 guid:(id)arg3 groupID:(id)arg4 chatIdentifier:(id)arg5 participants:(id)arg6 roomName:(id)arg7 displayName:(id)arg8 lastAddressedLocalHandle:(id)arg9 properties:(id)arg10 state:(long long)arg11 style:(unsigned char)arg12 isFiltered:(_Bool)arg13 hasHadSuccessfulQuery:(_Bool)arg14 engramID:(id)arg15 serverChangeToken:(id)arg16 cloudKitSyncState:(long long)arg17 originalGroupID:(id)arg18 lastReadMessageTimeStamp:(long long)arg19 CKRecordSystemPropertiesBlob:(id)arg20 lastMessageTimeStampOnLoad:(long long)arg21;
- (_Bool)applyChangesUsingCKRecord:(id)arg1;
- (id)initWithCKRecord:(id)arg1;
- (id)copyCKRecordRepresentationWithZoneID:(id)arg1 salt:(id)arg2;
- (id)recordName;
- (id)_copyCKRecordFromExistingCKMetadata;
- (id)_recordIDUsingSalt:(id)arg1 zoneID:(id)arg2;

@end
