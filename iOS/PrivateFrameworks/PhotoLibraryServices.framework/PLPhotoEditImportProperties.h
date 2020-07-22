//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLPhotoEditImportProperties : NSObject
{
    long long _baseEXIFOrientation;
    double _baseDuration;
}

+ (id)importPropertiesWithEXIFOrientation:(long long)arg1 duration:(double)arg2;
+ (id)importPropertiesWithEXIFOrientation:(long long)arg1;
@property(readonly, nonatomic) double baseDuration; // @synthesize baseDuration=_baseDuration;
@property(readonly, nonatomic) long long baseEXIFOrientation; // @synthesize baseEXIFOrientation=_baseEXIFOrientation;

@end

