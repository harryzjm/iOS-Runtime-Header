//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface PBObjectToRepresentationCoercion : NSObject
{
    Class _theClass;
    NSMutableDictionary *_coercionBlockByType;
    NSMutableOrderedSet *_typeOrder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableOrderedSet *typeOrder; // @synthesize typeOrder=_typeOrder;
@property(retain, nonatomic) NSMutableDictionary *coercionBlockByType; // @synthesize coercionBlockByType=_coercionBlockByType;
@property(retain, nonatomic) Class theClass; // @synthesize theClass=_theClass;
- (void)createRepresentationOfType:(id)arg1 fromObject:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)canCoerceToType:(id)arg1;
- (id)availableExportTypes;
- (void)addCoercionToType:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithClass:(Class)arg1;

@end

