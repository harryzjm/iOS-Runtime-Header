//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLSuggestionAssetList, NSData, NSDate, NSString;

@interface CPLSuggestionChange
{
    unsigned short _type;
    unsigned short _subtype;
    unsigned short _notificationState;
    unsigned short _state;
    NSString *_title;
    NSString *_subtitle;
    CPLSuggestionAssetList *_assetList;
    NSDate *_creationDate;
    long long _version;
    NSDate *_activationDate;
    NSDate *_relevantUntilDate;
    NSDate *_expungeDate;
    NSData *_actionData;
    NSData *_featuresData;
}

+ (id)_createTestSuggestionWithKeyAssets:(id)arg1 representativeAssets:(id)arg2;
+ (_Bool)serverSupportsSuggestion;
@property(copy, nonatomic) NSData *featuresData; // @synthesize featuresData=_featuresData;
@property(copy, nonatomic) NSData *actionData; // @synthesize actionData=_actionData;
@property(copy, nonatomic) NSDate *expungeDate; // @synthesize expungeDate=_expungeDate;
@property(copy, nonatomic) NSDate *relevantUntilDate; // @synthesize relevantUntilDate=_relevantUntilDate;
@property(copy, nonatomic) NSDate *activationDate; // @synthesize activationDate=_activationDate;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic) unsigned short state; // @synthesize state=_state;
@property(nonatomic) unsigned short notificationState; // @synthesize notificationState=_notificationState;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) CPLSuggestionAssetList *assetList; // @synthesize assetList=_assetList;
@property(nonatomic) unsigned short subtype; // @synthesize subtype=_subtype;
@property(nonatomic) unsigned short type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (CDUnknownBlockType)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (id)propertiesDescription;
- (_Bool)supportsDirectDeletion;
- (_Bool)supportsDeletion;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)scopedIdentifiersForMapping;

@end

