//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICSearchIndexableTarget-Protocol.h>

@class ICAttachment, NSString;

@interface ICAttachmentLocation <ICSearchIndexableTarget>
{
}

+ (id)newAttachmentLocationWithContext:(id)arg1;
@property(readonly, nonatomic) NSString *formattedAddressWithoutAttachmentTitle;
- (id)targetSearchIndexable;

// Remaining properties
@property(retain, nonatomic) ICAttachment *attachment; // @dynamic attachment;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool placeUpdated; // @dynamic placeUpdated;
@property(readonly) Class superclass;

@end
