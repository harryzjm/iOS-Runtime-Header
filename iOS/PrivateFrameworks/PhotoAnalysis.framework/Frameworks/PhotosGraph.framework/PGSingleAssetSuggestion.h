//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGSuggestion-Protocol.h>

@class NSArray, NSDate, NSSet, NSString, PHAsset;

@interface PGSingleAssetSuggestion : NSObject <PGSuggestion>
{
    PHAsset *_asset;
    unsigned short _type;
    unsigned short _subtype;
    NSSet *_features;
    id _recipe;
    unsigned long long _relevanceDurationInDays;
    NSString *_title;
    NSString *_subtitle;
}

@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long relevanceDurationInDays; // @synthesize relevanceDurationInDays=_relevanceDurationInDays;
@property(retain, nonatomic) id recipe; // @synthesize recipe=_recipe;
@property(readonly, nonatomic) NSSet *features; // @synthesize features=_features;
@property(readonly, nonatomic) unsigned short subtype; // @synthesize subtype=_subtype;
@property(readonly, nonatomic) unsigned short type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool containsUnverifiedPersons;
@property(readonly, copy, nonatomic) NSArray *suggestedPersonLocalIdentifiers;
@property(readonly, nonatomic) unsigned char notificationQuality;
@property(readonly, nonatomic) NSDate *universalEndDate;
@property(readonly, nonatomic) NSDate *universalStartDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) NSArray *representativeAssets;
@property(readonly, nonatomic) NSArray *keyAssets;
@property(readonly, nonatomic) unsigned short notificationState;
@property(readonly, nonatomic) unsigned short state;
@property(readonly, nonatomic) long long version;
- (id)initWithType:(unsigned short)arg1 subtype:(unsigned short)arg2 asset:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

