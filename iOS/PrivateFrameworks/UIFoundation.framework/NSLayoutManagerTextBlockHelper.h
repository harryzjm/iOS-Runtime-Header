//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSTextBlock;

@interface NSLayoutManagerTextBlockHelper : NSObject
{
    NSTextBlock *_block;
    struct CGRect _layoutRect;
    struct CGRect _boundsRect;
}

- (void)dealloc;
- (id)initWithTextBlock:(id)arg1 layoutRect:(struct CGRect)arg2 boundsRect:(struct CGRect)arg3;

@end

