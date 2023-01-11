//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/NAIdentifiable-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface HFServiceStateCharacteristicMatchResult : NSObject <NAIdentifiable>
{
    NSSet *_allCharacteristics;
    NSDictionary *_servicesByUUID;
    NSSet *_services;
    NSDictionary *_characteristicsByServiceUUID;
}

+ (id)na_identity;
+ (id)matchResultByMergingResults:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *characteristicsByServiceUUID; // @synthesize characteristicsByServiceUUID=_characteristicsByServiceUUID;
@property(readonly, copy, nonatomic) NSSet *services; // @synthesize services=_services;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSSet *allCharacteristics; // @synthesize allCharacteristics=_allCharacteristics;
@property(readonly, copy, nonatomic) NSDictionary *servicesByUUID; // @synthesize servicesByUUID=_servicesByUUID;
- (id)initWithServices:(id)arg1 characteristicsByServiceUUID:(id)arg2;
- (id)initWithServices:(id)arg1 characteristics:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
