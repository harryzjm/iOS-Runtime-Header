//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, RBSProcessHandle;

@interface FBSceneClientHandshake : NSObject
{
    RBSProcessHandle *_handle;
    NSSet *_remnants;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *remnants; // @synthesize remnants=_remnants;
@property(readonly, nonatomic) RBSProcessHandle *handle; // @synthesize handle=_handle;
- (id)description;
- (id)_initWithHandle:(id)arg1 remnants:(id)arg2;
- (id)init;

@end
