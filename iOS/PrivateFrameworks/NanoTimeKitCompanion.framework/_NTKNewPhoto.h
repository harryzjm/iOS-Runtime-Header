//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHAsset;

@interface _NTKNewPhoto : NSObject
{
    PHAsset *_asset;
    unsigned long long _subsampleFactor;
    struct CGRect _crop;
}

@property(nonatomic) unsigned long long subsampleFactor; // @synthesize subsampleFactor=_subsampleFactor;
@property(nonatomic) struct CGRect crop; // @synthesize crop=_crop;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;

@end

