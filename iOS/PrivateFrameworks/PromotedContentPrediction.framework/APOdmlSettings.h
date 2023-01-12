//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface APOdmlSettings : NSObject
{
    unsigned long long _assetManagerType;
    unsigned long long _placementType;
}

+ (void)prewarmModelWithPlacementType:(unsigned long long)arg1 assetManagerType:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long placementType; // @synthesize placementType=_placementType;
@property(readonly, nonatomic) unsigned long long assetManagerType; // @synthesize assetManagerType=_assetManagerType;
@property(readonly, nonatomic) int odmlVersion;
@property(readonly, nonatomic) NSString *odmlNamespace;
@property(readonly, nonatomic) NSString *treatmentID;
@property(readonly, nonatomic) NSString *experimentID;
@property(readonly, nonatomic) int deploymentID;
- (id)initWithPlacementType:(unsigned long long)arg1 assetManagerType:(unsigned long long)arg2;

@end
