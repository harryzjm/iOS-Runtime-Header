//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol NSFastEnumeration;

@interface __NSFastEnumerationEnumerator
{
    id <NSFastEnumeration> _obj;
    id _origObj;
    unsigned long long _index;
    unsigned long long _count;
    unsigned long long _mut;
    id _objects[16];
    CDStruct_58648341 _state;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)nextObject;
- (id)initWithObject:(id)arg1;

@end

