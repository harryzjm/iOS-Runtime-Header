//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCETaggedDoubleListObject : NSObject
{
    struct TSCETaggedDoubleList _taggedList;
}

+ (id)createFromVector:(const struct TSCEVector *)arg1 functionSpec:(id)arg2 argumentIndex:(int)arg3 evaluationContext:(struct TSCEEvaluationContext *)arg4 ignoreError:(_Bool)arg5 ignoreDuplicates:(_Bool)arg6;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct TSCETaggedDoubleList *)taggedDoubleList;

@end

