//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>
#import <RelevanceEngine/REAutomaticExportedInterface-Protocol.h>

@class NSString, REFeatureMap;

@interface REMLElement : NSObject <REAutomaticExportedInterface, NSCopying>
{
    NSString *_identifier;
    REFeatureMap *_featureMap;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) REFeatureMap *featureMap; // @synthesize featureMap=_featureMap;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 featureMap:(id)arg2;

@end
