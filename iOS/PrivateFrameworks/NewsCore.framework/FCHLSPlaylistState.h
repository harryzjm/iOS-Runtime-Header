//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCHLSKey, FCHLSMap, FCHLSStreamInf, NSMutableArray, NSMutableDictionary;

@interface FCHLSPlaylistState : NSObject
{
    NSMutableDictionary *_mutableGroups;
    FCHLSMap *_currentMap;
    double _currentDuration;
    NSMutableArray *_mutableSegments;
    FCHLSStreamInf *_currentStreamInf;
    NSMutableArray *_mutableStreamInfs;
    FCHLSKey *_currentKey;
    NSMutableDictionary *_mutableSessionData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *mutableSessionData; // @synthesize mutableSessionData=_mutableSessionData;
@property(retain, nonatomic) FCHLSKey *currentKey; // @synthesize currentKey=_currentKey;
@property(retain, nonatomic) NSMutableArray *mutableStreamInfs; // @synthesize mutableStreamInfs=_mutableStreamInfs;
@property(retain, nonatomic) FCHLSStreamInf *currentStreamInf; // @synthesize currentStreamInf=_currentStreamInf;
@property(retain, nonatomic) NSMutableArray *mutableSegments; // @synthesize mutableSegments=_mutableSegments;
@property(nonatomic) double currentDuration; // @synthesize currentDuration=_currentDuration;
@property(retain, nonatomic) FCHLSMap *currentMap; // @synthesize currentMap=_currentMap;
@property(retain, nonatomic) NSMutableDictionary *mutableGroups; // @synthesize mutableGroups=_mutableGroups;
- (id)init;

@end
