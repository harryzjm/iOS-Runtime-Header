//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CalDefaultDictionary, NSDictionary, NSMutableDictionary;

@interface CUIKObjectGroup : NSObject
{
    NSDictionary *_originalObjectMap;
    NSMutableDictionary *_objectMap;
    CalDefaultDictionary *_spawnedObjectIdentifiers;
}

- (void).cxx_destruct;
@property(retain) CalDefaultDictionary *spawnedObjectIdentifiers; // @synthesize spawnedObjectIdentifiers=_spawnedObjectIdentifiers;
@property(retain) NSMutableDictionary *objectMap; // @synthesize objectMap=_objectMap;
@property(retain) NSDictionary *originalObjectMap; // @synthesize originalObjectMap=_originalObjectMap;

@end
