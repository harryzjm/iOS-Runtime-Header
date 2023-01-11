//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, PLRoutineService;

@interface PLFrequentLocationManager : NSObject
{
    NSSet *_currentFrequentLocations;
    PLRoutineService *_routineManager;
}

@property(retain, nonatomic) PLRoutineService *routineManager; // @synthesize routineManager=_routineManager;
@property(retain, nonatomic) NSSet *currentFrequentLocations; // @synthesize currentFrequentLocations=_currentFrequentLocations;
- (void).cxx_destruct;
- (id)_createFrequentLocationsWithAllMoments:(id)arg1;
- (_Bool)frequentLocationsDidChangeFromUpdateWithAllMoments:(id)arg1;
- (id)init;

@end
