//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSSet;

@interface MusicMediaEntityCustomPropertyHandlersCollection : NSObject
{
    NSMutableSet *_customProperties;
    NSMutableDictionary *_customPropertyValueHandlers;
}

- (void).cxx_destruct;
- (void)addCustomProperty:(id)arg1 withValueHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSDictionary *customPropertyValueHandlers;
@property(readonly, nonatomic) NSSet *customProperties;
- (id)init;

@end

