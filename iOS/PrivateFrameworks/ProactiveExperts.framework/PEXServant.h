//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PEXServant : NSObject
{
}

- (unsigned char)loadRecentNamesWithNamedEntityHandler:(CDUnknownBlockType)arg1 contactNameItemHandler:(CDUnknownBlockType)arg2 source:(unsigned char)arg3 objects:(id)arg4;
- (unsigned char)loadNamesWithNamedEntityHandler:(CDUnknownBlockType)arg1 contactNameItemHandler:(CDUnknownBlockType)arg2 detectedSince:(id)arg3;
- (id)nameItemsWithLimit:(unsigned long long)arg1;
- (id)quickTypeItemsForCriteria:(id)arg1 limit:(unsigned long long)arg2;

@end

