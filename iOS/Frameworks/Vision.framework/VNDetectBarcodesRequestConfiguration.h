//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VNDetectBarcodesRequestConfiguration
{
    NSArray *_symbologies;
    NSString *_locateMode;
}

@property(copy, nonatomic) NSString *locateMode; // @synthesize locateMode=_locateMode;
@property(copy, nonatomic) NSArray *symbologies; // @synthesize symbologies=_symbologies;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end
