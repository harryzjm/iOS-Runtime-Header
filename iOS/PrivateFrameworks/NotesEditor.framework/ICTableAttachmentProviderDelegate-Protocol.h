//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesEditor/ICTTTextUndoTarget-Protocol.h>
#import <NotesEditor/ICTableDelegate-Protocol.h>
#import <NotesEditor/NSObject-Protocol.h>

@protocol ICTableAttachmentProviderDelegate <NSObject, ICTableDelegate, ICTTTextUndoTarget>
- (void)tableAttachmentSaveOnMainThread;
@end

