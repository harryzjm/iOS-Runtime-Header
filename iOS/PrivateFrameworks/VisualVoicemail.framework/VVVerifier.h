//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface VVVerifier : NSObject
{
    NSMutableDictionary *_checkpointDictionary;
    NSArray *_keyDescriptions;
}

+ (id)sharedVerifier;
- (void).cxx_destruct;
- (id)humanReadableConfigurationDictionary:(id *)arg1;
- (void)_mapFromSourceDictionary:(id)arg1 destinationDictionary:(id)arg2 inKey:(id)arg3 outDescription:(id)arg4;
- (id)configurationDictionary;
- (void)_checkpointDictionaryChanged;
- (id)readableError;
- (id)keyDescriptions;
- (_Bool)valueForCheckpointKey:(id)arg1 exists:(_Bool *)arg2;
- (void)storeValue:(_Bool)arg1 forCheckpointKey:(id)arg2;
- (void)_saveCheckpointDictionary;
- (id)_checkpointDictionary;
- (id)_checkpointDictionaryFilePath;

@end

