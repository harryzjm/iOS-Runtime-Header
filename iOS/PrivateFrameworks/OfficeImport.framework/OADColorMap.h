//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADColorMap : NSObject
{
    NSMutableDictionary *mMappings;
}

- (void)addDefaultMappings:(_Bool)arg1;
- (id)description;
- (_Bool)isEmpty;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)addMapping:(int)arg1 index:(int)arg2;
- (int)mappingForIndex:(int)arg1;
- (void)dealloc;
- (id)init;

@end

