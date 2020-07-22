//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, OCPPackagePart;

__attribute__((visibility("hidden")))
@interface OAXTableStyleCache : NSObject
{
    OCPPackagePart *mStylesPart;
    NSString *mDefaultStyleId;
    NSMutableDictionary *mCache;
}

- (struct _xmlNode *)defaultStyleNode;
- (struct _xmlNode *)styleNodeForId:(id)arg1;
- (void)setStyleNode:(struct _xmlNode *)arg1 forId:(id)arg2;
- (void)setDefaultStyleId:(id)arg1;
- (id)defaultStyleId;
- (void)setStylesPart:(id)arg1;
- (void)dealloc;
- (id)init;

@end

