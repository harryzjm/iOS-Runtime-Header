//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSCEFormulaRewriteInfo_RangeEntry : NSObject
{
    struct _NSRange _range;
    TSKUIDStructVectorTemplate_de88e035 _orderedUuids;
    unsigned int _offset;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property unsigned int offset; // @synthesize offset=_offset;
@property(readonly) const void *orderedUuids; // @synthesize orderedUuids=_orderedUuids;
@property(readonly) struct _NSRange range; // @synthesize range=_range;
- (void)saveToMessage:(void *)arg1;
- (id)initFromMessage:(const void *)arg1;
- (id)initWithRange:(struct _NSRange)arg1 orderedUuids:(const void *)arg2 offset:(unsigned int)arg3;

@end

