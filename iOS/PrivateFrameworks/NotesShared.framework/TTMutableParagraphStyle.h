//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TTTodo;

@interface TTMutableParagraphStyle
{
}

+ (id)paragraphStyleNamed:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) long long alignment; // @dynamic alignment;
@property(nonatomic) unsigned int hints; // @dynamic hints;
@property(nonatomic) unsigned long long indent; // @dynamic indent;
@property(nonatomic) _Bool needsListCleanup; // @dynamic needsListCleanup;
@property(nonatomic) _Bool needsParagraphCleanup; // @dynamic needsParagraphCleanup;
@property(nonatomic) unsigned long long startingItemNumber; // @dynamic startingItemNumber;
@property(nonatomic) unsigned int style; // @dynamic style;
@property(retain, nonatomic) TTTodo *todo; // @dynamic todo;
@property(nonatomic) long long writingDirection; // @dynamic writingDirection;

@end

