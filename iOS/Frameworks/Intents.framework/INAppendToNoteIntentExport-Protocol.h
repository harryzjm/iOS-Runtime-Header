//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INNote, INNoteContent;

@protocol INAppendToNoteIntentExport <NSObject, JSExport>
@property(copy, nonatomic) INNoteContent *content;
@property(copy, nonatomic) INNote *targetNote;
- (id)init;
@end

