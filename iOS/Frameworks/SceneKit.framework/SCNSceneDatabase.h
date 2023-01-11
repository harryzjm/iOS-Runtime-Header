//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

@interface SCNSceneDatabase : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_db;
}

+ (_Bool)supportsSecureCoding;
+ (id)lookUpKeyForObjectNamed:(id)arg1 class:(Class)arg2;
+ (id)sceneDatabase;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addInstance:(id)arg1 withName:(id)arg2 class:(Class)arg3;
- (void)dealloc;
- (id)init;

@end
