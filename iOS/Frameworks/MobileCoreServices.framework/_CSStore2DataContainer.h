//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _CSStore2DataContainer : NSObject
{
    struct Data *p;
    unsigned int pAllocatedLength;
}

- (void)dealloc;
- (id)initWithBytesNoCopy:(struct Data *)arg1 length:(unsigned int)arg2;
- (id)init;

@end

