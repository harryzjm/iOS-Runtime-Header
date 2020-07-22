//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NSMetadataQueryAttributeValueTuple : NSObject
{
    id _attr;
    id _value;
    unsigned long long _count;
    void *_reserved;
}

@property(readonly) unsigned long long count;
@property(readonly, retain) id value;
@property(readonly, copy) NSString *attribute;
- (void)dealloc;
- (id)_init:(id)arg1 attribute:(id)arg2 value:(id)arg3 count:(unsigned long long)arg4;

@end
