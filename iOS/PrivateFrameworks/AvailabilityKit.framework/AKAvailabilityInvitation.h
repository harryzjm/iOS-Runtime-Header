//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AKAvailabilityInvitation : NSObject
{
    NSArray *_availableDuringActivityIdentifiers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *availableDuringActivityIdentifiers; // @synthesize availableDuringActivityIdentifiers=_availableDuringActivityIdentifiers;
- (id)initWithAvailableDuringActivityIdentifiers:(id)arg1;
- (id)_payloadDictionary;
- (id)statusKitInvitationPayloadWithDateCreated:(id)arg1;
- (id)initWithStatusKitInvitationPayload:(id)arg1;

@end
