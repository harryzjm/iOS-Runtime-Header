//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VNPersonsModel;
@protocol VNPersonsModelDataSource;

__attribute__((visibility("hidden")))
@interface _VNPersonsModelDataSourceBasedDataProvider : NSObject
{
    VNPersonsModel *_personsModel;
    id <VNPersonsModelDataSource> _dataSource;
}

- (void).cxx_destruct;
- (id)faceModelFaceObservationAtIndex:(unsigned long long)arg1 forPersonAtIndex:(unsigned long long)arg2;
- (unsigned long long)faceModelNumberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg1;
- (unsigned long long)faceModelIndexOfPersonWithUniqueIdentifier:(id)arg1;
- (id)faceModelUniqueIdentifierOfPersonAtIndex:(unsigned long long)arg1;
- (unsigned long long)faceModelPersonsCount;
- (id)initWithPersonsModel:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

