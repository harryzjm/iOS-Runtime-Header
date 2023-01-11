//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMCore/NSCopying-Protocol.h>

@class IMItem, NSString;

@interface IMChatItem : NSObject <NSCopying>
{
    IMItem *_item;
}

- (void).cxx_destruct;
- (_Bool)isReplyContextPreview;
@property(readonly, retain, nonatomic) NSString *balloonBundleID;
- (void)_setTimeAdded:(id)arg1;
- (id)_timeAdded;
- (id)_timeStale;
- (id)_parentItem;
- (id)_item;
- (id)_initWithItem:(id)arg1;
@property(readonly, nonatomic) _Bool canReply;
@property(readonly, nonatomic) _Bool canDelete;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)itemIsReplyCount;
- (id)threadGroupIdentifier;
- (_Bool)itemIsThreadOriginatorWithThreadIdentifier:(id *)arg1;
- (_Bool)itemIsThreadOriginator;
- (_Bool)itemIsReplyContextPreview;
- (_Bool)itemIsReply;

@end
