//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSMutableDictionary, _UISelectorDictionary;

__attribute__((visibility("hidden")))
@interface _UICommandIdentifierDictionary : NSObject <NSCopying>
{
    _UISelectorDictionary *_actionDictionary;
    NSMutableDictionary *_actionPropertyListDictionary;
}

- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)removeEntriesFromDictionary:(id)arg1;
- (id)intersectingIdentifiersFromDictionary:(id)arg1;
- (_Bool)intersectsEntriesFromDictionary:(id)arg1;
- (void)removeObjectForAction:(SEL)arg1 propertyList:(id)arg2;
- (void)setObject:(id)arg1 forAction:(SEL)arg2 propertyList:(id)arg3;
- (id)objectForAction:(SEL)arg1 propertyList:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end
