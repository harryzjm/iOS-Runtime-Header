//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSSet;

@protocol PGGraphAddressNode <NSObject>
- (void)addressEnumerateAreaNodesUsingBlock:(void (^)(PGGraphEdge *, PGGraphAreaNode *, _Bool *))arg1;
- (NSSet *)areaNodes;
- (_Bool)isOcean;
- (_Bool)locationIsImproved;
@end
