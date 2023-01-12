//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Announce/NSSecureCoding-Protocol.h>

@class ANAnnouncement, HMHome, NSArray, NSString;

@interface ANAnnouncementDestination : NSObject <NSSecureCoding>
{
    _Bool _replyToSender;
    unsigned long long _type;
    id _homeObject;
    NSArray *_zoneObjects;
    NSArray *_roomObjects;
    NSString *_announcementIdentifier;
    ANAnnouncement *_announcement;
}

+ (_Bool)supportsSecureCoding;
+ (id)stringFromAnnouncementDestinationType:(unsigned long long)arg1;
+ (id)destinationWithReplyToAnnouncementIdentifier:(id)arg1;
+ (id)destinationWithHomeIdentifier:(id)arg1 zoneIdentifiers:(id)arg2 roomIdentifiers:(id)arg3;
+ (id)destinationWithHomeIdentifier:(id)arg1;
+ (id)destinationWithHomeName:(id)arg1 zoneNames:(id)arg2 roomNames:(id)arg3;
+ (id)destinationWithHomeName:(id)arg1;
+ (id)destinationWithHome:(id)arg1 zones:(id)arg2 rooms:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) ANAnnouncement *announcement; // @synthesize announcement=_announcement;
@property(retain, nonatomic) NSString *announcementIdentifier; // @synthesize announcementIdentifier=_announcementIdentifier;
@property(retain, nonatomic) NSArray *roomObjects; // @synthesize roomObjects=_roomObjects;
@property(retain, nonatomic) NSArray *zoneObjects; // @synthesize zoneObjects=_zoneObjects;
@property(retain, nonatomic) id homeObject; // @synthesize homeObject=_homeObject;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setReplyToSender:(_Bool)arg1;
- (_Bool)replyToSender;
- (id)description;
- (id)init;
@property(readonly, nonatomic) NSArray *rooms;
@property(readonly, nonatomic) NSArray *zones;
@property(readonly, nonatomic) HMHome *home;

@end
