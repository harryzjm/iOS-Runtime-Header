//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKPlayerInternal, NSDate, NSDictionary, NSString;

@interface GKAchievementInternal
{
    NSString *_identifier;
    NSString *_groupIdentifier;
    NSString *_title;
    NSString *_achievedDescription;
    NSString *_unachievedDescription;
    NSDictionary *_icons;
    GKPlayerInternal *_player;
    union {
        struct {
            unsigned int _maximumPoints:16;
            unsigned int _hidden:1;
            unsigned int _replayable:1;
            unsigned int _reserved:14;
        } ;
        unsigned int _value;
    } _attributes;
    NSDate *_lastReportedDate;
    double _percentComplete;
}

+ (_Bool)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;
@property(retain, nonatomic) GKPlayerInternal *player; // @synthesize player=_player;
@property(nonatomic) double percentComplete; // @synthesize percentComplete=_percentComplete;
@property(retain, nonatomic) NSDate *lastReportedDate; // @synthesize lastReportedDate=_lastReportedDate;
@property(retain, nonatomic) NSDictionary *icons; // @synthesize icons=_icons;
@property(retain, nonatomic) NSString *unachievedDescription; // @synthesize unachievedDescription=_unachievedDescription;
@property(retain, nonatomic) NSString *achievedDescription; // @synthesize achievedDescription=_achievedDescription;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)descriptionSubstitutionMap;
@property(readonly, nonatomic, getter=isCompleted) _Bool completed;
@property(nonatomic, getter=isReplayable) _Bool replayable; // @dynamic replayable;
@property(nonatomic, getter=isHidden) _Bool hidden; // @dynamic hidden;
@property(nonatomic) unsigned short maximumPoints; // @dynamic maximumPoints;
@property(nonatomic) unsigned int attributes; // @dynamic attributes;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)serverRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)mergePropertiesFromDescription:(id)arg1;

@end
