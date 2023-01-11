//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSPUnknownContent : NSObject
{
    NSArray *_preserveMessages;
    NSArray *_preserveUntilModifiedMessages;
    NSArray *_preserveFields;
    NSArray *_preserveUntilModifiedFields;
}

- (void).cxx_destruct;
- (void)willModifyObject;
- (void)loadFromUnarchiver:(id)arg1;
- (id)newUnknownContentSnapshot;
- (id)initWithMessages:(id)arg1 messagesAreDiffs:(_Bool)arg2 preserveFields:(id)arg3 preserveUntilModifiedFields:(id)arg4;
- (id)init;

@end

