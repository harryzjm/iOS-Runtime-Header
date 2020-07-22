//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ODIBending : NSObject
{
    float mSpaceWidth;
    float mSpaceHeight;
    _Bool mWithArrows;
    float mRectHeight;
    unsigned int mMaxNodeCount;
    unsigned int mMaxColumnCount;
}

+ (_Bool)mapIdentifier:(id)arg1 state:(id)arg2;
+ (unsigned int)mapLogicalBoundsWithShapeSize:(struct CGSize)arg1 spaceSize:(struct CGSize)arg2 maxNodeCount:(unsigned int)arg3 maxColumnCount:(unsigned int)arg4 state:(id)arg5;
- (void)mapWithState:(id)arg1;
- (void)setMaxColumnCount:(unsigned int)arg1;
- (void)setMaxNodeCount:(unsigned int)arg1;
- (void)setRectHeight:(float)arg1;
- (id)initWithArrows:(_Bool)arg1;

@end
