//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosFormats/PFSceneTaxonomy.h>

@interface PFSceneTaxonomy (MediaAnalysis)
+ (id)mad_audioTaxonomy:(_Bool)arg1 useResultsKey:(_Bool)arg2;
+ (_Bool)mad_isExpectedTaxonomy;
+ (id)vcp_sharedTaxonomy;
- (id)mad_allAncestorsForSceneId:(unsigned int)arg1;
- (id)mad_sceneIdFromSceneName:(id)arg1;
- (id)mad_sceneNameFromSceneId:(unsigned int)arg1;
@end

