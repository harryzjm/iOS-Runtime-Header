//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC9Coherence18ObjCRenameSequence : NSObject
{
    MISSING_TYPE *renameSequence;
    MISSING_TYPE *renameAddedBySequence;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (void)addAddedByVersion:(id)arg1;
- (void)addAddedByReplica:(id)arg1 range:(struct _NSRange)arg2;
- (void)addWithReplica:(id)arg1 range:(struct _NSRange)arg2;
@property(nonatomic, readonly) _Bool isEmpty;

@end
