//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreML/NSCopying-Protocol.h>

@interface MLModelConfiguration : NSObject <NSCopying>
{
    _Bool _useWatchSPIForScribble;
    long long _computeUnits;
}

+ (id)defaultConfiguration;
@property(nonatomic) _Bool useWatchSPIForScribble; // @synthesize useWatchSPIForScribble=_useWatchSPIForScribble;
@property long long computeUnits; // @synthesize computeUnits=_computeUnits;
- (unsigned long long)hash;
- (_Bool)isEqualToModelConfiguration:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithComputeUnits:(long long)arg1;

@end
