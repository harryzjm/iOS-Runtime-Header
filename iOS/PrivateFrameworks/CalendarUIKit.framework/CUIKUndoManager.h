//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUndoManager.h>

@class NSError;
@protocol CUIKCommitDelegate, CUIKDecisionDelegate;

@interface CUIKUndoManager : NSUndoManager
{
    id <CUIKCommitDelegate> _commitDelegate;
    id <CUIKDecisionDelegate> _decisionDelegate;
    CDUnknownBlockType _editingManagerProvider;
    NSError *_lastError;
}

- (void).cxx_destruct;
@property(retain) NSError *lastError; // @synthesize lastError=_lastError;
@property(copy, nonatomic) CDUnknownBlockType editingManagerProvider; // @synthesize editingManagerProvider=_editingManagerProvider;
@property(retain) id <CUIKDecisionDelegate> decisionDelegate; // @synthesize decisionDelegate=_decisionDelegate;
@property(retain) id <CUIKCommitDelegate> commitDelegate; // @synthesize commitDelegate=_commitDelegate;

@end
