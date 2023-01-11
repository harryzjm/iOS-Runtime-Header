//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSSet, NSString, NSUUID, TUContactsDataProvider, TUConversationMember, TUHandle;

@interface TUConversation : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _audioEnabled;
    _Bool _videoEnabled;
    _Bool _locallyCreated;
    _Bool _hasJoined;
    TUContactsDataProvider *_contactsDataProvider;
    NSUUID *_UUID;
    NSUUID *_groupUUID;
    long long _state;
    NSSet *_participantHandles;
    NSSet *_remoteMembers;
    NSSet *_activeRemoteParticipants;
    long long _avcSessionToken;
    NSString *_avcSessionIdentifier;
    TUConversationMember *_localMember;
    NSUUID *_messagesGroupUUID;
    TUHandle *_initiator;
    NSString *_messagesGroupName;
    long long _maxVideoDecodesAllowed;
    NSObject *_reportingHierarchyToken;
    NSObject *_reportingHierarchySubToken;
}

+ (_Bool)supportsSecureCoding;
+ (id)numberFormatter;
+ (id)emptyConversationWithGroupUUID:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject *reportingHierarchySubToken; // @synthesize reportingHierarchySubToken=_reportingHierarchySubToken;
@property(retain, nonatomic) NSObject *reportingHierarchyToken; // @synthesize reportingHierarchyToken=_reportingHierarchyToken;
@property(nonatomic) long long maxVideoDecodesAllowed; // @synthesize maxVideoDecodesAllowed=_maxVideoDecodesAllowed;
@property(copy, nonatomic) NSString *messagesGroupName; // @synthesize messagesGroupName=_messagesGroupName;
@property(retain, nonatomic) TUHandle *initiator; // @synthesize initiator=_initiator;
@property(retain, nonatomic) NSUUID *messagesGroupUUID; // @synthesize messagesGroupUUID=_messagesGroupUUID;
@property(retain, nonatomic) TUConversationMember *localMember; // @synthesize localMember=_localMember;
@property(nonatomic, getter=hasJoined) _Bool hasJoined; // @synthesize hasJoined=_hasJoined;
@property(copy, nonatomic) NSString *avcSessionIdentifier; // @synthesize avcSessionIdentifier=_avcSessionIdentifier;
@property(nonatomic) long long avcSessionToken; // @synthesize avcSessionToken=_avcSessionToken;
@property(copy, nonatomic) NSSet *activeRemoteParticipants; // @synthesize activeRemoteParticipants=_activeRemoteParticipants;
@property(copy, nonatomic) NSSet *remoteMembers; // @synthesize remoteMembers=_remoteMembers;
@property(copy, nonatomic) NSSet *participantHandles; // @synthesize participantHandles=_participantHandles;
@property(nonatomic, getter=isLocallyCreated) _Bool locallyCreated; // @synthesize locallyCreated=_locallyCreated;
@property(nonatomic, getter=isVideoEnabled) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(nonatomic, getter=isAudioEnabled) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSUUID *groupUUID; // @synthesize groupUUID=_groupUUID;
@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToConversation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)contactNamesByHandleWithContactsDataSource:(id)arg1;
- (id)handles;
- (id)bundleIdentifier;
@property(readonly, nonatomic) TUContactsDataProvider *contactsDataProvider; // @synthesize contactsDataProvider=_contactsDataProvider;
- (_Bool)isRepresentedByRemoteMembers:(id)arg1;
- (id)initiatorLocalizedName;
- (id)displayName;
- (id)description;
- (id)initWithUUID:(id)arg1 groupUUID:(id)arg2;

@end
