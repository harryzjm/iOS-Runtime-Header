//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface PHALibraryChangeBuffer : NSObject
{
    NSMutableDictionary *_assetIdentifierToFlagsMap;
    NSMutableSet *_representedAssetJobScenarios;
    NSMutableArray *_momentChanges;
    NSMutableArray *_personChanges;
}

@property(retain) NSMutableArray *personChanges; // @synthesize personChanges=_personChanges;
@property(retain) NSMutableArray *momentChanges; // @synthesize momentChanges=_momentChanges;
@property(retain) NSMutableSet *representedAssetJobScenarios; // @synthesize representedAssetJobScenarios=_representedAssetJobScenarios;
@property(retain) NSMutableDictionary *assetIdentifierToFlagsMap; // @synthesize assetIdentifierToFlagsMap=_assetIdentifierToFlagsMap;
- (void).cxx_destruct;
@property(readonly) unsigned long long uniqueChangeObjectCount;
- (id)changedAssetIdentifiers;
- (_Bool)hasChanges;
- (_Bool)hasAssetChanges;
- (_Bool)hasPersonChanges;
- (void)addPersonChange:(id)arg1;
- (_Bool)hasMomentChanges;
- (void)addMomentChange:(id)arg1;
- (_Bool)representsUserForegroundJobScenario;
- (void)mergeRepresentedJobScenario:(unsigned long long)arg1;
- (void)mergeFlags:(int)arg1 forAssetWithIdentifier:(id)arg2;
- (void)drain;
- (id)snapshotAndDrain;
- (id)init;

@end
