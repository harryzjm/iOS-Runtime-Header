//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sharing/NSObject-Protocol.h>

@class CNContact, NSLocale, NSNumber, NSSet, NSString, NSUUID;

@protocol SFAirDropNodeProtocol <NSObject>
@property(retain) CNContact *contact;
@property(retain) NSUUID *endpointUUID;
@property(retain) struct CGImage *displayIcon;
@property long long selectionReason;
@property(getter=isSuggestion) _Bool suggestion;
@property(getter=isDisabled) _Bool disabled;
@property(getter=isClassroom) _Bool classroom;
@property(retain) NSString *transportBundleID;
@property(retain) NSNumber *suggestionIndex;
@property(retain) NSSet *formattedHandles;
@property(copy) NSString *model;
@property(copy) NSString *realName;
@property(copy) NSString *displayName;
@property(copy) NSString *contactIdentifier;
@property(retain) NSUUID *nodeIdentifier;
- (NSString *)displayNameForLocale:(NSLocale *)arg1;
@end

