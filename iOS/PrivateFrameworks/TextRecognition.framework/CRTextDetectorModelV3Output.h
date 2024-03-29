//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface CRTextDetectorModelV3Output : NSObject
{
    MLMultiArray *_region_score;
    MLMultiArray *_script_feature;
    MLMultiArray *_script_score;
    MLMultiArray *_link_score_horizontal;
    MLMultiArray *_link_score_vertical;
    MLMultiArray *_table_score;
    MLMultiArray *_orientation_score;
    MLMultiArray *_text_type_score;
}

+ (id)stridesExcludingBatch:(id)arg1;
+ (id)shapeExcludingBatch:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MLMultiArray *text_type_score; // @synthesize text_type_score=_text_type_score;
@property(retain, nonatomic) MLMultiArray *orientation_score; // @synthesize orientation_score=_orientation_score;
@property(retain, nonatomic) MLMultiArray *table_score; // @synthesize table_score=_table_score;
@property(retain, nonatomic) MLMultiArray *link_score_vertical; // @synthesize link_score_vertical=_link_score_vertical;
@property(retain, nonatomic) MLMultiArray *link_score_horizontal; // @synthesize link_score_horizontal=_link_score_horizontal;
@property(retain, nonatomic) MLMultiArray *script_score; // @synthesize script_score=_script_score;
@property(retain, nonatomic) MLMultiArray *script_feature; // @synthesize script_feature=_script_feature;
@property(retain, nonatomic) MLMultiArray *region_score; // @synthesize region_score=_region_score;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithRegion_score:(id)arg1 script_feature:(id)arg2 link_score_horizontal:(id)arg3 link_score_vertical:(id)arg4 orientation_score:(id)arg5 text_type_score:(id)arg6 table_score:(id)arg7;

@end

