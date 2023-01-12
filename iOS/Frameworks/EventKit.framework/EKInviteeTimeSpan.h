//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray;

__attribute__((visibility("hidden")))
@interface EKInviteeTimeSpan : NSObject
{
    NSDate *_startDate;
    NSDate *_endDate;
    NSMutableArray *_conflictedParticipants;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *conflictedParticipants; // @synthesize conflictedParticipants=_conflictedParticipants;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

