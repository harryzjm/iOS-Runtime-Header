//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/LSPropertyList.h>

@class NSArray;

@interface LSPropertyList (PBFAdditions)
- (id)pbf_staticSnapshotKeyForIdentifier:(id)arg1 definition:(id)arg2;
@property(readonly, nonatomic) _Bool pbf_hasStaticSnapshotMapping;
- (id)_infoForStaticDescriptorIdentifier:(id)arg1;
- (id)pbf_roleForDynamicDescriptorIdentifier:(id)arg1;
- (id)pbf_roleForStaticDescriptorIdentifier:(id)arg1;
- (id)pbf_userInfoForStaticDescriptorIdentifier:(id)arg1;
- (id)pbf_posterBoardPosterDescriptorHeroGalleryOptionsForStaticDescriptorIdentifier:(id)arg1;
- (id)pbf_posterBoardPosterDescriptorGalleryOptionsForStaticDescriptorIdentifier:(id)arg1;
- (id)pbf_proactivePosterDescriptorGalleryOptionsForStaticDescriptorIdentifier:(id)arg1;
- (id)pbf_displayNameLocalizationKeyForStaticDescriptorIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *pbf_staticDescriptorIdentifiers;
- (id)pbf_staticDescriptorsDictionary;
@property(readonly, nonatomic) long long pbf_refreshDescriptorsFrequency;
@property(readonly, nonatomic) _Bool pbf_supportsDynamicDescriptors;
@property(readonly, nonatomic) _Bool pbf_supportsGallery;
@end

