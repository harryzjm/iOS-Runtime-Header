//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CFPBJSONReader : NSObject
{
    NSMutableDictionary *_objNamesToPropMaps;
    NSMutableDictionary *_propertyCache;
}

- (void).cxx_destruct;
- (id)readFromJsonDictionary:(id)arg1 usingMessageType:(Class)arg2;
- (id)init;

@end
