//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUndoManager.h>

@class WKContentView;

__attribute__((visibility("hidden")))
@interface WKQuirkyNSUndoManager : NSUndoManager
{
    WKContentView *_contentView;
}

- (void).cxx_destruct;
@property(readonly) __weak WKContentView *contentView; // @synthesize contentView=_contentView;
- (void)redo;
- (void)undo;
- (_Bool)canRedo;
- (_Bool)canUndo;
- (id)initWithContentView:(id)arg1;

@end

