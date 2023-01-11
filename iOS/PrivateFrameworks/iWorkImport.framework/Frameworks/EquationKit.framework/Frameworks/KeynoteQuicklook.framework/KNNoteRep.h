//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSDrawables/TSDRep.h>

#import <KeynoteQuicklook/TSDContainerRep-Protocol.h>
#import <KeynoteQuicklook/TSWPRepParent-Protocol.h>
#import <KeynoteQuicklook/TSWPStorageObserver-Protocol.h>

@class NSObject, NSString, TSWPRep;
@protocol TSDContainerInfo;

@interface KNNoteRep : TSDRep <TSWPRepParent, TSDContainerRep, TSWPStorageObserver>
{
    TSWPRep *_containedRep;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TSWPRep *containedRep; // @synthesize containedRep=_containedRep;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(unsigned long long)arg4;
- (void)willEndEditingContainedInfo:(id)arg1;
- (void)willBeginEditingContainedInfo:(id)arg1;
@property(readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
- (_Bool)shouldShowCollaboratorCursorHighlight;
- (id)editingRep;
- (double)columnHeight;
- (id)childReps;
- (void)updateChildrenFromLayout;
- (_Bool)canBeginEditingChildRepOnDoubleTap:(id)arg1;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
