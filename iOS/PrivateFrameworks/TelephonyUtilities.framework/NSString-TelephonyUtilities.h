//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@class NSNumber, TUConversationHandoffEligibility;

@interface NSString (TelephonyUtilities)
+ (id)tu_conversationHandoffDynamicIdentifierForEligibility:(id)arg1;
+ (id)tu_conversationHandoffDynamicIdentifierWithGroupUUID:(id)arg1 participantIdentifier:(unsigned long long)arg2 uplinkMuted:(_Bool)arg3 sendingVideo:(_Bool)arg4;
+ (id)tu_stringWithTUConfigurationAnnounceCalls:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) TUConversationHandoffEligibility *tu_handoffEligibility;
@property(readonly, copy, nonatomic) NSNumber *tu_unsignedLongLongNumber;
- (id)tu_stringByAddingBase64Padding;
- (id)tu_stringByStrippingBase64Padding;
- (id)formattedDisplayID;
- (id)normalizedDestination;
- (id)normalizedTokenURI;
- (id)IDSFormattedDestinationID;
- (_Bool)destinationIdIsCallControlCode;
- (_Bool)destinationIdIsPhoneNumber;
- (_Bool)destinationIdIsTokenURI;
- (_Bool)destinationIdIsEmailAddress;
- (_Bool)destinationIdIsHardware;
- (_Bool)destinationIdIsPseudonym;
- (_Bool)destinationIdIsTemporary;
- (id)RTLString;
- (id)LTRString;
@end

