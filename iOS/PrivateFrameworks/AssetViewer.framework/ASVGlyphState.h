//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol ASVGlyphStateDelegate;

@interface ASVGlyphState : NSObject
{
    CDStruct_0e8a9a91 _quaternionTarget;
    MISSING_TYPE *_scaleTarget;
    MISSING_TYPE *_translationTarget;
    unsigned long long _snapState;
    id <ASVGlyphStateDelegate> _delegate;
}

@property(nonatomic) __weak id <ASVGlyphStateDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (MISSING_TYPE *)computeTranslationTarget;
- (MISSING_TYPE *)computeScaleTarget;
- (CDStruct_183601bc)computeQuaternionTarget;
- (void)setTranslationTarget: /* Error: Ran out of types for this method. */;
@property(readonly, nonatomic) MISSING_TYPE *translationTarget;
- (void)setScaleTarget: /* Error: Ran out of types for this method. */;
@property(readonly, nonatomic) MISSING_TYPE *scaleTarget;
- (void)setQuaternionTarget:(CDStruct_183601bc)arg1;
@property(readonly, nonatomic) CDStruct_183601bc quaternionTarget;
@property(nonatomic) unsigned long long snapState;
- (id)init;

@end

