//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableSet;

@interface _MDLProbeCluster : NSObject
{
    NSMutableSet *_probes;
    MISSING_TYPE *_centroid;
}

@property(retain) NSMutableSet *probes; // @synthesize probes=_probes;
@property MISSING_TYPE *centroid; // @synthesize centroid=_centroid;
- (void).cxx_destruct;
- (void)calculateCentroidNotIncludingSamplesinArray:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToCluster:(id)arg1;
- (_Bool)isEmpty;

@end

