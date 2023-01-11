//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ChatKit/NSSecureCoding-Protocol.h>

@class IMDoubleLinkedListNode, NSDate, NSString;

@interface CKChatItemCachedSizeMetrics : NSObject <NSSecureCoding>
{
    NSString *_chatItemGUID;
    NSString *_key;
    NSDate *_lastAccess;
    IMDoubleLinkedListNode *_node;
    struct CGSize _size;
    struct UIEdgeInsets _textAlignmentInsets;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) IMDoubleLinkedListNode *node; // @synthesize node=_node;
@property(retain, nonatomic) NSDate *lastAccess; // @synthesize lastAccess=_lastAccess;
@property(nonatomic) struct UIEdgeInsets textAlignmentInsets; // @synthesize textAlignmentInsets=_textAlignmentInsets;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *chatItemGUID; // @synthesize chatItemGUID=_chatItemGUID;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

