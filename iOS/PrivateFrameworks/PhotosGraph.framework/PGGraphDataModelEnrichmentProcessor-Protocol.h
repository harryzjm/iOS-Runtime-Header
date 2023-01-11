//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSString, PGManager;
@protocol PGGraphUpdateInventory;

@protocol PGGraphDataModelEnrichmentProcessor <NSObject>
+ (NSString *)backgroundJobName;
+ (double)backgroundJobTimeout;
+ (_Bool)supportsBackgroundJob;
- (void)enrichDataModelWithManager:(PGManager *)arg1 graphUpdateInventory:(id <PGGraphUpdateInventory>)arg2 progressBlock:(void (^)(double, _Bool *))arg3;
@end
