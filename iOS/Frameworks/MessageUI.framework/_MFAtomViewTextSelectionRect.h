//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITextSelectionRect.h>

__attribute__((visibility("hidden")))
@interface _MFAtomViewTextSelectionRect : UITextSelectionRect
{
    _Bool containsStart;
    _Bool containsEnd;
    _Bool isVertical;
    long long writingDirection;
    struct CGRect rect;
}

@property(nonatomic) _Bool isVertical; // @synthesize isVertical;
@property(nonatomic) _Bool containsEnd; // @synthesize containsEnd;
@property(nonatomic) _Bool containsStart; // @synthesize containsStart;
@property(nonatomic) long long writingDirection; // @synthesize writingDirection;
@property(nonatomic) struct CGRect rect; // @synthesize rect;

@end

