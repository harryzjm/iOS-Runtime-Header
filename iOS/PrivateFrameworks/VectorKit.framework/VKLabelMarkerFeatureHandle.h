//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VKLabelMarkerFeatureHandle : NSObject
{
    struct LabelMarkerFeatureHandle _actualHandle;
}

- (id).cxx_construct;
- (id)styleAttributes;
- (unsigned int)tileVersion;
- (int)tileStyle;
- (int)tileZ;
- (int)tileY;
- (int)tileX;
- (long long)featureIndex;
- (int)featureType;
- (const struct LabelMarkerFeatureHandle *)actualHandle;
- (void)dealloc;
- (id)initWithLabelMarkerHandle:(const struct LabelMarkerFeatureHandle *)arg1;

@end

