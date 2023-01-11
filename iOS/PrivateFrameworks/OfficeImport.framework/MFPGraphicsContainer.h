//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFPGraphicsState;

__attribute__((visibility("hidden")))
@interface MFPGraphicsContainer : NSObject
{
    MFPGraphicsState *mParentGraphicsState;
    struct CGAffineTransform mContainerTransform;
}

- (void).cxx_destruct;
- (struct CGAffineTransform)containerTransform;
- (id)parentGraphicsState;
- (id)initWithParentGraphicsState:(id)arg1 containerTransform:(struct CGAffineTransform)arg2;

@end
