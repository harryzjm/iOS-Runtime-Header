//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMultiSectionFeature;

@interface GEOBuildingFootprintFeature : NSObject
{
    void *_buildingFootprintFeature;
    GEOMultiSectionFeature *_multiSectionFeature;
}

- (void).cxx_destruct;
- (_Bool)isForTransit;
- (_Bool)hasLandmark;
- (unsigned long long)baseOffset;
- (unsigned long long)extrusionOffset;
- (id)feature;
- (void *)get;
- (id)init:(void *)arg1 withVectorTile:(id)arg2;

@end
