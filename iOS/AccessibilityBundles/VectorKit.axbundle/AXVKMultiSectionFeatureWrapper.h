//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AXVKMultiSectionFeatureWrapper : NSObject
{
    CDStruct_66740237 *_feature;
    double _creationTime;
}

@property(nonatomic) double creationTime; // @synthesize creationTime=_creationTime;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)featureName;
@property(nonatomic) CDStruct_66740237 *feature;
- (void)dealloc;
- (id)initWithFeature:(CDStruct_66740237 *)arg1;

@end
