//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHSuggestion.h>

@class NSArray, NSDate, NSSet, NSString;

@interface PHSuggestion (PGSuggestion)
@property(readonly, nonatomic) unsigned long long relevanceDurationInDays;
@property(readonly, nonatomic) id recipe;
@property(readonly, nonatomic) unsigned char notificationQuality;
@property(readonly, nonatomic) _Bool containsUnverifiedPersons;
@property(readonly, copy, nonatomic) NSArray *suggestedPersonLocalIdentifiers;
@property(readonly, nonatomic) NSSet *features;
@property(readonly, nonatomic) NSArray *representativeAssets;
@property(readonly, nonatomic) NSArray *keyAssets;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSDate *universalEndDate;
@property(readonly, nonatomic) NSDate *universalStartDate;

// Remaining properties
@property(readonly, nonatomic) unsigned long long availableFeatures;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isInvalid;
@property(readonly, nonatomic) unsigned short notificationState;
@property(readonly, copy, nonatomic) NSArray *reasons;
@property(readonly, nonatomic) double score;
@property(readonly, nonatomic) unsigned short state;
@property(readonly, nonatomic) unsigned short subtype;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title; // @dynamic title;
@property(readonly, nonatomic) unsigned short type;
@property(readonly, nonatomic) long long version;
@end

