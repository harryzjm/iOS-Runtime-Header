//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OITSUNoCopyDictionary, PDRootTimeNode;

__attribute__((visibility("hidden")))
@interface PDAnimation : NSObject
{
    PDRootTimeNode *mRootTimeNode;
    OITSUNoCopyDictionary *mBuildMap;
}

+ (id)exitSubTypeMap;
+ (id)entranceSubTypeMap;
- (void).cxx_destruct;
- (id)description;
- (void)setBuildMap:(id)arg1;
- (id)buildMap;
- (id)addRootTimeNode;
- (id)rootTimeNode;
- (id)init;

@end

