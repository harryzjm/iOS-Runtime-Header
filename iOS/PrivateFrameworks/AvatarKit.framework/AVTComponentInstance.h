//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SCNNode;

@interface AVTComponentInstance : NSObject
{
    SCNNode *_assetNode;
    NSString *_assetImage;
    NSArray *_assets;
}

+ (id)assetNodeWithPath:(id)arg1;
@property(readonly) NSString *assetImage; // @synthesize assetImage=_assetImage;
@property(readonly) SCNNode *assetNode; // @synthesize assetNode=_assetNode;
- (void).cxx_destruct;
- (_Bool)has3D;
- (_Bool)has2D;
- (void)updateMaterialsWithComponent:(id)arg1;
- (id)initWithComponent:(id)arg1 forCaching:(_Bool)arg2;
- (id)initWithComponent:(id)arg1;
- (void)_commonInit:(_Bool)arg1 component:(id)arg2;
- (void)dealloc;

@end

