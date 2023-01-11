//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPIdentifierSet, MPModelRequest, NSDictionary;

@interface MPModelPlaybackContext
{
    id _playbackRequestEnvironment;
    MPModelRequest *_request;
    MPIdentifierSet *_startItemIdentifiers;
    NSDictionary *_startTimeModifications;
    NSDictionary *_endTimeModifications;
    NSDictionary *_assetStoreFronts;
}

+ (_Bool)supportsSecureCoding;
+ (id)requiredPropertiesForStaticMediaClips;
+ (Class)queueFeederClass;
@property(copy, nonatomic) NSDictionary *assetStoreFronts; // @synthesize assetStoreFronts=_assetStoreFronts;
@property(copy, nonatomic) NSDictionary *endTimeModifications; // @synthesize endTimeModifications=_endTimeModifications;
@property(copy, nonatomic) NSDictionary *startTimeModifications; // @synthesize startTimeModifications=_startTimeModifications;
@property(copy, nonatomic) MPIdentifierSet *startItemIdentifiers; // @synthesize startItemIdentifiers=_startItemIdentifiers;
@property(copy, nonatomic) MPModelRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) id playbackRequestEnvironment; // @synthesize playbackRequestEnvironment=_playbackRequestEnvironment;
- (void).cxx_destruct;
- (id)descriptionComponents;
- (id)init;

@end

