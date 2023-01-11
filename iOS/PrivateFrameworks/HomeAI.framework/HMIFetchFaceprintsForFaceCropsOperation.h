//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFOperation.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/HMFObject-Protocol.h>

@class NSArray, NSSet, NSString;
@protocol HMIPersonManagerDataSource;

__attribute__((visibility("hidden")))
@interface HMIFetchFaceprintsForFaceCropsOperation : HMFOperation <HMFObject, HMFLogging>
{
    id <HMIPersonManagerDataSource> _dataSource;
    NSSet *_faceCropUUIDs;
    NSSet *_faceprints;
}

+ (id)logCategory;
+ (id)shortDescription;
- (void).cxx_destruct;
@property(readonly) NSSet *faceprints; // @synthesize faceprints=_faceprints;
@property(readonly) NSSet *faceCropUUIDs; // @synthesize faceCropUUIDs=_faceCropUUIDs;
@property(readonly) id <HMIPersonManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (void)main;
- (id)initWithDataSource:(id)arg1 faceCropUUIDs:(id)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end
