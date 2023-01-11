//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSSecureCoding-Protocol.h>
#import <CoreDuet/_CDPDataPoint-Protocol.h>

@class NSArray, NSDate, NSString, NSURL, _CDContact;

@interface _CDInteraction : NSObject <_CDPDataPoint, NSSecureCoding>
{
    _Bool _isResponse;
    _Bool _forcePersistInteraction;
    _Bool _mailShareSheetDeletionCandidate;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_uuid;
    NSString *_locationUUID;
    long long _mechanism;
    long long _direction;
    NSString *_bundleId;
    NSString *_targetBundleId;
    NSString *_groupName;
    NSURL *_contentURL;
    NSString *_derivedIntentIdentifier;
    NSString *_domainIdentifier;
    NSString *_account;
    _CDContact *_sender;
    NSArray *_recipients;
    NSArray *_keywords;
    NSArray *_attachments;
}

+ (id)recipientIdentifiersFromMobileMailConversationId:(id)arg1;
+ (id)conversationIdForMobileMailInteractionRecipients:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)shareSheetInteractionFromINInteraction:(id)arg1 bundleID:(id)arg2 knowledgeStore:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool mailShareSheetDeletionCandidate; // @synthesize mailShareSheetDeletionCandidate=_mailShareSheetDeletionCandidate;
@property(nonatomic) _Bool forcePersistInteraction; // @synthesize forcePersistInteraction=_forcePersistInteraction;
@property(retain) NSArray *attachments; // @synthesize attachments=_attachments;
@property(retain) NSArray *keywords; // @synthesize keywords=_keywords;
@property(retain) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain) _CDContact *sender; // @synthesize sender=_sender;
@property(retain) NSString *account; // @synthesize account=_account;
@property(retain) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property(retain) NSString *derivedIntentIdentifier; // @synthesize derivedIntentIdentifier=_derivedIntentIdentifier;
@property(retain) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(retain) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain) NSString *targetBundleId; // @synthesize targetBundleId=_targetBundleId;
@property(retain) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property _Bool isResponse; // @synthesize isResponse=_isResponse;
@property long long direction; // @synthesize direction=_direction;
@property long long mechanism; // @synthesize mechanism=_mechanism;
@property(retain) NSString *locationUUID; // @synthesize locationUUID=_locationUUID;
@property(retain) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)descriptionOfArray:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool userIsThreadInitiator;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSArray *peopleIdentifiers;
@property(readonly, nonatomic) NSDate *timestamp;
@property(readonly, nonatomic) _Bool userIsSender;
- (id)initWithINInteraction:(id)arg1 bundleID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
