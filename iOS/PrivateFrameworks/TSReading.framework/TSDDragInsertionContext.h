//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSDDragInsertionContext
{
    struct CGPoint mPreferredCenter;
    _Bool mPreferredCenterRequired;
    _Bool mShouldEndEditing;
    _Bool mFromDragToInsertController;
    _Bool mInsertWillBeDiscarded;
}

- (_Bool)insertWillBeDiscarded;
- (_Bool)fromDragToInsertController;
- (_Bool)shouldEndEditing;
- (struct CGPoint)preferredCenter;
- (_Bool)isPreferredCenterRequired;
- (_Bool)isInteractive;
- (_Bool)insertFromDrag;
- (_Bool)insertFloating;
- (_Bool)hasPreferredCenter;
- (id)init;
- (id)initWithPreferredCenter:(struct CGPoint)arg1 required:(_Bool)arg2 shouldEndEditing:(_Bool)arg3 fromDragToInsertController:(_Bool)arg4 insertWillBeDiscarded:(_Bool)arg5;

@end

