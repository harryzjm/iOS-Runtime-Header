//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsUI/NSObject-Protocol.h>

@protocol NULayoutContext;

@protocol NUSizer <NSObject>
@property(readonly, nonatomic) _Bool flexible;
- (struct CGRect)frameInBounds:(struct CGRect)arg1 cursor:(double)arg2 options:(struct NULayoutOptions)arg3 layoutContext:(id <NULayoutContext>)arg4;
@end
