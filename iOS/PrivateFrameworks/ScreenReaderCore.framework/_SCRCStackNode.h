//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _SCRCStackNode : NSObject
{
    id _object;
    _SCRCStackNode *_prev;
    _SCRCStackNode *_next;
}

@property(retain, nonatomic) _SCRCStackNode *next; // @synthesize next=_next;
@property(retain, nonatomic) _SCRCStackNode *prev; // @synthesize prev=_prev;
@property(retain, nonatomic) id object; // @synthesize object=_object;
- (void).cxx_destruct;

@end

