//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MRCompanionLinkClientEvent : NSObject
{
    NSString *_eventID;
    NSDictionary *_userInfo;
    NSString *_destination;
    NSString *_uid;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;

@end

