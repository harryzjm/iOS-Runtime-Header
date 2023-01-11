//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphDataModelEnrichmentProcessor-Protocol.h>

@class NSString;

@interface PGGraphSearchEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>
{
}

+ (double)backgroundJobTimeout;
+ (id)backgroundJobName;
+ (_Bool)supportsBackgroundJob;
- (void)_processGraphUpdateInventory:(id)arg1 manager:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (_Bool)_shouldProcessGraphUpdate:(id)arg1;
- (void)enrichDataModelWithManager:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
