//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PPScoreInterpreterCoreMLModelFeature : NSObject
{
    NSString *_featureName;
    long long _featureType;
    unsigned long long _multiArraySize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long multiArraySize; // @synthesize multiArraySize=_multiArraySize;
@property(readonly, nonatomic) long long featureType; // @synthesize featureType=_featureType;
@property(readonly, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
- (id)init;
- (id)initWithFeatureName:(id)arg1;
- (id)initWithFeatureName:(id)arg1 multiArraySize:(unsigned long long)arg2;

@end
