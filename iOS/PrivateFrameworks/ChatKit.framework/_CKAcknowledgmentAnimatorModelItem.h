//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKEntity, NSIndexPath;

@interface _CKAcknowledgmentAnimatorModelItem : NSObject
{
    CKEntity *_entity;
    NSIndexPath *_indexPath;
    long long _ackVoteCount;
    long long _acknowledgmentType;
}

@property(nonatomic) long long acknowledgmentType; // @synthesize acknowledgmentType=_acknowledgmentType;
@property(nonatomic) long long ackVoteCount; // @synthesize ackVoteCount=_ackVoteCount;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) CKEntity *entity; // @synthesize entity=_entity;
- (void).cxx_destruct;

@end

