//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

__attribute__((visibility("hidden")))
@interface _WBShareParticipantData : NSObject
{
    NSArray *_participants;
    NSSet *_activeParticipantIDs;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *activeParticipantIDs; // @synthesize activeParticipantIDs=_activeParticipantIDs;
@property(copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;

@end

