//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class RLMObjectBase;

@interface RLMWeakObjectHandle : NSObject <NSCopying>
{
    struct BasicRow<realm::Table> _row;
    struct RLMClassInfo *_info;
    Class _objectClass;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) RLMObjectBase *object;
- (id)initWithObject:(id)arg1;

@end
