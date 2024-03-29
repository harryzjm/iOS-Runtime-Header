//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary;

@interface CMFallStatsItemsIterator : NSObject
{
    NSData *_data;
    NSDictionary *_item;
    struct Reader fMslReader;
    struct MemoryDelegate fMslReaderDelegate;
    struct ReaderIterator fMslIterator;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end

