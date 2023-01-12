//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaAnalysis/MLFeatureProvider-Protocol.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface VCPMAMLFeatureProvider : NSObject <MLFeatureProvider>
{
    NSString *_featureName;
    struct __CVBuffer *_buffer;
}

+ (id)featureProviderWithCVPixelBuffer:(struct __CVBuffer *)arg1 andFeatureName:(id)arg2;
- (void).cxx_destruct;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (void)dealloc;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 andFeatureName:(id)arg2;
- (id)init;

@end
