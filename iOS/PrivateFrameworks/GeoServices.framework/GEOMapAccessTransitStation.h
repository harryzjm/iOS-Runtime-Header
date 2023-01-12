//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOMapAccessTransitStation
{
}

- (id)findAccessPoints:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findStops:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, nonatomic) double boundingRadius;
@property(readonly, nonatomic) CDStruct_02837cd9 boundingRect;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *internalName;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *polygonPoints;
@property(readonly, nonatomic) long long polygonPointsCount;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long transitID;

@end

