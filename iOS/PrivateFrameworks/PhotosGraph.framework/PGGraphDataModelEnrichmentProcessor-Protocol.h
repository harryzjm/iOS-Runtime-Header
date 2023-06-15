//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class CLSCurationContext, PGManager;
@protocol PGGraphUpdateInventory;

@protocol PGGraphDataModelEnrichmentProcessor <NSObject>
- (void)enrichDataModelWithManager:(PGManager *)arg1 curationContext:(CLSCurationContext *)arg2 graphUpdateInventory:(id <PGGraphUpdateInventory>)arg3 progressBlock:(void (^)(double, _Bool *))arg4;
@end

