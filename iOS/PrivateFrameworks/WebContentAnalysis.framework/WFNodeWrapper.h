//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFNodeWrapper : NSObject
{
    struct _xmlNode *_node;
}

- (void)dealloc;
- (struct _xmlNode *)node;
- (id)initWithNode:(struct _xmlNode *)arg1;

@end

